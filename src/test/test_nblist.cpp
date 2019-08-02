#include "files.h"
#include "mod_md.h"
#include "mod_nblist.h"
#include "test/ff.h"
#include "test/rt.h"
#include "test/test.h"
#include "util_io.h"
#include "util_rc_man.h"

using namespace TINKER_NAMESPACE;
using namespace test;

// static const int ans[5][216][70];
#include "test_nblist.hh"

static int usage_ = calc::xyz | calc::mass | calc::traj | calc::energy;

// if all integers in ref can be found in array
static bool find_match(const int* array, int na, int iframe, int iatom);

TEST_CASE("NBList-ArBox", "[ff][nblist][arbox]") {
  const char* k = "test_arbox.key";
  const char* x1 = "test_arbox.arc";
  const char* p = "amoeba09.prm";

  std::string k0 = arbox_key;
  file fke(k, k0);

  file fx1(x1, arbox_arc);
  file fpr(p, amoeba09_prm);

  const char* argv[] = {"dummy", x1};
  int argc = 2;
  test_begin_1_xyz(argc, argv);

  use_data = usage_;
  trajn = 5;
  tinker_gpu_runtime_initialize();

  copyin_tinker_arc(x1, 1, 5, 1);

  const int maxnlst = vlist_obj_.maxnlst;
  std::vector<int> nlst;
  nlst.resize(n);
  std::vector<int> lst;
  lst.resize(n * maxnlst);

  for (int ifr = 0;;) {
    copyout_array(nlst.data(), vlist_obj_.nlst, n);
    copyout_array(lst.data(), vlist_obj_.lst, n * maxnlst);

    for (int iatom = 0; iatom < n; ++iatom)
      REQUIRE(find_match(&lst[iatom * maxnlst], nlst[iatom], ifr, iatom));

    ++ifr;
    // update nblist
    if (ifr < trajn) {
      goto_frame0(ifr);
      evdw_reduce_xyz();
      nblist_data(rc_man::evolve);
    } else
      break;
  }

  tinker_gpu_runtime_finish();
  test_end();
}

#include <set>
static bool find_match(const int* array, int na, int iframe, int iatom) {
  std::set<int> array_set(array, array + na);
  std::vector<int> missing;

  for (int i = 0; i < nmax; ++i) {
    int r = ans[iframe][iatom][i];
    if (r >= 0) {
      if (!array_set.count(r)) {
        missing.push_back(r);
      }
    }
  }

  if (missing.size() == 0) {
    return true;
  } else {
    std::string line = format(
        "The following neighbors of atom {:3d} in frame {:d} are missing:",
        iatom + 1, iframe + 1);
    for (auto i : missing) {
      line += format(" {:3d}", i + 1);
    }
    line += "\n";
    print(stdout, line);
    return false;
  }
}
