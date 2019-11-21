#pragma once
#ifndef __CUDACC__
#   error This header can only be included inside CUDA source files.
#endif
#include "error.h"
#include "gpu_card.h"
#include <utility>


TINKER_NAMESPACE_BEGIN
/**
 * \ingroup nvidia
 * \brief Launch a CUDA kernel with a specified thread block size.
 * \param block_size Thread block size.
 * \param nparallel  Loop limit.
 * \param k          CUDA `__global__` kernel.
 * \param args       Argument list of the kernel.
 */
template <class K, class... Ts>
void launch_kernel2(int block_size, int nparallel, K k, Ts&&... args)
{
   int gs = (nparallel + block_size - 1) / block_size;
   k<<<gs, block_size, 0, async_acc>>>(std::forward<Ts>(args)...);
   if (async_acc == nullptr) {
      check_rt(cudaStreamSynchronize(nullptr));
   }
}


/**
 * \ingroup nvidia
 * \brief Launch a CUDA kernel with BLOCK_DIM threads per block.
 * \param nparallel Loop limit.
 * \param k         CUDA `__global__` kernel.
 * \param args      Argument list of the kernel.
 * \see BLOCK_DIM
 */
template <class K, class... Ts>
void launch_kernel1(int nparallel, K k, Ts&&... args)
{
   const int block_size = BLOCK_DIM;
   launch_kernel2(block_size, nparallel, k, std::forward<Ts>(args)...);
}
TINKER_NAMESPACE_END
