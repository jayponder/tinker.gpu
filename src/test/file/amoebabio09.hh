namespace commit_6fe8e913 {
const char* amoebabio09_prm =
R"**(
      ##############################
      ##                          ##
      ##  Force Field Definition  ##
      ##                          ##
      ##############################


forcefield              AMOEBA-BIO-2009

bond-cubic              -2.55
bond-quartic            3.793125
angle-trigonal          IN-PLANE
angle-cubic             -0.014
angle-quartic           0.000056
angle-pentic            -0.0000007
angle-sextic            0.000000022
opbendtype              ALLINGER
opbend-cubic            -0.014
opbend-quartic          0.000056
opbend-pentic           -0.0000007
opbend-sextic           0.000000022
torsionunit             0.5
vdwtype                 BUFFERED-14-7
radiusrule              CUBIC-MEAN
radiustype              R-MIN
radiussize              DIAMETER
epsilonrule             HHG
dielectric              1.0
polarization            MUTUAL
vdw-12-scale            0.0
vdw-13-scale            0.0
vdw-14-scale            1.0
vdw-15-scale            1.0
mpole-12-scale          0.0
mpole-13-scale          0.0
mpole-14-scale          0.4
mpole-15-scale          0.8
polar-12-scale          0.0
polar-13-scale          0.0
polar-14-scale          1.0
polar-15-scale          1.0
polar-12-intra          0.0
polar-13-intra          0.0
polar-14-intra          0.5
polar-15-intra          1.0
direct-11-scale         0.0
direct-12-scale         1.0
direct-13-scale         1.0
direct-14-scale         1.0
mutual-11-scale         1.0
mutual-12-scale         1.0
mutual-13-scale         1.0
mutual-14-scale         1.0


      #############################
      ##                         ##
      ##  Literature References  ##
      ##                         ##
      #############################


This file contains the 2009 AMOEBA biopolymer force field, with updates
to the original AMOEBA protein parameters made during Fall 2009, and a
beta version of AMOEBA nucleic acid parameters due to Chuanjie Wu

Y. Shi, Z. Xia, J. Zhang, R. Best, J. W. Ponder and P. Ren, "The Polarizable
Atomic Multipole-Based AMOEBA Force Field for Proteins", J. Chem. Theory
Comput., 9, 4046-4063 (2013)

P. Ren, C. Wu and J. W. Ponder, "Polarizable Atomic Multipole-Based
Molecular Mechanics for Organic Molecules", J. Chem. Theory Comput.,
7, 3143-3161 (2011)

J. C. Wu, J.-P. Piquemal, R. Chaudret, P. Reinhardt and P. Ren,
"Polarizable Molecular Dynamics Simulation of Zn(II) in Water Using
the AMOEBA Force Field", J. Chem. Theory Comput., 6, 2059-2070 (2010)

A. Grossfield, P. Ren, J. W. Ponder, "Ion Solvation Thermodynamics from
Simulation with a Polarizable Force Field", J. Am. Chem. Soc., 125,
15671-15682 (2003)

P. Ren and J. W. Ponder, "Polarizable Atomic Multipole Water Model for
Molecular Mechanics Simulation", J. Phys. Chem. B, 107, 5933-5947 (2003)

Monovalent ion parameters taken from Zhi Wang, Ph.D. thesis, Department
of Chemistry, Washington University in St. Louis, May 2018; available
from https://dasher.wustl.edu/ponder/


   ###############################################
   ##                                           ##
   ##  AMOEBA Protein Force Field Atom Classes  ##
   ##                                           ##
   ##   1  Backbone Amide Nitrogen              ##
   ##   2  Glycine Alpha Carbon                 ##
   ##   3  Backbone Carbonyl Carbon             ##
   ##   4  Amide or Guanidinium Hydrogen        ##
   ##   5  Amide Carbonyl Oxygen                ##
   ##   6  Methine Hydrogen                     ##
   ##   7  Methine Carbon                       ##
   ##   8  Methyl or Methylene Carbon           ##
   ##   9  Methyl or Methylene Hydrogen         ##
   ##  10  Hydroxyl Oxygen                      ##
   ##  11  Hydroxyl Hydrogen                    ##
   ##  12  Sulfide or Disulfide Sulfur          ##
   ##  13  Sulfhydryl Hydrogen                  ##
   ##  14  Thiolate Sulfur                      ##
   ##  15  Proline Backbone Nitrogen            ##
   ##  16  Proline Ring Methylene Carbon        ##
   ##  17  Phenyl Carbon                        ##
   ##  18  Phenyl Hydrogen                      ##
   ##  19  Phenolic Oxygen                      ##
   ##  20  Phenolic Hydrogen                    ##
   ##  21  Phenoxide Oxygen                     ##
   ##  22  Indole Carbon                        ##
   ##  23  Indole CH Hydrogen                   ##
   ##  24  Imidazole or Indole NH Nitrogen      ##
   ##  25  Imidazole or Indole NH Hydrogen      ##
   ##  26  Imidazole C=C Carbon                 ##
   ##  27  Imidazole CH Hydrogen                ##
   ##  28  Imidazole N=C-N Carbon               ##
   ##  29  Imidazole C=N Nitrogen               ##
   ##  30  Carboxylate Carbon                   ##
   ##  31  Carboxylate Oxygen                   ##
   ##  32  Carboxylic Acid Carbonyl Oxygen      ##
   ##  33  Carboxylic Acid Hydroxyl Oxygen      ##
   ##  34  Carboxylic Acid Hydrogen             ##
   ##  35  Amine or Ammonium Nitrogen           ##
   ##  36  Ammonium Hydrogen                    ##
   ##  37  Amine Hydrogen                       ##
   ##  38  Guanidinium Hydrogen                 ##
   ##  39  Guanidinium Carbon                   ##
   ##  40  Acetyl or NMe Methyl Carbon          ##
   ##  41  N-Terminal Ammonium Nitrogen         ##
   ##  42  N-Terminal Ammonium Hydrogen         ##
   ##                                           ##
   ###############################################


      #############################
      ##                         ##
      ##  Atom Type Definitions  ##
      ##                         ##
      #############################


atom          1    1    N     "Glycine N"                    7    14.003    3
atom          2    2    CA    "Glycine CA"                   6    12.000    4
atom          3    3    C     "Glycine C"                    6    12.000    3
atom          4    4    HN    "Glycine HN"                   1     1.008    1
atom          5    5    O     "Glycine O"                    8    15.995    1
atom          6    6    H     "Glycine HA"                   1     1.008    1
atom          7    1    N     "Alanine N"                    7    14.003    3
atom          8    7    CA    "Alanine CA"                   6    12.000    4
atom          9    3    C     "Alanine C"                    6    12.000    3
atom         10    4    HN    "Alanine HN"                   1     1.008    1
atom         11    5    O     "Alanine O"                    8    15.995    1
atom         12    6    H     "Alanine HA"                   1     1.008    1
atom         13    8    C     "Alanine CB"                   6    12.000    4
atom         14    9    H     "Alanine HB"                   1     1.008    1
atom         15    7    C     "Valine CB"                    6    12.000    4
atom         16    6    H     "Valine HB"                    1     1.008    1
atom         17    8    C     "Valine CG"                    6    12.000    4
atom         18    9    H     "Valine HG"                    1     1.008    1
atom         19    8    C     "Leucine CB"                   6    12.000    4
atom         20    9    H     "Leucine HB"                   1     1.008    1
atom         21    7    C     "Leucine CG"                   6    12.000    4
atom         22    6    H     "Leucine HG"                   1     1.008    1
atom         23    8    C     "Leucine CD"                   6    12.000    4
atom         24    9    H     "Leucine HD"                   1     1.008    1
atom         25    7    C     "Isoleucine CB"                6    12.000    4
atom         26    6    H     "Isoleucine HB"                1     1.008    1
atom         27    8    C     "Isoleucine CG"                6    12.000    4
atom         28    9    H     "Isoleucine HG"                1     1.008    1
atom         29    8    C     "Isoleucine CG"                6    12.000    4
atom         30    9    H     "Isoleucine HG"                1     1.008    1
atom         31    8    C     "Isoleucine CD"                6    12.000    4
atom         32    9    H     "Isoleucine HD"                1     1.008    1
atom         33    7    CA    "Serine CA"                    6    12.000    4
atom         34    8    C     "Serine CB"                    6    12.000    4
atom         35    9    H     "Serine HB"                    1     1.008    1
atom         36   10    OH    "Serine OG"                    8    15.995    2
atom         37   11    HO    "Serine HG"                    1     1.008    1
atom         38    7    C     "Threonine CB"                 6    12.000    4
atom         39    6    H     "Threonine HB"                 1     1.008    1
atom         40    8    C     "Threonine CG"                 6    12.000    4
atom         41    9    H     "Threonine HG"                 1     1.008    1
atom         42   10    OH    "Threonine O"                  8    15.995    2
atom         43   11    HO    "Threonine H"                  1     1.008    1
atom         44    7    CA    "Cysteine CA"                  6    12.000    4
atom         45    8    C     "Cysteine CB"                  6    12.000    4
atom         46    9    H     "Cysteine HB"                  1     1.008    1
atom         47   12    SH    "Cysteine SG"                 16    31.972    2
atom         48   13    HS    "Cysteine HG"                  1     1.008    1
atom         49   12    SS    "Cystine SG"                  16    31.972    2
atom         50    8    C     "Cysteine Anion CB"            6    12.000    4
atom         51    9    H     "Cysteine Anion HB"            1     1.008    1
atom         52   14    S     "Cysteine Anion S-"           16    31.972    1
atom         53   15    N     "Proline N"                    7    14.003    3
atom         54    7    CA    "Proline CA"                   6    12.000    4
atom         55    3    C     "Proline C"                    6    12.000    3
atom         56    5    O     "Proline O"                    8    15.995    1
atom         57    6    H     "Proline HA"                   1     1.008    1
atom         58   16    C     "Proline CB"                   6    12.000    4
atom         59    9    H     "Proline HB"                   1     1.008    1
atom         60   16    C     "Proline CG"                   6    12.000    4
atom         61    9    H     "Proline HG"                   1     1.008    1
atom         62   16    C     "Proline CD"                   6    12.000    4
atom         63    6    H     "Proline HD"                   1     1.008    1
atom         64    8    C     "Phenylalanine CB"             6    12.000    4
atom         65    9    H     "Phenylalanine HB"             1     1.008    1
atom         66   17    C     "Phenylalanine CG"             6    12.000    3
atom         67   17    C     "Phenylalanine CD"             6    12.000    3
atom         68   18    H     "Phenylalanine HD"             1     1.008    1
atom         69   17    C     "Phenylalanine CE"             6    12.000    3
atom         70   18    H     "Phenylalanine HE"             1     1.008    1
atom         71   17    C     "Phenylalanine CZ"             6    12.000    3
atom         72   18    H     "Phenylalanine HZ"             1     1.008    1
atom         73    8    C     "Tyrosine CB"                  6    12.000    4
atom         74    9    H     "Tyrosine HB"                  1     1.008    1
atom         75   17    C     "Tyrosine CG"                  6    12.000    3
atom         76   17    C     "Tyrosine CD"                  6    12.000    3
atom         77   18    H     "Tyrosine HD"                  1     1.008    1
atom         78   17    C     "Tyrosine CE"                  6    12.000    3
atom         79   18    H     "Tyrosine HE"                  1     1.008    1
atom         80   17    C     "Tyrosine CZ"                  6    12.000    3
atom         81   19    OH    "Tyrosine OH"                  8    15.995    2
atom         82   20    HO    "Tyrosine HH"                  1     1.008    1
atom         83    8    C     "Tyrosine Anion CB"            6    12.000    4
atom         84    9    H     "Tyrosine Anion HB"            1     1.008    1
atom         85   17    C     "Tyrosine Anion CG"            6    12.000    3
atom         86   17    C     "Tyrosine Anion CD"            6    12.000    3
atom         87   18    H     "Tyrosine Anion HD"            1     1.008    1
atom         88   17    C     "Tyrosine Anion CE"            6    12.000    3
atom         89   18    H     "Tyrosine Anion HE"            1     1.008    1
atom         90   17    C     "Tyrosine Anion CZ"            6    12.000    3
atom         91   21    O-    "Tyrosine Anion O-"            8    15.995    1
atom         92    8    C     "Tryptophan CB"                6    12.000    4
atom         93    9    H     "Tryptophan HB"                1     1.008    1
atom         94   22    C     "Tryptophan CG"                6    12.000    3
atom         95   22    C     "Tryptophan CD1"               6    12.000    3
atom         96   23    H     "Tryptophan HD1"               1     1.008    1
atom         97   22    C     "Tryptophan CD2"               6    12.000    3
atom         98   24    N     "Tryptophan NE1"               7    14.003    3
atom         99   25    HN    "Tryptophan HE1"               1     1.008    1
atom        100   22    C     "Tryptophan CE2"               6    12.000    3
atom        101   22    C     "Tryptophan CE3"               6    12.000    3
atom        102   23    H     "Tryptophan HE3"               1     1.008    1
atom        103   22    C     "Tryptophan CZ2"               6    12.000    3
atom        104   23    H     "Tryptophan HZ2"               1     1.008    1
atom        105   22    C     "Tryptophan CZ3"               6    12.000    3
atom        106   23    H     "Tryptophan HZ3"               1     1.008    1
atom        107   22    C     "Tryptophan CH2"               6    12.000    3
atom        108   23    H     "Tryptophan HH2"               1     1.008    1
atom        109    8    C     "Histidine (+) CB"             6    12.000    4
atom        110    9    H     "Histidine (+) HB"             1     1.008    1
atom        111   26    C     "Histidine (+) CG"             6    12.000    3
atom        112   24    N     "Histidine (+) ND1"            7    14.003    3
atom        113   25    HN    "Histidine (+) HD1"            1     1.008    1
atom        114   26    C     "Histidine (+) CD2"            6    12.000    3
atom        115   27    H     "Histidine (+) HD2"            1     1.008    1
atom        116   28    C     "Histidine (+) CE1"            6    12.000    3
atom        117   27    H     "Histidine (+) HE1"            1     1.008    1
atom        118   24    N     "Histidine (+) NE2"            7    14.003    3
atom        119   25    HN    "Histidine (+) HE2"            1     1.008    1
atom        120    8    C     "Histidine (HD) CB"            6    12.000    4
atom        121    9    H     "Histidine (HD) HB"            1     1.008    1
atom        122   26    C     "Histidine (HD) CG"            6    12.000    3
atom        123   24    N     "Histidine (HD) ND1"           7    14.003    3
atom        124   25    HN    "Histidine (HD) HD1"           1     1.008    1
atom        125   26    C     "Histidine (HD) CD2"           6    12.000    3
atom        126   27    H     "Histidine (HD) HD2"           1     1.008    1
atom        127   28    C     "Histidine (HD) CE1"           6    12.000    3
atom        128   27    H     "Histidine (HD) HE1"           1     1.008    1
atom        129   29    N     "Histidine (HD) NE2"           7    14.003    2
atom        130    8    C     "Histidine (HE) CB"            6    12.000    4
atom        131    9    H     "Histidine (HE) HB"            1     1.008    1
atom        132   26    C     "Histidine (HE) CG"            6    12.000    3
atom        133   29    N     "Histidine (HE) ND1"           7    14.003    2
atom        134   26    C     "Histidine (HE) CD2"           6    12.000    3
atom        135   27    H     "Histidine (HE) HD2"           1     1.008    1
atom        136   28    C     "Histidine (HE) CE1"           6    12.000    3
atom        137   27    H     "Histidine (HE) HE1"           1     1.008    1
atom        138   24    N     "Histidine (HE) NE2"           7    14.003    3
atom        139   25    HN    "Histidine (HE) HE2"           1     1.008    1
atom        140    8    C     "Aspartate CB"                 6    12.000    4
atom        141    9    H     "Aspartate HB"                 1     1.008    1
atom        142   30    C     "Aspartate CG"                 6    12.000    3
atom        143   31    O     "Aspartate OD"                 8    15.995    1
atom        144    8    C     "Aspartic Acid CB"             6    12.000    4
atom        145    9    H     "Aspartic Acid HB"             1     1.008    1
atom        146   30    C     "Aspartic Acid CG"             6    12.000    3
atom        147   32    O     "Aspartic Acid OD1"            8    15.995    1
atom        148   33    OH    "Aspartic Acid OD2"            8    15.995    2
atom        149   34    HO    "Aspartic Acid HD2"            1     1.008    1
atom        150    8    C     "Asparagine CB"                6    12.000    4
atom        151    9    H     "Asparagine HB"                1     1.008    1
atom        152    3    C     "Asparagine CG"                6    12.000    3
atom        153    5    O     "Asparagine OD1"               8    15.995    1
atom        154    1    N     "Asparagine ND2"               7    14.003    3
atom        155    4    HN    "Asparagine HD2"               1     1.008    1
atom        156    8    C     "Glutamate CB"                 6    12.000    4
atom        157    9    H     "Glutamate HB"                 1     1.008    1
atom        158    8    C     "Glutamate CG"                 6    12.000    4
atom        159    9    H     "Glutamate HG"                 1     1.008    1
atom        160   30    C     "Glutamate CD"                 6    12.000    3
atom        161   31    O     "Glutamate OE"                 8    15.995    1
atom        162    8    C     "Glutamic Acid CB"             6    12.000    4
atom        163    9    H     "Glutamic Acid HB"             1     1.008    1
atom        164    8    C     "Glutamic Acid CG"             6    12.000    4
atom        165    9    H     "Glutamic Acid HG"             1     1.008    1
atom        166   30    C     "Glutamic Acid CD"             6    12.000    3
atom        167   32    O     "Glutamic Acid OE1"            8    15.995    1
atom        168   33    OH    "Glutamic Acid OE2"            8    15.995    2
atom        169   34    HO    "Glutamic Acid HE2"            1     1.008    1
atom        170    8    C     "Glutamine CB"                 6    12.000    4
atom        171    9    H     "Glutamine HB"                 1     1.008    1
atom        172    8    C     "Glutamine CG"                 6    12.000    4
atom        173    9    H     "Glutamine HG"                 1     1.008    1
atom        174    3    C     "Glutamine CD"                 6    12.000    3
atom        175    5    O     "Glutamine OE1"                8    15.995    1
atom        176    1    N     "Glutamine NE2"                7    14.003    3
atom        177    4    HN    "Glutamine HE2"                1     1.008    1
atom        178    8    C     "Methionine CB"                6    12.000    4
atom        179    9    H     "Methionine HB"                1     1.008    1
atom        180    8    C     "Methionine CG"                6    12.000    4
atom        181    9    H     "Methionine HG"                1     1.008    1
atom        182   12    S     "Methionine SD"               16    31.972    2
atom        183    8    C     "Methionine CE"                6    12.000    4
atom        184    9    H     "Methionine HE"                1     1.008    1
atom        185    8    C     "Lysine CB"                    6    12.000    4
atom        186    9    H     "Lysine HB"                    1     1.008    1
atom        187    8    C     "Lysine CG"                    6    12.000    4
atom        188    9    H     "Lysine HG"                    1     1.008    1
atom        189    8    C     "Lysine CD"                    6    12.000    4
atom        190    9    H     "Lysine HD"                    1     1.008    1
atom        191    8    C     "Lysine CE"                    6    12.000    4
atom        192    9    H     "Lysine HE"                    1     1.008    1
atom        193   35    N     "Lysine NZ"                    7    14.003    4
atom        194   36    HN    "Lysine HN"                    1     1.008    1
atom        195    8    C     "Lysine (Neutral) CB"          6    12.000    4
atom        196    9    H     "Lysine (Neutral) HB"          1     1.008    1
atom        197    8    C     "Lysine (Neutral) CG"          6    12.000    4
atom        198    9    H     "Lysine (Neutral) HG"          1     1.008    1
atom        199    8    C     "Lysine (Neutral) CD"          6    12.011    4
atom        200    9    H     "Lysine (Neutral) HD"          1     1.008    1
atom        201    8    C     "Lysine (Neutral) CE"          6    12.011    4
atom        202    9    H     "Lysine (Neutral) HE"          1     1.008    1
atom        203   35    N     "Lysine (Neutral) NZ"          7    14.007    3
atom        204   37    HN    "Lysine (Neutral) HN"          1     1.008    1
atom        205    8    C     "Arginine CB"                  6    12.000    4
atom        206    9    H     "Arginine HB"                  1     1.008    1
atom        207    8    C     "Arginine CG"                  6    12.000    4
atom        208    9    H     "Arginine HG"                  1     1.008    1
atom        209    8    C     "Arginine CD"                  6    12.000    4
atom        210    9    H     "Arginine HD"                  1     1.008    1
atom        211    1    N     "Arginine NE"                  7    14.003    3
atom        212   38    HN    "Arginine HE"                  1     1.008    1
atom        213   39    C     "Arginine CZ"                  6    12.000    3
atom        214    1    N     "Arginine NH"                  7    14.003    3
atom        215   38    HN    "Arginine HH"                  1     1.008    1
atom        216    8    C     "Ornithine CB"                 6    12.000    4
atom        217    9    H     "Ornithine HB"                 1     1.008    1
atom        218    8    C     "Ornithine CG"                 6    12.000    4
atom        219    9    H     "Ornithine HG"                 1     1.008    1
atom        220    8    C     "Ornithine CD"                 6    12.000    4
atom        221    9    H     "Ornithine HD"                 1     1.008    1
atom        222   35    N     "Ornithine NE"                 7    14.003    4
atom        223   36    HN    "Ornithine HE"                 1     1.008    1
atom        224   40    C     "Acetyl Cap CH3"               6    12.000    4
atom        225    6    H     "Acetyl Cap H3C"               1     1.008    1
atom        226    3    C     "Acetyl Cap C"                 6    12.000    3
atom        227    5    O     "Acetyl Cap O"                 8    15.995    1
atom        228    1    N     "Amide Cap NH2"                7    14.003    3
atom        229    4    HN    "Amide Cap H2N"                1     1.008    1
atom        230    1    N     "N-MeAmide Cap N"              7    14.003    3
atom        231    4    HN    "N-MeAmide Cap HN"             1     1.008    1
atom        232   40    C     "N-MeAmide Cap CH3"            6    12.000    4
atom        233    6    H     "N-MeAmide Cap H3C"            1     1.008    1
atom        234   41    N     "N-Terminal NH3+"              7    14.003    4
atom        235   42    H     "N-Terminal H3N+"              1     1.008    1
atom        236   35    N     "N-Terminal NH2"               7    14.003    3
atom        237   37    H     "N-Terminal H2N"               1     1.008    1
atom        238   30    C     "C-Terminal COO-"              6    12.000    3
atom        239   31    O     "C-Terminal COO-"              8    15.995    1
atom        240   30    C     "C-Terminal COOH"              6    12.000    3
atom        241   32    O     "C-Terminal COOH"              8    15.995    1
atom        242   33    OH    "C-Terminal COOH"              8    15.995    2
atom        243   34    HO    "C-Terminal COOH"              1     1.008    1
atom        244   41    N     "N-Terminal PRO NH2+"          7    14.003    4
atom        245   42    HN    "N-Terminal PRO H2N+"          1     1.008    1
atom        246    7    CA    "N-Terminal PRO CA"            6    12.000    4
atom        247    3    C     "N-Terminal PRO C"             6    12.000    3
atom        248    5    O     "N-Terminal PRO O"             8    15.995    1
atom        249    6    H     "N-Terminal PRO HA"            1     1.008    1
atom        250   16    C     "N-Terminal PRO CD"            6    12.000    4
atom        251    6    H     "N-Terminal PRO HD"            1     1.008    1
atom        252   43    N*    "Adenine N9"                   7    14.007    3
atom        253   44    CB    "Adenine C4"                   6    12.011    3
atom        254   44    CB    "Adenine C5"                   6    12.011    3
atom        255   45    NB    "Adenine N7"                   7    14.007    2
atom        256   46    CK    "Adenine C8"                   6    12.011    3
atom        257   47    NC    "Adenine N3"                   7    14.007    2
atom        258   48    CQ    "Adenine C2"                   6    12.011    3
atom        259   47    NC    "Adenine N1"                   7    14.007    2
atom        260   49    CA    "Adenine C6"                   6    12.011    3
atom        261   50    H5    "Adenine H2"                   1     1.008    1
atom        262   51    N2    "Adenine N6"                   7    14.007    3
atom        263   52    H     "Adenine H61"                  1     1.008    1
atom        264   52    H     "Adenine H62"                  1     1.008    1
atom        265   50    H5    "Adenine H8"                   1     1.008    1
atom        266   43    N*    "Cytosine N1"                  7    14.007    3
atom        267   53    C     "Cytosine C2"                  6    12.011    3
atom        268   47    NC    "Cytosine N3"                  7    14.007    2
atom        269   49    CA    "Cytosine C4"                  6    12.011    3
atom        270   54    CM    "Cytosine C5"                  6    12.011    3
atom        271   54    CM    "Cytosine C6"                  6    12.011    3
atom        272   55    O     "Cytosine O2"                  8    15.999    1
atom        273   51    N2    "Cytosine N4"                  7    14.007    3
atom        274   52    H     "Cytosine H41"                 1     1.008    1
atom        275   52    H     "Cytosine H42"                 1     1.008    1
atom        276   56    HA    "Cytosine H5"                  1     1.008    1
atom        277   57    H4    "Cytosine H6"                  1     1.008    1
atom        278   43    N*    "Guanine N9"                   7    14.007    3
atom        279   44    CB    "Guanine C4"                   6    12.011    3
atom        280   44    CB    "Guanine C5"                   6    12.011    3
atom        281   45    NB    "Guanine N7"                   7    14.007    2
atom        282   46    CK    "Guanine C8"                   6    12.011    3
atom        283   47    NC    "Guanine N3"                   7    14.007    2
atom        284   49    CA    "Guanine C2"                   6    12.011    3
atom        285   58    NA    "Guanine N1"                   7    14.007    3
atom        286   53    C     "Guanine C6"                   6    12.011    3
atom        287   59    H     "Guanine H1"                   1     1.008    1
atom        288   51    N2    "Guanine N2"                   7    14.007    3
atom        289   52    H     "Guanine H21"                  1     1.008    1
atom        290   52    H     "Guanine H22"                  1     1.008    1
atom        291   55    O     "Guanine O6"                   8    15.999    1
atom        292   50    H5    "Guanine H8"                   1     1.008    1
atom        293   43    N*    "Thymine N1"                   7    14.007    3
atom        294   53    C     "Thymine C2"                   6    12.011    3
atom        295   58    NA    "Thymine N3"                   7    14.007    3
atom        296   53    C     "Thymine C4"                   6    12.011    3
atom        297   54    CM    "Thymine C5"                   6    12.011    3
atom        298   54    CM    "Thymine C6"                   6    12.011    3
atom        299   55    O     "Thymine O2"                   8    15.999    1
atom        300   59    H     "Thymine H3"                   1     1.008    1
atom        301   55    O     "Thymine O4"                   8    15.999    1
atom        302   60    CT    "Thymine C7"                   6    12.011    4
atom        303   61    HC    "Thymine H7"                   1     1.008    1
atom        304   57    H4    "Thymine H6"                   1     1.008    1
atom        305   43    N*    "Uracil N1"                    7    14.007    3
atom        306   53    C     "Uracil C2"                    6    12.011    3
atom        307   58    NA    "Uracil N3"                    7    14.007    3
atom        308   53    C     "Uracil C4"                    6    12.011    3
atom        309   54    CM    "Uracil C5"                    6    12.011    3
atom        310   54    CM    "Uracil C6"                    6    12.011    3
atom        311   55    O     "Uracil O2"                    8    15.999    1
atom        312   59    H     "Uracil H3"                    1     1.008    1
atom        313   55    O     "Uracil O4"                    8    15.999    1
atom        314   56    HA    "Uracil H5"                    1     1.008    1
atom        315   57    H4    "Uracil H6"                    1     1.008    1
atom        316   62    OS    "Ribose O5' (CU)"              8    15.999    2
atom        317   60    CT    "Ribose C5' (CU)"              6    12.011    4
atom        318   61    H1    "Ribose H5'1 (CU)"             1     1.008    1
atom        319   61    H1    "Ribose H5'2 (CU)"             1     1.008    1
atom        320   63    CT    "Ribose C4' (CU)"              6    12.011    4
atom        321   64    H1    "Ribose H4' (CU)"              1     1.008    1
atom        322   62    OS    "Ribose O4' (CU)"              8    15.999    2
atom        323   63    CT    "Ribose C1' (CU)"              6    12.011    4
atom        324   65    H2    "Ribose H1' (CU)"              1     1.008    1
atom        325   63    CT    "Ribose C3' (CU)"              6    12.011    4
atom        326   64    H1    "Ribose H3' (CU)"              1     1.008    1
atom        327   63    CT    "Ribose C2' (CU)"              6    12.011    4
atom        328   64    H1    "Ribose H2'1 (CU)"             1     1.008    1
atom        329   66    OH    "Ribose O2' (CU)"              8    15.999    2
atom        330   67    HO    "Ribose HO'2 (CU)"             1     1.008    1
atom        331   62    OS    "Ribose O3' (CU)"              8    15.999    2
atom        332   62    OS    "Ribose O5' (AG)"              8    15.999    2
atom        333   60    CT    "Ribose C5' (AG)"              6    12.011    4
atom        334   61    H1    "Ribose H5'1 (AG)"             1     1.008    1
atom        335   61    H1    "Ribose H5'2 (AG)"             1     1.008    1
atom        336   63    CT    "Ribose C4' (AG)"              6    12.011    4
atom        337   64    H1    "Ribose H4' (AG)"              1     1.008    1
atom        338   68    OS    "Ribose O4' (AG)"              8    15.999    2
atom        339   63    CT    "Ribose C1' (AG)"              6    12.011    4
atom        340   65    H2    "Ribose H1' (AG)"              1     1.008    1
atom        341   63    CT    "Ribose C3' (AG)"              6    12.011    4
atom        342   64    H1    "Ribose H3' (AG)"              1     1.008    1
atom        343   63    CT    "Ribose C2' (AG)"              6    12.011    4
atom        344   64    H1    "Ribose H2'1 (AG)"             1     1.008    1
atom        345   66    OH    "Ribose O2' (AG)"              8    15.999    2
atom        346   67    HO    "Ribose HO'2 (AG)"             1     1.008    1
atom        347   62    OS    "Ribose O3' (AG)"              8    15.999    2
atom        348   62    OS    "Deoxyribose O5' (CT)"         8    15.999    2
atom        349   60    CT    "Deoxyribose C5' (CT)"         6    12.011    4
atom        350   61    H1    "Deoxyribose H5'1 (CT)"        1     1.008    1
atom        351   61    H1    "Deoxyribose H5'2 (CT)"        1     1.008    1
atom        352   69    CT    "Deoxyribose C4' (CT)"         6    12.011    4
atom        353   64    H1    "Deoxyribose H4' (CT)"         1     1.008    1
atom        354   62    OS    "Deoxyribose O4' (CT)"         8    15.999    2
atom        355   69    CT    "Deoxyribose C1' (CT)"         6    12.011    4
atom        356   65    H2    "Deoxyribose H1' (CT)"         1     1.008    1
atom        357   69    CT    "Deoxyribose C3' (CT)"         6    12.011    4
atom        358   64    H1    "Deoxyribose H3' (CT)"         1     1.008    1
atom        359   69    CT    "Deoxyribose C2' (CT)"         6    12.011    4
atom        360   64    H1    "Deoxyribose H2'1 (CT)"        1     1.008    1
atom        361   64    H1    "Deoxyribose H2'2 (CT)"        1     1.008    1
atom        362   62    OS    "Deoxyribose O3' (CT)"         8    15.999    2
atom        363   62    OS    "Deoxyribose O5' (AG)"         8    15.999    2
atom        364   60    CT    "Deoxyribose C5' (AG)"         6    12.011    4
atom        365   61    H1    "Deoxyribose H5'1 (AG)"        1     1.008    1
atom        366   61    H1    "Deoxyribose H5'2 (AG)"        1     1.008    1
atom        367   69    CT    "Deoxyribose C4' (AG)"         6    12.011    4
atom        368   64    H1    "Deoxyribose H4' (AG)"         1     1.008    1
atom        369   68    OS    "Deoxyribose O4' (AG)"         8    15.999    2
atom        370   69    CT    "Deoxyribose C1' (AG)"         6    12.011    4
atom        371   65    H2    "Deoxyribose H1' (AG)"         1     1.008    1
atom        372   69    CT    "Deoxyribose C3' (AG)"         6    12.011    4
atom        373   64    H1    "Deoxyribose H3' (AG)"         1     1.008    1
atom        374   69    CT    "Deoxyribose C2' (AG)"         6    12.011    4
atom        375   64    H1    "Deoxyribose H2'1 (AG)"        1     1.008    1
atom        376   64    H1    "Deoxyribose H2'2 (AG)"        1     1.008    1
atom        377   62    OS    "Deoxyribose O3' (AG)"         8    15.999    2
atom        378   70    P     "R-Phosphodiester P"          15    30.974    4
atom        379   71    O2    "R-Phosphodiester OP"          8    15.999    1
atom        380   62    OH    "R-5'-Hydroxyl O5'T"           8    15.999    2
atom        381   72    HO    "R-5'-Hydroxyl H5T"            1     1.008    1
atom        382   62    OS    "R-5'-Phosphate O5'"           8    15.999    2
atom        383   70    P     "R-5'-Phosphate P"            15    30.974    4
atom        384   71    O2    "R-5'-Phosphate OP"            8    15.999    1
atom        385   62    OH    "R-3'-Hydroxyl O3'T"           8    15.999    2
atom        386   72    HO    "R-3'-Hydroxyl H3T"            1     1.008    1
atom        387   62    OS    "R-3'-Phosphate O3'"           8    15.999    2
atom        388   70    P     "R-3'-Phosphate P"            15    30.974    4
atom        389   71    O2    "R-3'-Phosphate OP"            8    15.999    1
atom        390   70    P     "D-Phosphodiester P"          15    30.974    4
atom        391   71    O2    "D-Phosphodiester OP"          8    15.999    1
atom        392   62    OH    "D-5'-Hydroxyl O5'T"           8    15.999    2
atom        393   72    HO    "D-5'-Hydroxyl H5T"            1     1.008    1
atom        394   62    OS    "D-5'-Phosphate O5'"           8    15.999    2
atom        395   70    P     "D-5'-Phosphate P"            15    30.974    4
atom        396   71    O2    "D-5'-Phosphate OP"            8    15.999    1
atom        397   62    OH    "D-3'-Hydroxyl O3'T"           8    15.999    2
atom        398   72    HO    "D-3'-Hydroxyl H3T"            1     1.008    1
atom        399   62    OS    "D-3'-Phosphate O3'"           8    15.999    2
atom        400   70    P     "D-3'-Phosphate P"            15    30.974    4
atom        401   71    O2    "D-3'-Phosphate OP"            8    15.999    1
atom        402   73    O     "AMOEBA Water O"               8    15.999    2
atom        403   74    H     "AMOEBA Water H"               1     1.008    1
atom        404   75    Li+   "Lithium Ion Li+"              3     6.941    0
atom        405   76    Na+   "Sodium Ion Na+"              11    22.990    0
atom        406   77    K+    "Potassium Ion K+"            19    39.098    0
atom        407   78    Rb+   "Rubidium Ion Rb+"            37    85.468    0
atom        408   79    Cs+   "Cesium Ion Cs+"              55   132.905    0
atom        409   80    Be+   "Beryllium Ion Be+2"           4     9.012    0
atom        410   81    Mg+   "Magnesium Ion Mg+2"          12    24.305    0
atom        411   82    Ca+   "Calcium Ion Ca+2"            20    40.078    0
atom        412   83    Zn+   "Zinc Ion Zn+2"               30    65.380    0
atom        413   84    F-    "Fluoride Ion F-"              9    18.998    0
atom        414   85    Cl-   "Chloride Ion Cl-"            17    35.453    0
atom        415   86    Br-   "Bromide Ion Br-"             35    79.904    0
atom        416   87    I-    "Iodide Ion I-"               53   126.904    0


      ################################
      ##                            ##
      ##  Van der Waals Parameters  ##
      ##                            ##
      ################################


vdw           1               3.7100     0.1100
vdw           2               3.8200     0.1010
vdw           3               3.8200     0.1060
vdw           4               2.5900     0.0220      0.900
vdw           5               3.3000     0.1120
vdw           6               2.9400     0.0260      0.910
vdw           7               3.6500     0.1010
vdw           8               3.8200     0.1010
vdw           9               2.9800     0.0240      0.920
vdw          10               3.4050     0.1100
vdw          11               2.6550     0.0135      0.910
vdw          12               3.9100     0.3850
vdw          13               3.0000     0.0265      0.980
vdw          14               4.3500     0.3850
vdw          15               3.7100     0.1100
vdw          16               3.8200     0.1010
vdw          17               3.8000     0.0890
vdw          18               2.9800     0.0260      0.920
vdw          19               3.4050     0.1100
vdw          20               2.6550     0.0135      0.910
vdw          21               3.3200     0.1120
vdw          22               3.8000     0.1010
vdw          23               2.9800     0.0260      0.920
vdw          24               3.7100     0.1100
vdw          25               2.5900     0.0220      0.900
vdw          26               3.8000     0.1010
vdw          27               2.9800     0.0260      0.920
vdw          28               3.8000     0.1010
vdw          29               3.7100     0.1100
vdw          30               3.8200     0.1060
vdw          31               3.4500     0.1120
vdw          32               3.3000     0.1120
vdw          33               3.4050     0.1100
vdw          34               2.6550     0.0150      0.910
vdw          35               3.7100     0.1050
vdw          36               2.4800     0.0180      0.910
vdw          37               2.7000     0.0200      0.910
vdw          38               2.4200     0.0200      0.900
vdw          39               3.6500     0.1010
vdw          40               3.8200     0.1010
vdw          41               3.7100     0.1050
vdw          42               2.4800     0.0180      0.910
vdw          43               3.6800     0.1050
vdw          44               3.7800     0.1010
vdw          45               3.5000     0.1010
vdw          46               3.7800     0.1010
vdw          47               3.5000     0.1050
vdw          48               3.7800     0.1010
vdw          49               3.7800     0.1010
vdw          50               2.6000     0.0180      0.910
vdw          51               3.5000     0.1010
vdw          52               2.5500     0.0190      0.910
vdw          53               3.7800     0.1010
vdw          54               3.7800     0.1010
vdw          55               3.3000     0.1120
vdw          56               2.8000     0.0240      0.910
vdw          57               2.8000     0.0240      0.910
vdw          58               3.5000     0.1050
vdw          59               2.3000     0.0101      0.900
vdw          60               3.8200     0.1010
vdw          61               2.9800     0.0240      0.920
vdw          62               3.4050     0.1120
vdw          63               3.8200     0.1010
vdw          64               2.9800     0.0240      0.920
vdw          65               2.9800     0.0240      0.920
vdw          66               3.4050     0.1100
vdw          67               2.6550     0.0135      0.910
vdw          68               3.4050     0.1100
vdw          69               3.8200     0.1010
vdw          70               4.4500     0.3900
vdw          71               3.3600     0.1120
vdw          72               2.6550     0.0135      0.910
vdw          73               3.4050     0.1100
vdw          74               2.6550     0.0135      0.910
vdw          75               2.2000     0.0660
vdw          76               2.9550     0.2800
vdw          77               3.6800     0.3500
vdw          78               3.9000     0.3800
vdw          79               4.1400     0.4200
vdw          80               1.8800     0.0910
vdw          81               2.9400     0.3000
vdw          82               3.6300     0.3500
vdw          83               2.6800     0.2220
vdw          84               3.4300     0.2500
vdw          85               4.1200     0.3400
vdw          86               4.3200     0.4300
vdw          87               4.6100     0.5200


      #####################################
      ##                                 ##
      ##  Van der Waals Pair Parameters  ##
      ##                                 ##
      #####################################


vdwpr        77   85          4.2360     0.1512
vdwpr        77   86          4.3790     0.1664
vdwpr        77   87          4.6360     0.1720
vdwpr        78   85          4.3150     0.1859
vdwpr        78   86          4.4480     0.2068
vdwpr        78   87          4.6900     0.2145
vdwpr        79   85          4.3450     0.2894
vdwpr        79   86          4.4750     0.3307
vdwpr        79   87          4.7110     0.3466


      ##################################
      ##                              ##
      ##  Bond Stretching Parameters  ##
      ##                              ##
      ##################################


bond          1    2          375.00     1.4370
bond          1    3          482.00     1.3450
bond          1    4          487.00     1.0280
bond          1    7          375.00     1.4370
bond          1    8          374.80     1.4460
bond          1   38          487.00     1.0280
bond          1   39          491.40     1.3250
bond          1   40          375.00     1.4370
bond          2    3          345.00     1.5090
bond          2    6          341.00     1.1120
bond          2   30          345.00     1.5090
bond          2   35          381.30     1.4610
bond          2   41          381.30     1.4480
bond          3    5          662.00     1.2255
bond          3    7          345.00     1.5090
bond          3    8          345.00     1.5090
bond          3   15          482.00     1.3450
bond          3   40          345.00     1.5090
bond          6    7          341.00     1.1120
bond          6   16          341.00     1.1120
bond          6   40          341.00     1.1120
bond          7    7          323.00     1.5250
bond          7    8          323.00     1.5250
bond          7   10          410.00     1.4130
bond          7   15          375.00     1.4370
bond          7   16          323.00     1.5250
bond          7   30          345.00     1.5090
bond          7   35          381.30     1.4610
bond          7   41          381.30     1.4480
bond          8    8          323.00     1.5250
bond          8    9          341.00     1.1120
bond          8   10          410.00     1.4130
bond          8   12          215.80     1.8050
bond          8   17          453.20     1.4990
bond          8   22          345.00     1.5090
bond          8   26          453.20     1.4930
bond          8   30          345.00     1.5090
bond          8   35          381.30     1.4480
bond          8   14          216.00     1.8225
bond          9   16          341.00     1.1120
bond         10   11          548.90     0.9470
bond         12   12          188.50     2.0190
bond         12   13          278.40     1.3420
bond         15   16          375.00     1.4370
bond         16   16          323.00     1.5247
bond         16   41          381.30     1.4480
bond         17   17          471.90     1.3887
bond         17   18          370.50     1.1000
bond         17   19          431.60     1.3550
bond         17   21          680.00     1.2747
bond         19   20          548.90     0.9470
bond         22   22          471.90     1.3887
bond         22   23          370.50     1.1010
bond         22   24          653.90     1.3550
bond         24   25          467.60     1.0300
bond         24   26          653.90     1.3730
bond         24   28          653.90     1.3520
bond         26   26          539.60     1.3710
bond         26   27          370.50     1.0810
bond         26   29          670.00     1.3740
bond         27   28          370.50     1.0810
bond         28   29          670.00     1.3270
bond         30   31          705.00     1.2553
bond         30   32          705.00     1.2255
bond         30   33          431.60     1.3498
bond         33   34          514.40     0.9737
bond         35   36          461.90     1.0150
bond         35   37          515.90     1.0190
bond         41   42          461.90     1.0150
bond         43   44          350.90     1.3888
bond         43   46          470.70     1.3610
bond         43   49          455.70     1.4430
bond         43   53          435.20     1.3620
bond         43   54          437.60     1.3300
bond         43   63          498.90     1.4350
bond         43   69          498.90     1.4350
bond         43   72          575.00     1.0220
bond         44   44          314.40     1.4223
bond         44   45          342.20     1.3809
bond         44   47          415.70     1.3439
bond         44   49          335.20     1.3900
bond         44   53          324.70     1.4280
bond         45   46          588.30     1.2938
bond         46   50          426.10     1.0820
bond         47   48          439.00     1.3115
bond         47   49          489.70     1.3083
bond         47   53          432.70     1.3600
bond         48   50          381.30     1.0910
bond         49   50          402.10     1.0970
bond         49   51          455.40     1.3516
bond         49   54          410.30     1.4100
bond         49   58          377.90     1.3460
bond         51   52          300.00     1.0170
bond         51   59          539.40     1.0170
bond         53   54          420.70     1.4320
bond         53   55          732.70     1.2320
bond         53   58          210.70     1.3900
bond         54   54          654.20     1.3200
bond         54   56          441.30     1.0710
bond         54   57          426.60     1.0760
bond         54   60          292.30     1.4570
bond         58   59          532.70     1.0480
bond         60   61          398.50     1.1000
bond         60   62          484.00     1.4150
bond         60   63          390.10     1.5130
bond         60   69          380.10     1.5130
bond         62   63          484.00     1.4180
bond         62   69          384.00     1.4180
bond         62   70          450.10     1.5900
bond         62   72          557.50     0.9650
bond         63   63          385.10     1.5130
bond         63   64          389.50     1.1000
bond         63   65          392.00     1.1050
bond         63   66          580.00     1.3750
bond         63   68          484.00     1.4180
bond         64   69          389.50     1.1000
bond         65   69          405.10     1.0917
bond         66   67          530.50     0.9620
bond         68   69          384.00     1.4180
bond         69   69          320.10     1.5130
bond         70   71          776.90     1.4800
bond         73   74          556.85     0.9572


      ################################
      ##                            ##
      ##  Angle Bending Parameters  ##
      ##                            ##
      ################################


angle         2    1    3      50.00     122.00
angle         2    1    4      32.00     117.00
angle         3    1    4      36.00     121.00
angle         3    1    7      50.00     122.00
angle         3    1   40      50.00     121.00
angle         4    1    4      29.50     123.00
angle         4    1    7      32.00     117.00
angle         4    1    8      13.70     122.40
angle         4    1   39      41.70     120.50
angle         4    1   40      32.00     117.00
angle         8    1   38      13.70     122.40
angle         8    1   39      52.50     120.40
angle        38    1   38      29.50     120.00
angle        38    1   39      41.70     120.50
angle         1    2    3      55.00     109.80
angle         1    2    6      55.00     111.00
angle         1    2   30      61.00     109.60
angle         3    2    6      39.00     109.50
angle         3    2   35      75.20     112.10
angle         3    2   41      75.20     110.70
angle         6    2    6      40.00     107.60
angle         6    2   30      39.00     109.50
angle         6    2   35      59.00     107.78
angle         6    2   41      59.00     109.30
angle         1    3    2      70.00     113.40
angle         1    3    5      77.00     124.20
angle         1    3    7      70.00     113.40
angle         1    3    8      70.00     113.40
angle         1    3   40      41.00     113.40
angle         2    3    5      80.00     122.40
angle         2    3   15      70.00     113.40
angle         5    3    7      80.00     122.40
angle         5    3    8      80.00     122.40
angle         5    3   15      77.00     124.20
angle         5    3   40      80.00     122.40
angle         7    3   15      70.00     113.40
angle        15    3   40      41.00     113.40
angle         1    7    3      61.00     109.60
angle         1    7    6      55.00     111.00
angle         1    7    7      54.00     111.30
angle         1    7    8      54.00     111.30
angle         1    7   30      61.00     109.60
angle         3    7    6      39.00     109.50
angle         3    7    7      58.00     110.60
angle         3    7    8      58.00     110.60
angle         3    7   15      61.00     109.60
angle         3    7   16      58.00     110.60
angle         3    7   35      75.20     112.10
angle         3    7   41      75.20     110.70
angle         6    7    7      42.00     110.70
angle         6    7    8      42.00     112.80
angle         6    7   10      59.00     110.00     108.90     108.70
angle         6    7   15      55.00     111.00
angle         6    7   16      42.00     112.80
angle         6    7   30      39.00     109.50
angle         6    7   35      59.00     107.78
angle         6    7   41      59.00     109.30
angle         7    7    8      48.20     109.50     110.20     111.00
angle         7    7   10      59.70     107.50
angle         7    7   30      58.00     110.60
angle         7    7   35      75.20     109.00
angle         7    7   41      56.10     108.50
angle         8    7    8      48.20     109.50     110.20     111.00
angle         8    7   10      59.70     107.50
angle         8    7   30      58.00     110.60
angle         8    7   35      75.20     109.00
angle         8    7   41      75.20     110.70
angle        15    7   16      54.00     104.00
angle        15    7   30      61.00     109.60
angle        16    7   30      58.00     110.60
angle        16    7   41      54.00     104.00
angle         1    8    8      56.10     109.50
angle         1    8    9      54.60     111.00
angle         3    8    7      47.60     110.60
angle         3    8    8      47.60     110.60
angle         3    8    9      39.00     109.50
angle         7    8    7      48.20     109.50     110.20     111.00
angle         7    8    8      48.20     109.50     110.20     111.00
angle         7    8    9      42.00     110.70
angle         7    8   10      59.70     107.50
angle         7    8   12      53.20     108.00     109.50     110.10
angle         7    8   17      38.90     110.60
angle         7    8   22      48.20     109.50     110.20     111.00
angle         7    8   26      38.80     112.70
angle         7    8   30      47.60     110.60
angle         7    8   14      53.20     112.73
angle         8    8    8      48.20     109.50     110.20     111.00
angle         8    8    9      42.00     110.70
angle         8    8   12      53.20     108.00     109.50     110.10
angle         8    8   30      47.60     110.60
angle         8    8   35      56.10     109.50
angle         9    8    9      40.00     107.80
angle         9    8   10      59.00     110.00     108.90     108.70
angle         9    8   12      53.20     110.80     110.80     108.00
angle         9    8   17      39.60     109.50     109.30     110.40
angle         9    8   22      61.20     109.80     109.30     110.70
angle         9    8   26      39.60     109.50
angle         9    8   30      39.00     109.50
angle         9    8   35      59.00     109.30
angle         9    8   14      35.00     109.98
angle         7   10   11      54.00     106.80
angle         8   10   11      54.00     106.80
angle         8   12    8      60.40      95.90
angle         8   12   12      71.90     101.80
angle         8   12   13      46.80      96.00
angle         3   15    7      50.00     122.00
angle         3   15   16      50.00     122.00
angle         7   15   16      54.70     112.50
angle         6   16    6      40.00     107.80
angle         6   16   15      55.00     111.00
angle         6   16   16      42.00     110.70
angle         6   16   41      55.00     111.00
angle         7   16    9      42.00     110.70
angle         7   16   16      48.20     104.00
angle         9   16    9      40.00     107.80
angle         9   16   16      42.00     110.70
angle        15   16   16      54.00     104.00
angle        16   16   16      48.20     104.00
angle        16   16   41      54.00     104.00
angle         8   17   17      33.80     122.30
angle        17   17   17      54.70     121.70
angle        17   17   18      35.30     120.00     120.50       0.00
angle        17   17   19      43.20     120.00
angle        17   17   21      60.00     123.57
angle        17   19   20      25.90     109.00
angle         8   22   22      61.90     127.00
angle        22   22   22      63.30     120.00
angle        22   22   23      35.30     128.00
angle        22   22   24      47.50     109.00
angle        23   22   24      86.30     122.50
angle        22   24   22      86.30     109.00
angle        22   24   25      35.30     125.50
angle        25   24   26      35.30     125.50
angle        25   24   28      35.30     125.50
angle        26   24   28      86.30     110.80
angle         8   26   24      36.00     122.00
angle         8   26   26      36.00     131.00
angle         8   26   29      36.00     122.00
angle        24   26   26      47.50     104.70
angle        24   26   29      28.80     111.50
angle        24   26   27      38.10     122.50
angle        26   26   27      35.30     128.00
angle        26   26   29      47.50     110.50
angle        27   26   29      38.10     122.50
angle        24   28   24      28.80     110.30
angle        24   28   27      38.10     122.50
angle        24   28   29      28.80     112.20
angle        27   28   29      38.10     122.50
angle        26   29   28      86.30     104.30
angle         2   30   31      80.00     122.40
angle         2   30   32      80.00     122.40
angle         2   30   33     111.50     110.30
angle         7   30   31      80.00     122.40
angle         7   30   32      80.00     122.40
angle         7   30   33     111.50     110.30
angle         8   30   31      80.00     122.40
angle         8   30   32      80.00     122.40
angle         8   30   33     111.50     110.30
angle        31   30   31      57.60     134.00
angle        32   30   33     122.30     121.50
angle        30   33   34      49.60     108.70
angle         2   35   37      43.20     107.50
angle         7   35   37      43.20     107.50
angle         8   35   36      43.20     110.90
angle         8   35   37      43.16     108.10     110.90
angle        36   35   36      43.50     107.00
angle        37   35   37      34.50     106.40     107.10
angle         1   39    1      28.80     120.00
angle         1   40    6      55.00     111.00
angle         3   40    6      39.00     109.50
angle         6   40    6      40.00     107.80
angle         2   41   42      43.20     108.50
angle         7   41   16      54.70     112.50
angle         7   41   42      43.20     108.50
angle        16   41   42      43.20     110.90
angle        42   41   42      43.20     105.40
angle        44   43   46      89.50     109.95
angle        44   43   49      82.10     123.90
angle        44   43   63      82.10     122.40
angle        44   43   69      82.10     122.40
angle        46   43   49      73.30     125.50
angle        46   43   63      73.30     127.30
angle        46   43   69      73.30     127.30
angle        53   43   54      88.10     121.00
angle        53   43   63      86.10     117.00
angle        53   43   69      86.10     117.00
angle        54   43   63      84.00     122.00
angle        54   43   69      84.00     122.00
angle        63   43   72      45.90     105.10
angle        69   43   72      45.90     105.10
angle        72   43   72      45.40     102.20
angle        43   44   44      84.00     107.00
angle        43   44   47      79.20     119.20
angle        44   44   45      87.20     112.10
angle        44   44   47      78.80     133.70
angle        44   44   49      76.90     121.00
angle        44   44   53      88.70     120.40
angle        45   44   49      87.70     126.90
angle        45   44   53      89.40     127.50
angle        44   45   46     109.80     100.70
angle        43   46   45      83.73     110.60
angle        43   46   50      39.24     122.40
angle        45   46   50      35.30     127.00
angle        44   47   48      95.91     115.00
angle        44   47   49      89.47     111.50
angle        48   47   49     125.64     114.80
angle        49   47   53      66.62     115.00
angle        47   48   47      88.19     132.60
angle        47   48   50      39.32     113.65
angle        43   49   50      63.30     108.00
angle        44   49   47      69.11     118.50
angle        44   49   51      56.60     121.80
angle        47   49   51      68.40     118.20
angle        47   49   54      88.76     125.00
angle        47   49   58      55.82     125.80
angle        50   49   50      40.81     111.10
angle        51   49   54      80.82     117.50
angle        51   49   58      89.11     114.10
angle        49   51   52      50.23     118.00
angle        49   51   59      50.23     118.00
angle        52   51   52      27.64     121.00
angle        59   51   59      27.64     121.00
angle        43   53   47      88.10     116.55
angle        43   53   55      85.90     115.00
angle        43   53   58      81.10     119.10
angle        44   53   55      88.40     128.50
angle        44   53   58      88.70     115.50
angle        47   53   55      80.70     128.50
angle        54   53   55      49.60     127.00
angle        54   53   58      68.80     112.00
angle        55   53   58      80.70     120.00
angle        43   54   54      89.30     117.80
angle        43   54   57      35.70     115.70
angle        49   54   54      81.80     113.70
angle        49   54   56      38.80     123.10
angle        53   54   54      69.20     114.00
angle        53   54   56      39.50     121.30
angle        53   54   60      35.60     121.08
angle        54   54   56      31.90     124.70
angle        54   54   57      31.90     126.50
angle        54   54   60      30.00     126.21
angle        49   58   53      80.70     127.00
angle        49   58   59      30.60     117.00
angle        53   58   53      36.60     126.00
angle        53   58   59      47.80     117.00
angle        54   60   61      68.10     108.85
angle        61   60   61      34.50     109.00
angle        61   60   62      51.50     110.00
angle        61   60   63      38.00     109.00
angle        61   60   69      38.00     109.50
angle        62   60   63      75.00     113.00
angle        62   60   69      75.00     113.00
angle        60   62   70      80.30     110.80
angle        60   62   72      55.30     104.00
angle        63   62   63      88.70     107.50
angle        63   62   70      80.30     110.80
angle        63   62   72      55.30     102.15
angle        69   62   69      88.70     108.00
angle        69   62   70      80.30     110.80
angle        69   62   72      55.30     102.15
angle        43   63   62      35.50     110.00
angle        43   63   63      40.90     102.00
angle        43   63   65      50.60     108.00
angle        43   63   68      35.50     110.00
angle        60   63   62      65.00     110.00
angle        60   63   63      50.00     109.35
angle        60   63   64      38.20     111.00
angle        60   63   68      65.00     110.00
angle        62   63   63      88.00     108.50
angle        62   63   64      54.10     111.80
angle        62   63   65      55.30     109.30
angle        63   63   63      60.00     109.35
angle        63   63   64      38.20     109.00
angle        63   63   65      36.00     112.60
angle        63   63   66      88.00     108.50
angle        63   63   68      88.00     108.50
angle        64   63   64      35.20     108.00
angle        64   63   66      54.10     111.00
angle        64   63   68      54.10     111.80
angle        65   63   65      32.80     111.10
angle        65   63   68      55.30     109.30
angle        63   66   67      55.30     101.15
angle        63   68   63      88.70     107.50
angle        69   68   69      88.70     108.00
angle        43   69   62      35.50     118.00
angle        43   69   65      52.60     106.66
angle        43   69   68      35.50     109.00
angle        43   69   69      40.90     111.00
angle        60   69   62      65.00     110.00
angle        60   69   63      65.00     110.00
angle        60   69   64      38.20     111.00
angle        60   69   68      65.00     110.00
angle        60   69   69      50.00     109.35
angle        62   69   64      54.10     111.80
angle        62   69   65      55.30     109.30
angle        62   69   69      88.00     110.00
angle        64   69   64      25.20     108.00
angle        64   69   68      54.10     111.80
angle        64   69   69      38.20     109.00
angle        65   69   65      35.50     110.60
angle        65   69   68      55.30     109.30
angle        65   69   69      36.00     112.60
angle        68   69   69      88.00     110.00
angle        69   69   69      60.00     109.35
angle        62   70   62      65.58      97.00
angle        62   70   71      75.86     110.00
angle        71   70   71      89.88     121.20
angle        74   73   74      48.70     108.50


      ###############################
      ##                           ##
      ##  Stretch-Bend Parameters  ##
      ##                           ##
      ###############################


strbnd        2    1    3       7.20       7.20
strbnd        2    1    4       4.30       4.30
strbnd        3    1    4       4.30       4.30
strbnd        3    1    7       7.20       7.20
strbnd        3    1   40       7.20       7.20
strbnd        4    1    7       4.30       4.30
strbnd        4    1    8       4.30       4.30
strbnd        4    1   39       4.30       4.30
strbnd       38    1   39       4.30       4.30
strbnd        4    1   40       4.30       4.30
strbnd        8    1   38       4.30       4.30
strbnd        8    1   39       7.20       7.20
strbnd        1    2    3      18.70      18.70
strbnd        1    2    6      11.50      11.50
strbnd        1    2   30      18.70      18.70
strbnd        3    2    6      11.50      11.50
strbnd        3    2   35      18.70      18.70
strbnd        3    2   41      18.70      18.70
strbnd        6    2   30      11.50      11.50
strbnd        6    2   35      11.50      11.50
strbnd        6    2   41      11.50      11.50
strbnd        1    3    2      18.70      18.70
strbnd        1    3    5      18.70      18.70
strbnd        1    3    7      18.70      18.70
strbnd        1    3    8      18.70      18.70
strbnd        1    3   40      18.70      18.70
strbnd        2    3    5      18.70      18.70
strbnd        2    3   15      18.70      18.70
strbnd        5    3    7      18.70      18.70
strbnd        5    3    8      18.70      18.70
strbnd        5    3   15      18.70      18.70
strbnd        5    3   40      18.70      18.70
strbnd        7    3   15      18.70      18.70
strbnd       15    3   40      18.70      18.70
strbnd        1    7    3      18.70      18.70
strbnd        1    7    6      11.50      11.50
strbnd        1    7    7      18.70      18.70
strbnd        1    7    8      18.70      18.70
strbnd        1    7   30      18.70      18.70
strbnd        3    7    6      11.50      11.50
strbnd        3    7    7      18.70      18.70
strbnd        3    7    8      18.70      18.70
strbnd        3    7   15      18.70      18.70
strbnd        3    7   16      18.70      18.70
strbnd        3    7   35      18.70      18.70
strbnd        3    7   41      18.70      18.70
strbnd        6    7    7      11.50      11.50
strbnd        6    7    8      11.50      11.50
strbnd        6    7   10      11.50      11.50
strbnd        6    7   15      11.50      11.50
strbnd        6    7   16      11.50      11.50
strbnd        6    7   30      11.50      11.50
strbnd        6    7   35      11.50      11.50
strbnd        6    7   41      11.50      11.50
strbnd        7    7    8      18.70      18.70
strbnd        7    7   10      18.70      18.70
strbnd        7    7   30      18.70      18.70
strbnd        7    7   41      18.70      18.70
strbnd        8    7    8      18.70      18.70
strbnd        8    7   10      18.70      18.70
strbnd        8    7   30      18.70      18.70
strbnd        8    7   41      18.70      18.70
strbnd       15    7   16      18.70      18.70
strbnd       15    7   30      18.70      18.70
strbnd       16    7   30      18.70      18.70
strbnd       16    7   41      18.70      18.70
strbnd        1    8    8      18.70      18.70
strbnd        1    8    9      11.50      11.50
strbnd        3    8    7      18.70      18.70
strbnd        3    8    8      18.70      18.70
strbnd        3    8    9      11.50      11.50
strbnd        7    8    7      18.70      18.70
strbnd        7    8    8      18.70      18.70
strbnd        7    8    9      11.50      11.50
strbnd        7    8   10      18.70      18.70
strbnd        7    8   12      18.70      18.70
strbnd        7    8   17      18.70      18.70
strbnd        7    8   22      18.70      18.70
strbnd        7    8   26      18.70      18.70
strbnd        7    8   30      18.70      18.70
strbnd        7    8   14      18.70      18.70
strbnd        8    8    8      18.70      18.70
strbnd        8    8    9      11.50      11.50
strbnd        8    8   12      18.70      18.70
strbnd        8    8   30      18.70      18.70
strbnd        8    8   35      18.70      18.70
strbnd        9    8   10      11.50      11.50
strbnd        9    8   12      11.50      11.50
strbnd        9    8   17      11.50      11.50
strbnd        9    8   22      11.50      11.50
strbnd        9    8   26      11.50      11.50
strbnd        9    8   30      11.50      11.50
strbnd        9    8   35      11.50      11.50
strbnd        7   10   11      12.95      12.95
strbnd        8   10   11      12.95      12.95
strbnd        8   12    8      -5.75      -5.75
strbnd        8   12   12      -5.75      -5.75
strbnd        8   12   13       1.45       1.45
strbnd        3   15    7       7.20       7.20
strbnd        3   15   16       7.20       7.20
strbnd        7   15   16       7.20       7.20
strbnd        6   16   15      11.50      11.50
strbnd        6   16   16      11.50      11.50
strbnd        6   16   41      11.50      11.50
strbnd        7   16    9      11.50      11.50
strbnd        7   16   16      18.70      18.70
strbnd        9   16   16      11.50      11.50
strbnd       15   16   16      18.70      18.70
strbnd       16   16   16      18.70      18.70
strbnd       16   16   41      18.70      18.70
strbnd        8   17   17      18.70      18.70
strbnd       17   17   17      18.70      18.70
strbnd       17   17   18      11.50      11.50
strbnd       17   17   19      18.70      18.70
strbnd       17   17   21      18.70      18.70
strbnd       17   19   20      12.95      12.95
strbnd        8   22   22      18.70      18.70
strbnd       22   22   22      18.70      18.70
strbnd       22   22   23      11.50      11.50
strbnd       22   22   24      18.70      18.70
strbnd       23   22   24      11.50      11.50
strbnd       22   24   22      14.40      14.40
strbnd       22   24   25       4.30       4.30
strbnd       25   24   26       4.30       4.30
strbnd       25   24   28       4.30       4.30
strbnd       26   24   28      14.40      14.40
strbnd        8   26   24      18.70      18.70
strbnd        8   26   26      18.70      18.70
strbnd        8   26   29      18.70      18.70
strbnd       24   26   26      18.70      18.70
strbnd       24   26   29      18.70      18.70
strbnd       24   26   27      11.50      11.50
strbnd       26   26   27      11.50      11.50
strbnd       26   26   29      18.70      18.70
strbnd       27   26   29      11.50      11.50
strbnd       24   28   24      18.70      18.70
strbnd       24   28   27      11.50      11.50
strbnd       24   28   29      18.70      18.70
strbnd       27   28   29      11.50      11.50
strbnd       26   29   28      14.40      14.40
strbnd        2   30   31      18.70      18.70
strbnd        2   30   32      18.70      18.70
strbnd        2   30   33      18.70      18.70
strbnd        7   30   31      18.70      18.70
strbnd        7   30   32      18.70      18.70
strbnd        7   30   33      18.70      18.70
strbnd        8   30   31      18.70      18.70
strbnd        8   30   32      18.70      18.70
strbnd        8   30   33      18.70      18.70
strbnd       31   30   31      18.70      18.70
strbnd       32   30   33      18.70      18.70
strbnd        2   35   37       4.30       4.30
strbnd        7   35   37       4.30       4.30
strbnd        8   35   36       4.30       4.30
strbnd        8   35   37       4.30       4.30
strbnd        1   39    1      18.70      18.70
strbnd        1   40    6      11.50      11.50
strbnd        3   40    6      11.50      11.50
strbnd        2   41   42       4.30       4.30
strbnd        7   41   16       7.20       7.20
strbnd        7   41   42       4.30       4.30
strbnd       16   41   42       4.30       4.30
strbnd       44   43   46      14.40      14.40
strbnd       44   43   49      14.40      14.40
strbnd       44   43   63      14.40      14.40
strbnd       44   43   69      14.40      14.40
strbnd       46   43   49      14.40      14.40
strbnd       46   43   63      14.40      14.40
strbnd       46   43   69      14.40      14.40
strbnd       53   43   54      14.40      14.40
strbnd       53   43   63      14.40      14.40
strbnd       53   43   69      14.40      14.40
strbnd       54   43   63      14.40      14.40
strbnd       54   43   69      14.40      14.40
strbnd       63   43   72       4.30       4.30
strbnd       69   43   72       4.30       4.30
strbnd       43   44   44      18.70      18.70
strbnd       43   44   47      18.70      18.70
strbnd       44   44   45      18.70      18.70
strbnd       44   44   47      18.70      18.70
strbnd       44   44   49      18.70      18.70
strbnd       44   44   53      18.70      18.70
strbnd       45   44   49      18.70      18.70
strbnd       45   44   53      18.70      18.70
strbnd       44   45   46      14.40      14.40
strbnd       43   46   45      18.70      18.70
strbnd       43   46   50      11.50      11.50
strbnd       45   46   50      11.50      11.50
strbnd       44   47   48      14.40      14.40
strbnd       44   47   49      14.40      14.40
strbnd       48   47   49      14.40      14.40
strbnd       49   47   53      14.40      14.40
strbnd       47   48   47      18.70      18.70
strbnd       47   48   50      11.50      11.50
strbnd       43   49   50      11.50      11.50
strbnd       44   49   47      18.70      18.70
strbnd       44   49   51      18.70      18.70
strbnd       47   49   51      18.70      18.70
strbnd       47   49   54      18.70      18.70
strbnd       47   49   58      18.70      18.70
strbnd       51   49   54      18.70      18.70
strbnd       51   49   58      18.70      18.70
strbnd       49   51   52       4.30       4.30
strbnd       49   51   59       4.30       4.30
strbnd       43   53   47      18.70      18.70
strbnd       43   53   55      18.70      18.70
strbnd       43   53   58      18.70      18.70
strbnd       44   53   55      18.70      18.70
strbnd       44   53   58      18.70      18.70
strbnd       47   53   55      18.70      18.70
strbnd       54   53   55      18.70      18.70
strbnd       54   53   58      18.70      18.70
strbnd       55   53   58      18.70      18.70
strbnd       43   54   54      18.70      18.70
strbnd       43   54   57      11.50      11.50
strbnd       49   54   54      18.70      18.70
strbnd       49   54   56      11.50      11.50
strbnd       53   54   54      18.70      18.70
strbnd       53   54   56      11.50      11.50
strbnd       53   54   60      18.70      18.70
strbnd       54   54   56      11.50      11.50
strbnd       54   54   57      11.50      11.50
strbnd       54   54   60      18.70      18.70
strbnd       49   58   53       7.20       7.20
strbnd       49   58   59       4.30       4.30
strbnd       53   58   53       7.20       7.20
strbnd       53   58   59       4.30       4.30
strbnd       54   60   61      11.50      11.50
strbnd       61   60   62      11.50      11.50
strbnd       61   60   63      11.50      11.50
strbnd       61   60   69      11.50      11.50
strbnd       62   60   63      18.70      18.70
strbnd       62   60   69      18.70      18.70
strbnd       60   62   70      14.40      14.40
strbnd       60   62   72      12.95      12.95
strbnd       63   62   63      14.40      14.40
strbnd       63   62   70      14.40      14.40
strbnd       63   62   72      12.95      12.95
strbnd       69   62   69      14.40      14.40
strbnd       69   62   70      14.40      14.40
strbnd       69   62   72      12.95      12.95
strbnd       43   63   62      18.70      18.70
strbnd       43   63   63      18.70      18.70
strbnd       43   63   65      11.50      11.50
strbnd       43   63   68      18.70      18.70
strbnd       60   63   62      18.70      18.70
strbnd       60   63   63      18.70      18.70
strbnd       60   63   64      11.50      11.50
strbnd       60   63   68      18.70      18.70
strbnd       62   63   63      18.70      18.70
strbnd       62   63   64      11.50      11.50
strbnd       62   63   65      11.50      11.50
strbnd       63   63   63      18.70      18.70
strbnd       63   63   64      11.50      11.50
strbnd       63   63   65      11.50      11.50
strbnd       63   63   66      18.70      18.70
strbnd       63   63   68      18.70      18.70
strbnd       64   63   66      11.50      11.50
strbnd       64   63   68      11.50      11.50
strbnd       65   63   68      11.50      11.50
strbnd       43   69   62      18.70      18.70
strbnd       43   69   65      11.50      11.50
strbnd       43   69   68      18.70      18.70
strbnd       43   69   69      18.70      18.70
strbnd       60   69   62      18.70      18.70
strbnd       60   69   63      18.70      18.70
strbnd       60   69   64      11.50      11.50
strbnd       60   69   68      18.70      18.70
strbnd       60   69   69      18.70      18.70
strbnd       62   69   64      11.50      11.50
strbnd       62   69   65      11.50      11.50
strbnd       62   69   69      18.70      18.70
strbnd       64   69   68      11.50      11.50
strbnd       64   69   69      11.50      11.50
strbnd       65   69   68      11.50      11.50
strbnd       65   69   69      11.50      11.50
strbnd       68   69   69      18.70      18.70
strbnd       69   69   69      18.70      18.70
strbnd       62   70   62      14.40      14.40
strbnd       62   70   71      14.40      14.40
strbnd       71   70   71      14.40      14.40


      ###############################
      ##                           ##
      ##  Urey-Bradley Parameters  ##
      ##                           ##
      ###############################


ureybrad     74   73   74      -7.60     1.5537


      ####################################
      ##                                ##
      ##  Out-of-Plane Bend Parameters  ##
      ##                                ##
      ####################################


opbend        2    1    0    0            41.70
opbend        3    1    0    0            70.50
opbend        4    1    0    0            12.90
opbend        7    1    0    0            41.70
opbend        8    1    0    0             0.70
opbend       38    1    0    0            12.90
opbend       39    1    0    0             3.60
opbend       40    1    0    0            41.70
opbend        1    3    0    0           107.90
opbend        2    3    0    0            49.60
opbend        5    3    0    0            54.00
opbend        7    3    0    0            49.60
opbend        8    3    0    0            20.90
opbend       15    3    0    0            49.60
opbend       40    3    0    0            49.60
opbend        3   15    0    0            14.40
opbend        7   15    0    0            14.40
opbend       16   15    0    0            14.40
opbend       40   15    0    0            14.40
opbend        8   17    0    0            14.40
opbend       17   17    0    0            14.40
opbend       18   17    0    0            15.10
opbend       19   17    0    0            14.40
opbend        8   22    0    0            14.40
opbend       22   22    0    0            14.40
opbend       23   22    0    0            15.10
opbend       24   22    0    0            14.40
opbend       22   24    0    0            34.50
opbend       25   24    0    0            12.90
opbend       26   24    0    0            15.10
opbend       28   24    0    0            15.10
opbend        8   26    0    0            14.40
opbend       24   26    0    0            14.40
opbend       26   26    0    0            14.40
opbend       27   26    0    0            14.40
opbend       29   26    0    0            14.40
opbend       24   28    0    0            14.40
opbend       27   28    0    0            14.40
opbend       29   28    0    0            14.40
opbend        2   30    0    0           121.60
opbend        7   30    0    0           121.60
opbend        8   30    0    0           121.60
opbend       31   30    0    0           118.70
opbend       32   30    0    0           118.70
opbend       33   30    0    0           122.30
opbend        1   39    0    0             1.40
opbend       44   43    0    0            15.10
opbend       46   43    0    0            15.10
opbend       49   43    0    0           133.10
opbend       53   43    0    0            14.40
opbend       54   43    0    0            14.40
opbend       63   43    0    0           133.10
opbend       69   43    0    0           133.10
opbend       72   43    0    0             0.00
opbend       43   44    0    0            14.40
opbend       44   44    0    0            14.40
opbend       45   44    0    0            14.40
opbend       47   44    0    0            14.40
opbend       49   44    0    0            14.40
opbend       53   44    0    0            14.40
opbend       43   46    0    0            14.40
opbend       45   46    0    0            14.40
opbend       50   46    0    0            57.60
opbend       47   48    0    0            14.40
opbend       50   48    0    0            18.00
opbend       44   49    0    0            14.40
opbend       47   49    0    0            14.40
opbend       51   49    0    0            46.80
opbend       54   49    0    0            21.60
opbend       58   49    0    0            14.40
opbend       49   51    0    0            14.40
opbend       52   51    0    0            14.40
opbend       59   51    0    0            14.40
opbend       43   53    0    0            14.40
opbend       44   53    0    0           121.60
opbend       47   53    0    0           118.70
opbend       54   53    0    0            20.90
opbend       55   53    0    0            86.30
opbend       58   53    0    0            86.30
opbend       43   54    0    0            14.40
opbend       49   54    0    0            14.40
opbend       53   54    0    0            14.40
opbend       54   54    0    0            14.40
opbend       56   54    0    0            14.40
opbend       57   54    0    0            14.40
opbend       60   54    0    0            14.40
opbend       49   58    0    0            15.10
opbend       53   58    0    0            15.10
opbend       59   58    0    0            12.90
opbend       21   17    0    0            14.40


      ############################
      ##                        ##
      ##  Torsional Parameters  ##
      ##                        ##
      ############################


torsion       3    1    2    3      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       3    1    2    6      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       3    1    2   30     -0.856 0.0 1   0.048 180.0 2  -1.842 0.0 3
torsion       4    1    2    3      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    2    6      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    2   30      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion       2    1    3    2     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       2    1    3    5      1.000 0.0 1   2.250 180.0 2  -2.250 0.0 3
torsion       2    1    3    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       2    1    3   40     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       4    1    3    2      0.000 0.0 1   1.000 180.0 2   0.800 0.0 3
torsion       4    1    3    5      0.000 0.0 1   1.000 180.0 2  -0.550 0.0 3
torsion       4    1    3    7      0.000 0.0 1   1.000 180.0 2   0.800 0.0 3
torsion       4    1    3    8      0.000 0.0 1   1.000 180.0 2   0.800 0.0 3
torsion       4    1    3   40      0.000 0.0 1   1.000 180.0 2   0.800 0.0 3
torsion       7    1    3    2     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       7    1    3    5      1.000 0.0 1   2.250 180.0 2  -2.250 0.0 3
torsion       7    1    3    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       7    1    3   40     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion      40    1    3    2     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion      40    1    3    5      1.000 0.0 1   2.250 180.0 2  -2.250 0.0 3
torsion      40    1    3    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       3    1    7    3      0.794 0.0 1  -0.639 180.0 2   0.720 0.0 3
torsion       3    1    7    6      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       3    1    7    7      1.999 0.0 1   0.021 180.0 2   0.000 0.0 3
torsion       3    1    7    8      1.999 0.0 1   0.021 180.0 2   0.000 0.0 3
torsion       3    1    7   30     -0.856 0.0 1   0.048 180.0 2  -1.842 0.0 3
torsion       4    1    7    3      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    7    6      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    7    7      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    7    8      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    7   30      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion       4    1    8    8      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1    8    9      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      38    1    8    8      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      38    1    8    9      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      39    1    8    8      0.982 0.0 1   0.994 180.0 2   0.170 0.0 3
torsion      39    1    8    9      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       3    1   40    6      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       4    1   40    6      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       4    1   39    1      0.000 0.0 1   4.000 180.0 2   0.000 0.0 3
torsion       8    1   39    1      0.000 0.0 1   4.500 180.0 2   0.000 0.0 3
torsion      38    1   39    1      0.000 0.0 1   4.000 180.0 2   0.000 0.0 3
torsion       1    2    3    1      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       1    2    3    5      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       1    2    3   15      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       6    2    3    1      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion       6    2    3    5      0.000 0.0 1   0.000 180.0 2   0.235 0.0 3
torsion       6    2    3   15      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion      41    2    3    1     -0.397 0.0 1   2.196 180.0 2  -0.371 0.0 3
torsion      41    2    3    5      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      41    2    3   15     -0.397 0.0 1   2.196 180.0 2  -0.371 0.0 3
torsion       1    2   30   31     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion       1    2   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       1    2   30   33     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion       6    2   30   31     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       6    2   30   32      0.000 0.0 1   0.000 180.0 2   0.235 0.0 3
torsion       6    2   30   33     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       3    2   41   42      1.239 0.0 1  -0.405 180.0 2   0.035 0.0 3
torsion       6    2   41   42      0.000 0.0 1  -0.081 180.0 2   0.370 0.0 3
torsion       1    3    7    1     -1.688 0.0 1   4.249 180.0 2   0.000 0.0 3
torsion       1    3    7    6      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion       1    3    7    7      0.447 0.0 1   1.707 180.0 2  -1.342 0.0 3
torsion       1    3    7    8      0.447 0.0 1   1.707 180.0 2  -1.342 0.0 3
torsion       1    3    7   15     -2.118 0.0 1   1.173 180.0 2   0.000 0.0 3
torsion       1    3    7   16      2.225 0.0 1  -1.252 180.0 2  -1.067 0.0 3
torsion       1    3    7   35     -0.397 0.0 1   2.196 180.0 2  -0.371 0.0 3
torsion       1    3    7   41     -0.397 0.0 1   2.196 180.0 2  -0.371 0.0 3
torsion       5    3    7    1      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7    6      0.000 0.0 1   0.000 180.0 2   0.235 0.0 3
torsion       5    3    7    7      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7    8      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7   15      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7   16      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7   35      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       5    3    7   41      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      15    3    7    1     -1.804 0.0 1   3.612 180.0 2  -0.196 0.0 3
torsion      15    3    7    6      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion      15    3    7    7      0.355 0.0 1   1.478 180.0 2  -0.896 0.0 3
torsion      15    3    7    8      0.355 0.0 1   1.478 180.0 2  -0.896 0.0 3
torsion      15    3    7   15     -2.118 0.0 1   1.173 180.0 2   0.000 0.0 3
torsion      15    3    7   16      2.225 0.0 1  -1.252 180.0 2  -1.067 0.0 3
torsion      15    3    7   41     -0.397 0.0 1   2.196 180.0 2  -0.371 0.0 3
torsion       1    3    8    7      0.281 0.0 1   0.664 180.0 2  -0.847 0.0 3
torsion       1    3    8    8     -0.475 0.0 1   0.775 180.0 2   0.042 0.0 3
torsion       1    3    8    9      0.000 0.0 1   0.000 180.0 2   0.230 0.0 3
torsion       5    3    8    7      1.091 0.0 1   0.448 180.0 2   0.596 0.0 3
torsion       5    3    8    8      0.454 0.0 1   0.080 180.0 2  -0.310 0.0 3
torsion       5    3    8    9     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       2    3   15    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       2    3   15   16     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       5    3   15    7      1.000 0.0 1   2.250 180.0 2  -2.250 0.0 3
torsion       5    3   15   16      1.000 0.0 1   2.250 180.0 2  -2.250 0.0 3
torsion       7    3   15    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       7    3   15   16     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion      40    3   15    7     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion      40    3   15   16     -1.000 0.0 1   2.000 180.0 2   2.000 0.0 3
torsion       1    3   40    6      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion       5    3   40    6      0.000 0.0 1   0.000 180.0 2   0.235 0.0 3
torsion      15    3   40    6      0.000 0.0 1   0.000 180.0 2  -0.010 0.0 3
torsion       1    7    7    6      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       1    7    7    8      0.774 0.0 1  -1.686 180.0 2   0.000 0.0 3
torsion       1    7    7   10     -1.094 0.0 1   0.621 180.0 2   0.018 0.0 3
torsion       3    7    7    6      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       3    7    7    8      1.343 0.0 1   0.135 180.0 2   0.000 0.0 3
torsion       3    7    7   10     -0.538 0.0 1   0.703 180.0 2  -0.166 0.0 3
torsion       6    7    7    6      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       6    7    7    8      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    7   10      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    7   30      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       6    7    7   35      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       6    7    7   41      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       8    7    7   30      1.343 0.0 1   0.135 180.0 2   0.000 0.0 3
torsion       8    7    7   35     -0.282 0.0 1  -0.258 180.0 2   0.000 0.0 3
torsion       8    7    7   41     -0.282 0.0 1  -0.258 180.0 2   0.000 0.0 3
torsion      10    7    7   17     -0.538 0.0 1   0.703 180.0 2  -0.166 0.0 3
torsion      10    7    7   30     -0.538 0.0 1   0.703 180.0 2  -0.166 0.0 3
torsion      10    7    7   35     -1.094 0.0 1   0.621 180.0 2   0.018 0.0 3
torsion      10    7    7   41     -1.094 0.0 1   0.621 180.0 2   0.018 0.0 3
torsion       1    7    8    3     -0.508 0.0 1  -0.213 180.0 2  -0.337 0.0 3
torsion       1    7    8    7     -0.899 0.0 1   1.078 180.0 2  -0.341 0.0 3
torsion       1    7    8    8      0.370 0.0 1   0.594 180.0 2  -0.226 0.0 3
torsion       1    7    8    9      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       1    7    8   10      0.192 0.0 1  -0.115 180.0 2  -0.309 0.0 3
torsion       1    7    8   12     -0.870 0.0 1   0.910 180.0 2  -0.718 0.0 3
torsion       1    7    8   17     -2.284 0.0 1   1.340 180.0 2   0.000 0.0 3
torsion       1    7    8   22     -3.042 0.0 1   1.086 180.0 2   0.000 0.0 3
torsion       1    7    8   26      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       1    7    8   30      0.165 0.0 1   1.400 180.0 2   0.000 0.0 3
torsion       1    7    8   14      3.405 0.0 1   2.860 180.0 2  -0.401 0.0 3
torsion       3    7    8    3     -3.063 0.0 1  -0.952 180.0 2   0.398 0.0 3
torsion       3    7    8    7      1.148 0.0 1  -0.289 180.0 2  -0.557 0.0 3
torsion       3    7    8    8      2.523 0.0 1   0.931 180.0 2  -0.410 0.0 3
torsion       3    7    8    9      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       3    7    8   10     -1.664 0.0 1  -0.531 180.0 2   0.000 0.0 3
torsion       3    7    8   12     -2.400 0.0 1   0.550 180.0 2   0.000 0.0 3
torsion       3    7    8   17     -3.229 0.0 1   0.588 180.0 2   0.000 0.0 3
torsion       3    7    8   22     -1.155 0.0 1   1.249 180.0 2   0.000 0.0 3
torsion       3    7    8   26      0.139 0.0 1  -0.814 180.0 2   0.000 0.0 3
torsion       3    7    8   30     -1.178 0.0 1   1.055 180.0 2   0.000 0.0 3
torsion       3    7    8   14      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       6    7    8    3      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       6    7    8    7      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    8    8      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    8    9      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       6    7    8   10      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    8   12      0.000 0.0 1   0.000 180.0 2   0.475 0.0 3
torsion       6    7    8   17      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       6    7    8   22      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       6    7    8   26      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       6    7    8   30      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       6    7    8   14      0.000 0.0 1   0.000 180.0 2   0.475 0.0 3
torsion       7    7    8    8      0.856 0.0 1   0.841 180.0 2  -0.374 0.0 3
torsion       7    7    8    9      0.000 0.0 1   0.000 180.0 2   0.091 0.0 3
torsion       8    7    8    7     -0.631 0.0 1   1.067 180.0 2  -0.703 0.0 3
torsion       8    7    8    8     -0.631 0.0 1   1.067 180.0 2  -0.703 0.0 3
torsion       8    7    8    9      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion      10    7    8    9      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion      30    7    8    3     -2.457 0.0 1   0.853 180.0 2  -0.025 0.0 3
torsion      30    7    8    7     -1.349 0.0 1   0.221 180.0 2  -0.157 0.0 3
torsion      30    7    8    8      0.267 0.0 1  -0.324 180.0 2  -0.321 0.0 3
torsion      30    7    8    9      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion      30    7    8   10     -0.538 0.0 1   0.703 180.0 2  -0.166 0.0 3
torsion      30    7    8   12     -2.400 0.0 1   0.550 180.0 2   0.000 0.0 3
torsion      30    7    8   17     -3.229 0.0 1   0.588 180.0 2   0.000 0.0 3
torsion      30    7    8   22     -1.155 0.0 1   1.249 180.0 2   0.000 0.0 3
torsion      30    7    8   26      0.139 0.0 1  -0.814 180.0 2   0.000 0.0 3
torsion      30    7    8   30     -1.178 0.0 1   1.055 180.0 2   0.000 0.0 3
torsion      35    7    8    7     -1.602 0.0 1   1.213 180.0 2  -0.466 0.0 3
torsion      35    7    8    9      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion      35    7    8   10     -1.094 0.0 1   0.621 180.0 2   0.018 0.0 3
torsion      35    7    8   12     -1.070 0.0 1   1.510 180.0 2  -0.718 0.0 3
torsion      35    7    8   17     -2.284 0.0 1   1.340 180.0 2   0.000 0.0 3
torsion      35    7    8   22     -3.042 0.0 1   1.086 180.0 2   0.000 0.0 3
torsion      35    7    8   26     -1.642 0.0 1  -1.232 180.0 2   0.000 0.0 3
torsion      35    7    8   30      0.165 0.0 1   1.400 180.0 2   0.000 0.0 3
torsion      41    7    8    3     -0.536 0.0 1   0.869 180.0 2  -0.995 0.0 3
torsion      41    7    8    7     -1.602 0.0 1   1.213 180.0 2  -0.466 0.0 3
torsion      41    7    8    8      0.122 0.0 1   0.091 180.0 2   0.024 0.0 3
torsion      41    7    8    9      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion      41    7    8   10     -1.094 0.0 1   0.621 180.0 2   0.018 0.0 3
torsion      41    7    8   12     -1.070 0.0 1   1.510 180.0 2  -0.718 0.0 3
torsion      41    7    8   17     -2.284 0.0 1   1.340 180.0 2   0.000 0.0 3
torsion      41    7    8   22     -3.042 0.0 1   1.086 180.0 2   0.000 0.0 3
torsion      41    7    8   26     -1.642 0.0 1  -1.232 180.0 2   0.000 0.0 3
torsion      41    7    8   30      0.165 0.0 1   1.400 180.0 2   0.000 0.0 3
torsion       6    7   10   11      0.000 0.0 1   0.000 180.0 2   0.266 0.0 3
torsion       7    7   10   11     -1.372 0.0 1   0.232 180.0 2   0.400 0.0 3
torsion       8    7   10   11     -1.372 0.0 1   0.232 180.0 2   0.400 0.0 3
torsion       3    7   15    3     -0.240 0.0 1  -3.086 180.0 2  -1.829 0.0 3
torsion       3    7   15   16      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       6    7   15    3      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       6    7   15   16      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion      16    7   15    3      3.089 0.0 1   5.376 180.0 2  -1.829 0.0 3
torsion      16    7   15   16      2.216 0.0 1   0.215 180.0 2   0.810 0.0 3
torsion      30    7   15    3     -0.240 0.0 1  -3.086 180.0 2  -1.829 0.0 3
torsion      30    7   15   16      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       3    7   16    9      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       3    7   16   16     -0.928 0.0 1   1.027 180.0 2   0.000 0.0 3
torsion       6    7   16    9      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       6    7   16   16      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion      15    7   16    9      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion      15    7   16   16     -0.201 0.0 1   0.687 180.0 2   0.000 0.0 3
torsion      30    7   16    9      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion      30    7   16   16     -0.928 0.0 1   1.027 180.0 2   0.000 0.0 3
torsion      41    7   16    9      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion      41    7   16   16     -0.201 0.0 1   0.687 180.0 2   0.000 0.0 3
torsion       1    7   30   31     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion       1    7   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       1    7   30   33     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion       6    7   30   31     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       6    7   30   32      0.000 0.0 1   0.000 180.0 2   0.235 0.0 3
torsion       6    7   30   33     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       7    7   30   31      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion       7    7   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       7    7   30   33      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion       8    7   30   31      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion       8    7   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       8    7   30   33      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion      15    7   30   31     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion      15    7   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      15    7   30   33     -0.059 0.0 1   1.900 180.0 2  -0.045 0.0 3
torsion      16    7   30   31      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion      16    7   30   32      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      16    7   30   33      0.000 0.0 1  -0.489 180.0 2   0.000 0.0 3
torsion       3    7   35   37     -0.107 0.0 1   0.512 180.0 2   0.365 0.0 3
torsion       6    7   35   37      0.072 0.0 1  -0.012 180.0 2   0.563 0.0 3
torsion       7    7   35   37     -0.107 0.0 1   0.512 180.0 2   0.365 0.0 3
torsion       8    7   35   37     -0.107 0.0 1   0.512 180.0 2   0.365 0.0 3
torsion       3    7   41   16      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       3    7   41   42      1.239 0.0 1  -0.405 180.0 2   0.035 0.0 3
torsion       6    7   41   16      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       6    7   41   42      0.000 0.0 1  -0.081 180.0 2   0.370 0.0 3
torsion       7    7   41   42      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       8    7   41   42      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      16    7   41   16      2.216 0.0 1   0.215 180.0 2   0.810 0.0 3
torsion      16    7   41   42     -0.939 0.0 1  -0.159 180.0 2   0.246 0.0 3
torsion       1    8    8    8     -0.535 0.0 1  -0.110 180.0 2  -0.073 0.0 3
torsion       1    8    8    9      0.000 0.0 1   0.000 180.0 2   0.374 0.0 3
torsion       3    8    8    7     -0.257 0.0 1  -0.220 180.0 2   0.000 0.0 3
torsion       3    8    8    9      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       7    8    8    8      0.152 0.0 1  -0.231 180.0 2   0.378 0.0 3
torsion       7    8    8    9      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       7    8    8   12      0.250 0.0 1   0.160 180.0 2  -1.805 0.0 3
torsion       7    8    8   30     -4.257 0.0 1  -0.220 180.0 2   0.000 0.0 3
torsion       8    8    8    8      0.152 0.0 1  -0.231 180.0 2   0.378 0.0 3
torsion       8    8    8    9      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       8    8    8   35      0.000 0.0 1   0.064 180.0 2   0.605 0.0 3
torsion       9    8    8    9      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       9    8    8   12      0.000 0.0 1   0.000 180.0 2   0.475 0.0 3
torsion       9    8    8   30      0.000 0.0 1   0.000 180.0 2   0.180 0.0 3
torsion       9    8    8   35      0.000 0.0 1   0.000 180.0 2   0.374 0.0 3
torsion       7    8   10   11      1.270 0.0 1  -1.023 180.0 2  -0.727 0.0 3
torsion       9    8   10   11      0.000 0.0 1   0.000 180.0 2   0.274 0.0 3
torsion       7    8   12   12      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       7    8   12   13     -1.096 0.0 1   0.079 180.0 2   0.384 0.0 3
torsion       8    8   12    8     -1.061 0.0 1   0.132 180.0 2   0.330 0.0 3
torsion       9    8   12    8      0.000 0.0 1   0.000 180.0 2   0.660 0.0 3
torsion       9    8   12   12      0.300 0.0 1   0.000 180.0 2   0.600 0.0 3
torsion       9    8   12   13      0.000 0.0 1   0.000 180.0 2   0.238 0.0 3
torsion       7    8   17   17     -0.495 0.0 1   0.720 180.0 2  -0.484 0.0 3
torsion       9    8   17   17      0.000 0.0 1   0.000 180.0 2  -0.090 0.0 3
torsion       7    8   22   22      0.093 0.0 1   0.153 180.0 2   0.538 0.0 3
torsion       9    8   22   22      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       7    8   26   24     -1.821 0.0 1  -2.437 180.0 2   2.059 0.0 3
torsion       7    8   26   26      1.094 0.0 1  -0.160 180.0 2   0.503 0.0 3
torsion       7    8   26   29     -0.224 0.0 1  -0.084 180.0 2   0.518 0.0 3
torsion       9    8   26   24      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       9    8   26   26      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       9    8   26   29      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       7    8   30   31      0.000 0.0 1   1.039 180.0 2   0.000 0.0 3
torsion       7    8   30   32     -0.092 0.0 1   1.124 180.0 2   0.435 0.0 3
torsion       7    8   30   33      0.677 0.0 1   1.020 180.0 2   0.163 0.0 3
torsion       8    8   30   31      0.000 0.0 1   0.100 180.0 2   0.000 0.0 3
torsion       8    8   30   32     -0.092 0.0 1   1.124 180.0 2   0.435 0.0 3
torsion       8    8   30   33      0.677 0.0 1   1.020 180.0 2   0.163 0.0 3
torsion       9    8   30   31      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion       9    8   30   32     -0.154 0.0 1   0.044 180.0 2  -0.086 0.0 3
torsion       9    8   30   33      0.250 0.0 1   0.850 180.0 2   0.000 0.0 3
torsion       8    8   35   36      0.000 0.0 1   0.000 180.0 2  -0.110 0.0 3
torsion       8    8   35   37     -0.107 0.0 1   0.512 180.0 2   0.365 0.0 3
torsion       9    8   35   36      0.000 0.0 1  -0.081 180.0 2   0.370 0.0 3
torsion       9    8   35   37      0.000 0.0 1   0.661 180.0 2   0.288 0.0 3
torsion       8   12   12    8     -0.940 0.0 1  -6.900 180.0 2   0.300 0.0 3
torsion       3   15   16    6      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       3   15   16   16      2.216 0.0 1   0.215 180.0 2   0.810 0.0 3
torsion       7   15   16    6      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       7   15   16   16      2.216 0.0 1   0.215 180.0 2   0.810 0.0 3
torsion       6   16   16    9      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       6   16   16   16      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       7   16   16    9      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       7   16   16   16      0.152 0.0 1  -0.231 180.0 2   0.378 0.0 3
torsion       9   16   16    9      0.000 0.0 1   0.000 180.0 2   0.299 0.0 3
torsion       9   16   16   15      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion       9   16   16   16      0.000 0.0 1   0.000 180.0 2   0.341 0.0 3
torsion       9   16   16   41      0.000 0.0 1   0.000 180.0 2   0.500 0.0 3
torsion      15   16   16   16     -0.201 0.0 1   0.687 180.0 2   0.000 0.0 3
torsion      16   16   16   41     -0.201 0.0 1   0.687 180.0 2   0.000 0.0 3
torsion       6   16   41    7      0.000 0.0 1   0.000 180.0 2  -0.126 0.0 3
torsion       6   16   41   42      0.000 0.0 1  -0.014 180.0 2   0.295 0.0 3
torsion      16   16   41    7      2.216 0.0 1   0.215 180.0 2   0.810 0.0 3
torsion      16   16   41   42     -0.939 0.0 1  -0.159 180.0 2   0.246 0.0 3
torsion       8   17   17   17     -0.610 0.0 1   4.212 180.0 2   0.000 0.0 3
torsion       8   17   17   18      0.000 0.0 1   4.104 180.0 2   0.000 0.0 3
torsion      17   17   17   17     -0.670 0.0 1   4.004 180.0 2   0.000 0.0 3
torsion      17   17   17   18      0.550 0.0 1   4.534 180.0 2  -0.550 0.0 3
torsion      17   17   17   19      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      17   17   17   21      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      18   17   17   18      0.000 0.0 1   4.072 180.0 2   0.000 0.0 3
torsion      18   17   17   19      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      18   17   17   21      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      17   17   19   20      0.000 0.0 1   2.081 180.0 2   0.000 0.0 3
torsion       8   22   22   22     -0.062 0.0 1   0.197 180.0 2   0.025 0.0 3
torsion       8   22   22   23      0.000 0.0 1   3.104 180.0 2   0.000 0.0 3
torsion       8   22   22   24      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      22   22   22   22     -0.670 0.0 1   4.304 180.0 2   0.000 0.0 3
torsion      22   22   22   23      0.250 0.0 1   4.534 180.0 2  -0.550 0.0 3
torsion      22   22   22   24      0.000 0.0 1   4.470 180.0 2   0.000 0.0 3
torsion      23   22   22   23      0.000 0.0 1   3.072 180.0 2   0.000 0.0 3
torsion      23   22   22   24     -3.150 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      22   22   24   22      0.000 0.0 1  10.000 180.0 2   0.000 0.0 3
torsion      22   22   24   25     -3.150 0.0 1   5.000 180.0 2   0.000 0.0 3
torsion      23   22   24   22     -6.650 0.0 1  10.000 180.0 2   0.000 0.0 3
torsion      23   22   24   25     -0.530 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      25   24   26    8      0.000 0.0 1   4.104 180.0 2   0.000 0.0 3
torsion      25   24   26   26     -3.150 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      25   24   26   27     -0.530 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      28   24   26    8      0.000 0.0 1   4.212 180.0 2   0.000 0.0 3
torsion      28   24   26   26      0.000 0.0 1   6.000 180.0 2   0.000 0.0 3
torsion      28   24   26   27      0.000 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      25   24   28   24     -2.744 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      25   24   28   27     -0.530 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      25   24   28   29     -2.744 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      26   24   28   24      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion      26   24   28   27      0.000 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      26   24   28   29      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion       8   26   26   24      0.000 0.0 1   4.212 180.0 2   0.000 0.0 3
torsion       8   26   26   27      0.000 0.0 1   4.102 180.0 2   0.000 0.0 3
torsion       8   26   26   29      0.000 0.0 1   4.212 180.0 2   0.000 0.0 3
torsion      24   26   26   24      0.900 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion      24   26   26   27      0.755 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      24   26   26   29      0.900 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion      27   26   26   29      0.755 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion       8   26   29   28      0.000 0.0 1   4.212 180.0 2   0.000 0.0 3
torsion      26   26   29   28      0.000 0.0 1   6.000 180.0 2   0.000 0.0 3
torsion      27   26   29   28      0.000 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion      24   28   29   26      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion      27   28   29   26      0.000 0.0 1   3.000 180.0 2   0.000 0.0 3
torsion       2   30   33   34      0.000 0.0 1   5.390 180.0 2   1.230 0.0 3
torsion       7   30   33   34      0.000 0.0 1   5.390 180.0 2   1.230 0.0 3
torsion       8   30   33   34      0.000 0.0 1   5.390 180.0 2   1.230 0.0 3
torsion      32   30   33   34     -1.200 0.0 1   5.390 180.0 2   0.400 0.0 3
torsion      46   43   44   44      0.000 0.0 1   8.761 180.0 2   0.000 0.0 3
torsion      46   43   44   47      0.000 0.0 1   9.022 180.0 2   0.000 0.0 3
torsion      49   43   44   44      0.000 0.0 1   8.406 180.0 2   0.000 0.0 3
torsion      49   43   44   47      0.000 0.0 1   9.925 180.0 2   0.000 0.0 3
torsion      63   43   44   44      0.000 0.0 1   8.406 180.0 2   0.000 0.0 3
torsion      63   43   44   47      0.000 0.0 1   9.925 180.0 2   0.000 0.0 3
torsion      69   43   44   44      0.000 0.0 1   8.406 180.0 2   0.000 0.0 3
torsion      69   43   44   47      0.000 0.0 1   9.925 180.0 2   0.000 0.0 3
torsion      44   43   46   45      0.000 0.0 1   5.807 180.0 2   0.000 0.0 3
torsion      44   43   46   50      0.000 0.0 1   9.943 180.0 2   0.000 0.0 3
torsion      49   43   46   45      0.000 0.0 1   0.111 180.0 2   0.000 0.0 3
torsion      49   43   46   50      0.000 0.0 1   9.536 180.0 2   0.000 0.0 3
torsion      63   43   46   45      0.000 0.0 1   6.111 180.0 2   0.000 0.0 3
torsion      63   43   46   50      0.000 0.0 1   8.536 180.0 2   0.000 0.0 3
torsion      69   43   46   45      0.000 0.0 1   9.911 180.0 2   0.000 0.0 3
torsion      69   43   46   50      0.000 0.0 1   8.536 180.0 2   0.000 0.0 3
torsion      44   43   49   50      0.000 0.0 1   2.100 180.0 2   0.000 0.0 3
torsion      54   43   53   47      0.000 0.0 1   3.000 180.0 2   0.600 0.0 3
torsion      54   43   53   55      0.000 0.0 1  -9.900 180.0 2  -0.027 0.0 3
torsion      54   43   53   58      0.000 0.0 1   9.900 180.0 2   0.000 0.0 3
torsion      63   43   53   47      0.000 0.0 1   0.000 180.0 2  -0.532 0.0 6
torsion      63   43   53   55      0.000 0.0 1   0.000 180.0 2   0.112 0.0 6
torsion      63   43   53   58      0.000 0.0 1   0.000 180.0 2  -0.532 0.0 6
torsion      69   43   53   47      0.000 0.0 1   0.500 180.0 2  -0.532 0.0 3
torsion      69   43   53   55      0.000 0.0 1   0.000 180.0 2   0.112 0.0 3
torsion      69   43   53   58      0.000 0.0 1   0.000 180.0 2  -0.532 0.0 6
torsion      53   43   54   54      0.000 0.0 1   4.500 180.0 2   0.000 0.0 3
torsion      53   43   54   57      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      63   43   54   54      0.000 0.0 1   0.000 180.0 2  -0.532 0.0 6
torsion      63   43   54   57      0.000 0.0 1   0.000 180.0 2   0.109 0.0 6
torsion      69   43   54   54      0.000 0.0 1   0.000 180.0 2  -0.532 0.0 6
torsion      69   43   54   57      0.000 0.0 1   0.000 180.0 2   0.109 0.0 6
torsion      44   43   63   62     -3.000 0.0 1   0.000 180.0 2  -0.900 0.0 3
torsion      44   43   63   63      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      44   43   63   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      44   43   63   68      0.000 0.0 1  -5.600 180.0 2   0.000 0.0 3
torsion      46   43   63   62      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   63   63      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   63   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   63   68      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      53   43   63   62     -3.000 0.0 1   0.000 180.0 2   0.950 0.0 3
torsion      53   43   63   63      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      53   43   63   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      54   43   63   62      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      54   43   63   63      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      54   43   63   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      72   43   63   62      0.000 0.0 1   0.000 180.0 2   0.587 0.0 3
torsion      72   43   63   63      0.000 0.0 1   0.000 180.0 2   0.585 0.0 3
torsion      72   43   63   65      0.000 0.0 1   4.500 180.0 2   0.480 0.0 3
torsion      44   43   69   62      0.000 0.0 1  -7.550 180.0 2   0.880 0.0 3
torsion      44   43   69   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      44   43   69   68      0.000 0.0 1  -5.200 180.0 2   0.800 0.0 3
torsion      44   43   69   69      0.000 0.0 1   2.000 180.0 2   0.800 0.0 3
torsion      46   43   69   62      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   69   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   69   68      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      46   43   69   69      0.000 0.0 1  -5.100 180.0 2   0.800 0.0 3
torsion      53   43   69   62      0.000 0.0 1  -1.600 180.0 2   0.000 0.0 3
torsion      53   43   69   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      53   43   69   69      0.000 0.0 1  -1.500 180.0 2   0.000 0.0 3
torsion      54   43   69   62      0.000 0.0 1  -5.600 180.0 2  -0.650 0.0 3
torsion      54   43   69   65      0.000 0.0 1   0.000 180.0 2   0.000 0.0 3
torsion      54   43   69   69      0.000 0.0 1  -2.000 180.0 2   0.000 0.0 3
torsion      72   43   69   62      0.000 0.0 1   0.000 180.0 2   0.587 0.0 3
torsion      72   43   69   65      0.000 0.0 1   4.500 180.0 2   0.480 0.0 3
torsion      72   43   69   69      0.000 0.0 1   2.500 180.0 2   0.585 0.0 3
torsion      43   44   44   45      0.000 0.0 1   7.121 180.0 2   0.000 0.0 3
torsion      43   44   44   49      0.000 0.0 1   8.267 180.0 2   0.000 0.0 3
torsion      43   44   44   53      0.000 0.0 1   8.538 180.0 2   0.000 0.0 3
torsion      45   44   44   47      0.000 0.0 1   5.794 180.0 2   0.000 0.0 3
torsion      47   44   44   49      0.000 0.0 1   9.772 180.0 2   0.000 0.0 3
torsion      47   44   44   53      0.000 0.0 1   4.676 180.0 2   0.000 0.0 3
torsion      44   44   45   46      0.000 0.0 1   9.600 180.0 2   0.000 0.0 3
torsion      49   44   45   46      0.000 0.0 1   8.083 180.0 2   0.000 0.0 3
torsion      53   44   45   46      0.000 0.0 1   6.522 180.0 2   0.000 0.0 3
torsion      43   44   47   48      0.000 0.0 1   8.058 180.0 2   0.000 0.0 3
torsion      43   44   47   49      0.000 0.0 1   5.000 180.0 2   0.000 0.0 3
torsion      44   44   47   48      0.000 0.0 1   8.174 180.0 2   0.000 0.0 3
torsion      44   44   47   49      0.000 0.0 1   3.500 180.0 2   0.000 0.0 3
torsion      44   44   49   47      0.000 0.0 1   8.034 180.0 2   0.000 0.0 3
torsion      44   44   49   51      0.000 0.0 1   8.960 180.0 2   0.000 0.0 3
torsion      45   44   49   47      0.000 0.0 1   8.118 180.0 2   0.000 0.0 3
torsion      45   44   49   51      0.000 0.0 1   6.606 180.0 2   0.000 0.0 3
torsion      44   44   53   55      0.000 0.0 1   9.293 180.0 2   0.000 0.0 3
torsion      44   44   53   58      0.000 0.0 1   1.587 180.0 2   0.000 0.0 3
torsion      45   44   53   55      0.000 0.0 1   1.522 180.0 2   0.000 0.0 3
torsion      45   44   53   58      0.000 0.0 1   8.876 180.0 2   0.000 0.0 3
torsion      44   45   46   43      0.000 0.0 1   9.800 180.0 2   0.000 0.0 3
torsion      44   45   46   50      0.000 0.0 1   7.386 180.0 2   0.000 0.0 3
torsion      44   47   48   47      0.000 0.0 1   8.468 180.0 2   0.000 0.0 3
torsion      44   47   48   50      0.000 0.0 1   8.900 180.0 2   0.000 0.0 3
torsion      49   47   48   47      0.000 0.0 1   9.883 180.0 2   0.000 0.0 3
torsion      49   47   48   50      0.000 0.0 1  10.000 180.0 2   0.000 0.0 3
torsion      44   47   49   51      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      44   47   49   58      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      48   47   49   44      0.000 0.0 1   9.804 180.0 2   0.000 0.0 3
torsion      48   47   49   51      0.000 0.0 1   1.928 180.0 2   0.000 0.0 3
torsion      53   47   49   51      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      53   47   49   54      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      49   47   53   43      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      49   47   53   55      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      44   49   51   52      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      44   49   51   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      47   49   51   52      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      47   49   51   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      54   49   51   52      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      54   49   51   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      58   49   51   52      0.000 0.0 1   5.000 180.0 2   0.000 0.0 3
torsion      58   49   51   59      0.000 0.0 1   5.000 180.0 2   0.000 0.0 3
torsion      47   49   54   54      0.000 0.0 1   9.974 180.0 2   0.000 0.0 3
torsion      47   49   54   56      0.000 0.0 1   9.548 180.0 2   0.000 0.0 3
torsion      51   49   54   54      0.000 0.0 1   5.322 180.0 2   0.000 0.0 3
torsion      51   49   54   56      0.000 0.0 1   4.112 180.0 2   0.000 0.0 3
torsion      47   49   58   53      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      47   49   58   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      51   49   58   53      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      51   49   58   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      55   53   54   54      0.000 0.0 1   2.654 180.0 2   0.000 0.0 3
torsion      55   53   54   56      0.000 0.0 1   3.756 180.0 2   0.000 0.0 3
torsion      55   53   54   60      0.000 0.0 1   4.085 180.0 2   0.000 0.0 3
torsion      58   53   54   54      0.000 0.0 1   5.537 180.0 2   0.000 0.0 3
torsion      58   53   54   56      0.000 0.0 1   6.277 180.0 2   0.000 0.0 3
torsion      58   53   54   60      0.000 0.0 1   2.346 180.0 2   0.000 0.0 3
torsion      43   53   58   53      0.000 0.0 1   2.500 180.0 2   0.000 0.0 3
torsion      43   53   58   59      0.000 0.0 1   3.300 180.0 2   0.000 0.0 3
torsion      44   53   58   49      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      44   53   58   59      0.000 0.0 1   2.000 180.0 2   0.000 0.0 3
torsion      54   53   58   53      0.000 0.0 1   1.000 180.0 2   0.000 0.0 3
torsion      54   53   58   59      0.000 0.0 1   2.500 180.0 2   0.000 0.0 3
torsion      55   53   58   49      0.000 0.0 1   8.000 180.0 2   0.000 0.0 3
torsion      55   53   58   53      0.000 0.0 1   3.100 180.0 2   0.000 0.0 3
torsion      55   53   58   59      0.000 0.0 1   1.155 180.0 2   0.000 0.0 3
torsion      43   54   54   49      0.000 0.0 1   7.934 180.0 2   0.000 0.0 3
torsion      43   54   54   53      0.000 0.0 1  -9.000 180.0 2   0.000 0.0 3
torsion      43   54   54   56      0.000 0.0 1   1.094 180.0 2   0.000 0.0 3
torsion      43   54   54   60      0.000 0.0 1   5.133 180.0 2   0.000 0.0 3
torsion      49   54   54   57      0.000 0.0 1   7.193 180.0 2   0.000 0.0 3
torsion      53   54   54   57      0.000 0.0 1   6.193 180.0 2   0.000 0.0 3
torsion      56   54   54   57      0.000 0.0 1   4.226 180.0 2   0.000 0.0 3
torsion      57   54   54   60      0.000 0.0 1   6.519 180.0 2   0.000 0.0 3
torsion      53   54   60   61      0.000 0.0 1   0.000 180.0 2   0.319 0.0 3
torsion      54   54   60   61      0.000 0.0 1   0.000 180.0 2  -0.091 0.0 3
torsion      61   60   62   70      0.000 0.0 1   0.000 180.0 2  -0.070 0.0 3
torsion      61   60   62   72      0.000 0.0 1   0.000 180.0 2   0.169 0.0 3
torsion      63   60   62   70      0.000 0.0 1  -2.500 180.0 2  -0.603 0.0 3
torsion      63   60   62   72      0.000 0.0 1  -0.580 180.0 2   0.980 0.0 3
torsion      69   60   62   70      0.000 0.0 1  -2.500 180.0 2  -0.603 0.0 3
torsion      69   60   62   72      0.000 0.0 1  -0.580 180.0 2   0.980 0.0 3
torsion      61   60   63   62      0.000 0.0 1   0.000 180.0 2   0.380 0.0 3
torsion      61   60   63   63      0.000 0.0 1   0.000 180.0 2   0.380 0.0 3
torsion      61   60   63   64      0.000 0.0 1   0.000 180.0 2   0.380 0.0 3
torsion      61   60   63   68      0.000 0.0 1   0.000 180.0 2   0.380 0.0 3
torsion      62   60   63   62      0.000 0.0 1  -3.500 180.0 2   0.380 0.0 3
torsion      62   60   63   63      0.000 0.0 1   3.500 180.0 2  -0.370 0.0 3
torsion      62   60   63   64      0.000 0.0 1   0.000 180.0 2   0.382 0.0 3
torsion      62   60   63   68      0.000 0.0 1  -3.500 180.0 2   0.380 0.0 3
torsion      61   60   69   62      0.000 0.0 1   0.000 180.0 2   0.480 0.0 3
torsion      61   60   69   64      0.000 0.0 1   0.000 180.0 2   0.480 0.0 3
torsion      61   60   69   68      0.000 0.0 1   0.000 180.0 2   0.480 0.0 3
torsion      61   60   69   69      0.000 0.0 1   0.000 180.0 2   0.480 0.0 3
torsion      62   60   69   62      0.000 0.0 1  -1.500 180.0 2   0.280 0.0 3
torsion      62   60   69   64      0.000 0.0 1   0.000 180.0 2   0.280 0.0 3
torsion      62   60   69   68      0.000 0.0 1  -1.500 180.0 2   0.280 0.0 3
torsion      62   60   69   69      0.000 0.0 1   3.000 180.0 2  -0.370 0.0 3
torsion      63   62   63   43      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   62   63   60      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   62   63   63      0.000 0.0 1   0.000 180.0 2   0.786 0.0 3
torsion      63   62   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   62   63   65      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      70   62   63   63      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3
torsion      70   62   63   64      0.000 0.0 1   0.000 180.0 2  -0.070 0.0 3
torsion      72   62   63   63     -1.500 0.0 1   2.000 180.0 2   0.186 0.0 3
torsion      72   62   63   64      0.000 0.0 1   0.000 180.0 2   0.686 0.0 3
torsion      69   62   69   43      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   62   69   60      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   62   69   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   62   69   65      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      69   62   69   69      2.000 0.0 1  -1.500 180.0 2   0.886 0.0 3
torsion      70   62   69   64      0.000 0.0 1   0.000 180.0 2  -0.070 0.0 3
torsion      70   62   69   69      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3
torsion      72   62   69   64      0.000 0.0 1   0.000 180.0 2   0.686 0.0 3
torsion      72   62   69   69     -1.500 0.0 1   2.000 180.0 2   0.186 0.0 3
torsion      60   62   70   62     -2.000 0.0 1  -1.680 180.0 2  -0.800 0.0 3
torsion      60   62   70   71      0.000 0.0 1   0.000 180.0 2   0.990 0.0 3
torsion      63   62   70   62     -2.000 0.0 1  -1.680 180.0 2  -0.800 0.0 3
torsion      63   62   70   71      0.000 0.0 1   0.000 180.0 2   0.990 0.0 3
torsion      69   62   70   62     -2.000 0.0 1  -1.680 180.0 2  -0.800 0.0 3
torsion      69   62   70   71      0.000 0.0 1   0.000 180.0 2   0.990 0.0 3
torsion      43   63   63   63      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      43   63   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      43   63   63   66      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      60   63   63   62      0.000 0.0 1   0.500 180.0 2   0.486 0.0 3
torsion      60   63   63   63      0.000 0.0 1   0.000 180.0 2  -0.286 0.0 3
torsion      60   63   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      62   63   63   62      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      62   63   63   63      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      62   63   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      62   63   63   66      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      62   63   63   68      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   63   63   63      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      63   63   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   63   63   65      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      63   63   63   66      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      63   63   63   68      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      64   63   63   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      64   63   63   65      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      64   63   63   66      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      64   63   63   68      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      65   63   63   66      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      66   63   63   68      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      63   63   66   67     -3.500 0.0 1   1.000 180.0 2   0.186 0.0 3
torsion      64   63   66   67      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      43   63   68   63      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      60   63   68   63      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      63   63   68   63      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3
torsion      64   63   68   63      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      65   63   68   63      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   68   69   43      0.000 0.0 1   0.000 180.0 2   0.086 0.0 3
torsion      69   68   69   60      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   68   69   64      0.000 0.0 1   0.000 180.0 2   0.286 0.0 3
torsion      69   68   69   65      0.000 0.0 1   0.000 180.0 2   0.386 0.0 3
torsion      69   68   69   69      3.000 0.0 1  -3.000 180.0 2  -0.886 0.0 3
torsion      43   69   69   64      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      43   69   69   69      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      60   69   69   62      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      60   69   69   64      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      60   69   69   69      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3
torsion      62   69   69   62      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      62   69   69   64      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      62   69   69   68      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      62   69   69   69      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3
torsion      64   69   69   64      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      64   69   69   65      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      64   69   69   68      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      64   69   69   69      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      65   69   69   69      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      68   69   69   69      0.000 0.0 1   0.000 180.0 2   0.186 0.0 3
torsion      69   69   69   69      0.000 0.0 1   0.000 180.0 2   0.886 0.0 3


      #############################
      ##                         ##
      ##  Pi-Torsion Parameters  ##
      ##                         ##
      #############################


pitors        1    3            6.85
pitors        3   15            6.85
pitors       17   17            6.85
pitors       22   22            6.85
pitors       22   24            6.85
pitors       24   26            6.85
pitors       24   28            6.85
pitors       26   26            6.85
pitors       43   44            5.85
pitors       43   46            5.85
pitors       43   53            5.85
pitors       43   54            5.85
pitors       44   44            5.85
pitors       44   45            5.85
pitors       44   47            5.85
pitors       44   49            5.85
pitors       44   53            5.85
pitors       45   46            5.85
pitors       47   48            5.85
pitors       47   49            5.85
pitors       47   53            5.85
pitors       49   54            5.85
pitors       49   58            9.85
pitors       53   54            5.85
pitors       53   58            5.85
pitors       54   54            7.85


      ##################################
      ##                              ##
      ##  Torsion-Torsion Parameters  ##
      ##                              ##
      ##################################


tortors       3    1    2    3    1        25   25
  -180.0   -180.0     0.00000
  -165.0   -180.0    -0.15918
  -150.0   -180.0    -0.46924
  -135.0   -180.0    -0.94887
  -120.0   -180.0    -1.41919
  -105.0   -180.0    -1.89608
   -90.0   -180.0    -2.35024
   -75.0   -180.0    -2.81648
   -60.0   -180.0    -3.17758
   -45.0   -180.0    -2.91092
   -30.0   -180.0    -1.84916
   -15.0   -180.0    -0.61868
     0.0   -180.0     1.44957
    15.0   -180.0    -0.61868
    30.0   -180.0    -1.84916
    45.0   -180.0    -2.91092
    60.0   -180.0    -3.17758
    75.0   -180.0    -2.81793
    90.0   -180.0    -2.34954
   105.0   -180.0    -1.91578
   120.0   -180.0    -1.41919
   135.0   -180.0    -0.94887
   150.0   -180.0    -0.46924
   165.0   -180.0    -0.15918
   180.0   -180.0     0.00000
  -180.0   -165.0    -0.03043
  -165.0   -165.0    -0.40282
  -150.0   -165.0    -0.84288
  -135.0   -165.0    -1.22723
  -120.0   -165.0    -1.58634
  -105.0   -165.0    -1.98317
   -90.0   -165.0    -2.46682
   -75.0   -165.0    -2.96238
   -60.0   -165.0    -3.27921
   -45.0   -165.0    -2.85897
   -30.0   -165.0    -1.66034
   -15.0   -165.0     0.28654
     0.0   -165.0     0.47583
    15.0   -165.0    -0.59328
    30.0   -165.0    -1.85441
    45.0   -165.0    -2.72832
    60.0   -165.0    -2.82977
    75.0   -165.0    -2.43750
    90.0   -165.0    -1.97978
   105.0   -165.0    -1.47132
   120.0   -165.0    -0.94989
   135.0   -165.0    -0.44166
   150.0   -165.0    -0.04055
   165.0   -165.0     0.10146
   180.0   -165.0    -0.03043
  -180.0   -150.0    -0.05487
  -165.0   -150.0    -0.49639
  -150.0   -150.0    -0.83418
  -135.0   -150.0    -1.02443
  -120.0   -150.0    -1.24614
  -105.0   -150.0    -1.65671
   -90.0   -150.0    -2.17397
   -75.0   -150.0    -2.73078
   -60.0   -150.0    -2.95919
   -45.0   -150.0    -2.36553
   -30.0   -150.0    -0.65594
   -15.0   -150.0     1.60921
     0.0   -150.0     0.68197
    15.0   -150.0    -0.47503
    30.0   -150.0    -1.60792
    45.0   -150.0    -2.28172
    60.0   -150.0    -2.27657
    75.0   -150.0    -1.84368
    90.0   -150.0    -1.32072
   105.0   -150.0    -0.79693
   120.0   -150.0    -0.27502
   135.0   -150.0     0.15792
   150.0   -150.0     0.37394
   165.0   -150.0     0.30007
   180.0   -150.0    -0.05487
  -180.0   -135.0     0.22137
  -165.0   -135.0    -0.11507
  -150.0   -135.0    -0.25069
  -135.0   -135.0    -0.25120
  -120.0   -135.0    -0.45372
  -105.0   -135.0    -0.91494
   -90.0   -135.0    -1.48283
   -75.0   -135.0    -1.97985
   -60.0   -135.0    -1.99291
   -45.0   -135.0    -0.87317
   -30.0   -135.0     2.15102
   -15.0   -135.0     2.08125
     0.0   -135.0     1.01469
    15.0   -135.0    -0.13409
    30.0   -135.0    -1.08446
    45.0   -135.0    -1.57764
    60.0   -135.0    -1.54005
    75.0   -135.0    -1.11846
    90.0   -135.0    -0.54882
   105.0   -135.0    -0.14353
   120.0   -135.0     0.35059
   135.0   -135.0     0.78961
   150.0   -135.0     0.82176
   165.0   -135.0     0.59900
   180.0   -135.0     0.22137
  -180.0   -120.0     0.76282
  -165.0   -120.0     0.65049
  -150.0   -120.0     0.73226
  -135.0   -120.0     0.80302
  -120.0   -120.0     0.46767
  -105.0   -120.0    -0.17578
   -90.0   -120.0    -0.55868
   -75.0   -120.0    -0.87022
   -60.0   -120.0    -0.44624
   -45.0   -120.0     1.42775
   -30.0   -120.0     3.49117
   -15.0   -120.0     2.47433
     0.0   -120.0     1.40660
    15.0   -120.0     0.51132
    30.0   -120.0    -0.07964
    45.0   -120.0    -0.49787
    60.0   -120.0    -0.64487
    75.0   -120.0    -0.35755
    90.0   -120.0     0.18803
   105.0   -120.0     0.54550
   120.0   -120.0     0.97289
   135.0   -120.0     1.16949
   150.0   -120.0     1.15910
   165.0   -120.0     1.05012
   180.0   -120.0     0.76282
  -180.0   -105.0     1.42827
  -165.0   -105.0     1.50406
  -150.0   -105.0     1.72284
  -135.0   -105.0     1.64917
  -120.0   -105.0     1.03764
  -105.0   -105.0     0.56475
   -90.0   -105.0     0.20084
   -75.0   -105.0     0.20821
   -60.0   -105.0     1.22814
   -45.0   -105.0     2.98189
   -30.0   -105.0     3.57647
   -15.0   -105.0     2.65211
     0.0   -105.0     1.95317
    15.0   -105.0     1.65224
    30.0   -105.0     1.43567
    45.0   -105.0     0.92486
    60.0   -105.0     0.55065
    75.0   -105.0     0.46027
    90.0   -105.0     0.60470
   105.0   -105.0     1.02077
   120.0   -105.0     1.33189
   135.0   -105.0     1.51499
   150.0   -105.0     1.50886
   165.0   -105.0     1.53133
   180.0   -105.0     1.42827
  -180.0    -90.0     1.90401
  -165.0    -90.0     2.03939
  -150.0    -90.0     2.29924
  -135.0    -90.0     1.79055
  -120.0    -90.0     1.35280
  -105.0    -90.0     1.02391
   -90.0    -90.0     0.90562
   -75.0    -90.0     1.23397
   -60.0    -90.0     2.45075
   -45.0    -90.0     3.45522
   -30.0    -90.0     3.09983
   -15.0    -90.0     2.62493
     0.0    -90.0     2.65047
    15.0    -90.0     3.09474
    30.0    -90.0     2.79428
    45.0    -90.0     2.15793
    60.0    -90.0     1.57482
    75.0    -90.0     1.33310
    90.0    -90.0     1.13012
   105.0    -90.0     1.17449
   120.0    -90.0     1.41199
   135.0    -90.0     1.62671
   150.0    -90.0     1.81755
   165.0    -90.0     1.82118
   180.0    -90.0     1.90401
  -180.0    -75.0     1.80621
  -165.0    -75.0     2.08080
  -150.0    -75.0     2.03556
  -135.0    -75.0     1.68691
  -120.0    -75.0     1.29208
  -105.0    -75.0     1.22509
   -90.0    -75.0     1.43311
   -75.0    -75.0     2.16375
   -60.0    -75.0     2.17320
   -45.0    -75.0     2.21268
   -30.0    -75.0     2.13049
   -15.0    -75.0     2.40205
     0.0    -75.0     3.24329
    15.0    -75.0     4.06613
    30.0    -75.0     3.57523
    45.0    -75.0     2.86443
    60.0    -75.0     2.31976
    75.0    -75.0     1.66472
    90.0    -75.0     1.27852
   105.0    -75.0     1.09103
   120.0    -75.0     1.36656
   135.0    -75.0     1.53314
   150.0    -75.0     1.59747
   165.0    -75.0     1.64225
   180.0    -75.0     1.80621
  -180.0    -60.0     0.94133
  -165.0    -60.0     1.07716
  -150.0    -60.0     1.06365
  -135.0    -60.0     0.96211
  -120.0    -60.0     0.94411
  -105.0    -60.0     1.25994
   -90.0    -60.0     0.79628
   -75.0    -60.0     0.57562
   -60.0    -60.0     0.56577
   -45.0    -60.0     0.74572
   -30.0    -60.0     1.24745
   -15.0    -60.0     2.21612
     0.0    -60.0     3.54214
    15.0    -60.0     3.78367
    30.0    -60.0     3.40120
    45.0    -60.0     2.89718
    60.0    -60.0     1.94715
    75.0    -60.0     1.36042
    90.0    -60.0     0.79250
   105.0    -60.0     0.57769
   120.0    -60.0     0.77935
   135.0    -60.0     0.79351
   150.0    -60.0     0.75367
   165.0    -60.0     0.78581
   180.0    -60.0     0.94133
  -180.0    -45.0    -0.67275
  -165.0    -45.0    -0.59212
  -150.0    -45.0    -0.42200
  -135.0    -45.0    -0.01106
  -120.0    -45.0    -0.51470
  -105.0    -45.0    -0.80922
   -90.0    -45.0    -0.99538
   -75.0    -45.0    -1.06430
   -60.0    -45.0    -0.87844
   -45.0    -45.0    -0.24576
   -30.0    -45.0     0.77634
   -15.0    -45.0     2.05251
     0.0    -45.0     2.78505
    15.0    -45.0     3.13379
    30.0    -45.0     2.85045
    45.0    -45.0     2.19151
    60.0    -45.0     1.16243
    75.0    -45.0     0.20720
    90.0    -45.0    -0.42237
   105.0    -45.0    -0.46460
   120.0    -45.0    -0.38665
   135.0    -45.0    -0.55232
   150.0    -45.0    -0.67078
   165.0    -45.0    -0.67830
   180.0    -45.0    -0.67275
  -180.0    -30.0    -2.46944
  -165.0    -30.0    -2.32595
  -150.0    -30.0    -1.71439
  -135.0    -30.0    -2.48703
  -120.0    -30.0    -2.56054
  -105.0    -30.0    -2.46215
   -90.0    -30.0    -2.37111
   -75.0    -30.0    -2.19037
   -60.0    -30.0    -1.62432
   -45.0    -30.0    -0.72370
   -30.0    -30.0     0.35895
   -15.0    -30.0     1.35947
     0.0    -30.0     2.12358
    15.0    -30.0     2.36496
    30.0    -30.0     1.96636
    45.0    -30.0     1.05275
    60.0    -30.0    -0.26183
    75.0    -30.0    -1.16368
    90.0    -30.0    -1.65442
   105.0    -30.0    -1.64196
   120.0    -30.0    -1.86484
   135.0    -30.0    -2.09366
   150.0    -30.0    -2.28268
   165.0    -30.0    -2.41932
   180.0    -30.0    -2.46944
  -180.0    -15.0    -3.82546
  -165.0    -15.0    -3.22967
  -150.0    -15.0    -3.93518
  -135.0    -15.0    -3.85949
  -120.0    -15.0    -3.58321
  -105.0    -15.0    -3.28549
   -90.0    -15.0    -3.01617
   -75.0    -15.0    -2.60005
   -60.0    -15.0    -1.92147
   -45.0    -15.0    -1.14234
   -30.0    -15.0    -0.00873
   -15.0    -15.0     1.14445
     0.0    -15.0     1.77335
    15.0    -15.0     1.79047
    30.0    -15.0     1.09507
    45.0    -15.0    -0.16297
    60.0    -15.0    -1.43516
    75.0    -15.0    -2.26699
    90.0    -15.0    -2.45933
   105.0    -15.0    -2.70542
   120.0    -15.0    -3.03929
   135.0    -15.0    -3.35545
   150.0    -15.0    -3.62364
   165.0    -15.0    -3.79758
   180.0    -15.0    -3.82546
  -180.0      0.0    -3.82990
  -165.0      0.0    -4.37645
  -150.0      0.0    -4.29456
  -135.0      0.0    -4.01846
  -120.0      0.0    -3.66843
  -105.0      0.0    -3.31240
   -90.0      0.0    -2.96646
   -75.0      0.0    -2.58028
   -60.0      0.0    -2.08554
   -45.0      0.0    -0.99050
   -30.0      0.0     0.42261
   -15.0      0.0     1.35374
     0.0      0.0     1.69885
    15.0      0.0     1.35374
    30.0      0.0     0.42261
    45.0      0.0    -1.00310
    60.0      0.0    -2.08554
    75.0      0.0    -2.58028
    90.0      0.0    -2.96646
   105.0      0.0    -3.31240
   120.0      0.0    -3.66843
   135.0      0.0    -4.01846
   150.0      0.0    -4.29456
   165.0      0.0    -4.37645
   180.0      0.0    -3.82990
  -180.0     15.0    -3.82546
  -165.0     15.0    -3.79758
  -150.0     15.0    -3.62364
  -135.0     15.0    -3.35545
  -120.0     15.0    -3.03929
  -105.0     15.0    -2.70542
   -90.0     15.0    -2.45933
   -75.0     15.0    -2.26699
   -60.0     15.0    -1.43516
   -45.0     15.0    -0.16297
   -30.0     15.0     1.09507
   -15.0     15.0     1.79047
     0.0     15.0     1.77335
    15.0     15.0     1.14445
    30.0     15.0    -0.00873
    45.0     15.0    -1.14234
    60.0     15.0    -1.92147
    75.0     15.0    -2.60005
    90.0     15.0    -3.01617
   105.0     15.0    -3.28549
   120.0     15.0    -3.58321
   135.0     15.0    -3.85949
   150.0     15.0    -3.93518
   165.0     15.0    -3.23037
   180.0     15.0    -3.82546
  -180.0     30.0    -2.46944
  -165.0     30.0    -2.41932
  -150.0     30.0    -2.28268
  -135.0     30.0    -2.09366
  -120.0     30.0    -1.86484
  -105.0     30.0    -1.64196
   -90.0     30.0    -1.65442
   -75.0     30.0    -1.16368
   -60.0     30.0    -0.26183
   -45.0     30.0     1.05275
   -30.0     30.0     1.96636
   -15.0     30.0     2.36496
     0.0     30.0     2.12358
    15.0     30.0     1.35947
    30.0     30.0     0.35055
    45.0     30.0    -0.72370
    60.0     30.0    -1.62432
    75.0     30.0    -2.19037
    90.0     30.0    -2.37111
   105.0     30.0    -2.46215
   120.0     30.0    -2.56054
   135.0     30.0    -2.48703
   150.0     30.0    -1.70729
   165.0     30.0    -2.32595
   180.0     30.0    -2.46944
  -180.0     45.0    -0.67275
  -165.0     45.0    -0.67830
  -150.0     45.0    -0.67078
  -135.0     45.0    -0.55232
  -120.0     45.0    -0.38665
  -105.0     45.0    -0.46460
   -90.0     45.0    -0.42237
   -75.0     45.0     0.20720
   -60.0     45.0     1.16243
   -45.0     45.0     2.19151
   -30.0     45.0     2.85045
   -15.0     45.0     3.13379
     0.0     45.0     2.78505
    15.0     45.0     2.06071
    30.0     45.0     0.77634
    45.0     45.0    -0.24576
    60.0     45.0    -0.87844
    75.0     45.0    -1.06430
    90.0     45.0    -0.99538
   105.0     45.0    -0.80922
   120.0     45.0    -0.51470
   135.0     45.0    -0.01106
   150.0     45.0    -0.42200
   165.0     45.0    -0.59212
   180.0     45.0    -0.67275
  -180.0     60.0     0.94133
  -165.0     60.0     0.78581
  -150.0     60.0     0.75367
  -135.0     60.0     0.79351
  -120.0     60.0     0.77935
  -105.0     60.0     0.57769
   -90.0     60.0     0.79250
   -75.0     60.0     1.36042
   -60.0     60.0     1.94715
   -45.0     60.0     2.89718
   -30.0     60.0     3.40120
   -15.0     60.0     3.78367
     0.0     60.0     3.54214
    15.0     60.0     2.19742
    30.0     60.0     1.24745
    45.0     60.0     0.74572
    60.0     60.0     0.56577
    75.0     60.0     0.57562
    90.0     60.0     0.79628
   105.0     60.0     1.25994
   120.0     60.0     0.94411
   135.0     60.0     0.96211
   150.0     60.0     1.06365
   165.0     60.0     1.07716
   180.0     60.0     0.94133
  -180.0     75.0     1.80621
  -165.0     75.0     1.64225
  -150.0     75.0     1.59747
  -135.0     75.0     1.53314
  -120.0     75.0     1.36656
  -105.0     75.0     1.09103
   -90.0     75.0     1.27852
   -75.0     75.0     1.66472
   -60.0     75.0     2.31976
   -45.0     75.0     2.86443
   -30.0     75.0     3.57523
   -15.0     75.0     4.06613
     0.0     75.0     3.24329
    15.0     75.0     2.40295
    30.0     75.0     2.13049
    45.0     75.0     2.21268
    60.0     75.0     2.17320
    75.0     75.0     2.16375
    90.0     75.0     1.43311
   105.0     75.0     1.22509
   120.0     75.0     1.29208
   135.0     75.0     1.68691
   150.0     75.0     2.03556
   165.0     75.0     2.08080
   180.0     75.0     1.80621
  -180.0     90.0     1.90401
  -165.0     90.0     1.82118
  -150.0     90.0     1.81755
  -135.0     90.0     1.62671
  -120.0     90.0     1.41199
  -105.0     90.0     1.17449
   -90.0     90.0     1.13012
   -75.0     90.0     1.33310
   -60.0     90.0     1.57482
   -45.0     90.0     2.15793
   -30.0     90.0     2.79428
   -15.0     90.0     3.09474
     0.0     90.0     2.65047
    15.0     90.0     2.62493
    30.0     90.0     3.09673
    45.0     90.0     3.45522
    60.0     90.0     2.45075
    75.0     90.0     1.23397
    90.0     90.0     0.90562
   105.0     90.0     1.02391
   120.0     90.0     1.35280
   135.0     90.0     1.79055
   150.0     90.0     2.29924
   165.0     90.0     2.03939
   180.0     90.0     1.90401
  -180.0    105.0     1.42827
  -165.0    105.0     1.53133
  -150.0    105.0     1.50886
  -135.0    105.0     1.51499
  -120.0    105.0     1.33189
  -105.0    105.0     1.02077
   -90.0    105.0     0.60470
   -75.0    105.0     0.46027
   -60.0    105.0     0.55065
   -45.0    105.0     0.92486
   -30.0    105.0     1.43567
   -15.0    105.0     1.65224
     0.0    105.0     1.95317
    15.0    105.0     2.65211
    30.0    105.0     3.58847
    45.0    105.0     2.98189
    60.0    105.0     1.22814
    75.0    105.0     0.20821
    90.0    105.0     0.20084
   105.0    105.0     0.56475
   120.0    105.0     1.03764
   135.0    105.0     1.64917
   150.0    105.0     1.72204
   165.0    105.0     1.50406
   180.0    105.0     1.42827
  -180.0    120.0     0.76282
  -165.0    120.0     1.05012
  -150.0    120.0     1.15910
  -135.0    120.0     1.16949
  -120.0    120.0     0.97289
  -105.0    120.0     0.54550
   -90.0    120.0     0.18803
   -75.0    120.0    -0.35755
   -60.0    120.0    -0.64487
   -45.0    120.0    -0.49787
   -30.0    120.0    -0.07964
   -15.0    120.0     0.51132
     0.0    120.0     1.40660
    15.0    120.0     2.47433
    30.0    120.0     3.49117
    45.0    120.0     1.42775
    60.0    120.0    -0.44624
    75.0    120.0    -0.87022
    90.0    120.0    -0.55868
   105.0    120.0    -0.17578
   120.0    120.0     0.46767
   135.0    120.0     0.80302
   150.0    120.0     0.73536
   165.0    120.0     0.65049
   180.0    120.0     0.76282
  -180.0    135.0     0.22137
  -165.0    135.0     0.59900
  -150.0    135.0     0.82176
  -135.0    135.0     0.78961
  -120.0    135.0     0.35059
  -105.0    135.0    -0.14353
   -90.0    135.0    -0.54882
   -75.0    135.0    -1.11846
   -60.0    135.0    -1.54005
   -45.0    135.0    -1.57764
   -30.0    135.0    -1.08446
   -15.0    135.0    -0.13409
     0.0    135.0     1.01469
    15.0    135.0     2.08125
    30.0    135.0     2.15102
    45.0    135.0    -0.87317
    60.0    135.0    -1.99291
    75.0    135.0    -1.97985
    90.0    135.0    -1.48283
   105.0    135.0    -0.91494
   120.0    135.0    -0.45372
   135.0    135.0    -0.25120
   150.0    135.0    -0.25069
   165.0    135.0    -0.11507
   180.0    135.0     0.22137
  -180.0    150.0    -0.05487
  -165.0    150.0     0.30007
  -150.0    150.0     0.37394
  -135.0    150.0     0.15792
  -120.0    150.0    -0.27502
  -105.0    150.0    -0.79693
   -90.0    150.0    -1.32072
   -75.0    150.0    -1.85418
   -60.0    150.0    -2.27657
   -45.0    150.0    -2.28172
   -30.0    150.0    -1.60792
   -15.0    150.0    -0.47503
     0.0    150.0     0.68197
    15.0    150.0     1.60921
    30.0    150.0    -0.65594
    45.0    150.0    -2.36553
    60.0    150.0    -2.95919
    75.0    150.0    -2.73078
    90.0    150.0    -2.17397
   105.0    150.0    -1.65041
   120.0    150.0    -1.25474
   135.0    150.0    -1.02443
   150.0    150.0    -0.83418
   165.0    150.0    -0.49639
   180.0    150.0    -0.05487
  -180.0    165.0    -0.03043
  -165.0    165.0     0.10146
  -150.0    165.0    -0.04055
  -135.0    165.0    -0.44166
  -120.0    165.0    -0.94989
  -105.0    165.0    -1.47132
   -90.0    165.0    -1.96898
   -75.0    165.0    -2.45910
   -60.0    165.0    -2.82977
   -45.0    165.0    -2.72832
   -30.0    165.0    -1.85441
   -15.0    165.0    -0.59328
     0.0    165.0     0.47583
    15.0    165.0     0.28654
    30.0    165.0    -1.66034
    45.0    165.0    -2.85897
    60.0    165.0    -3.27921
    75.0    165.0    -2.96238
    90.0    165.0    -2.44752
   105.0    165.0    -1.99117
   120.0    165.0    -1.60564
   135.0    165.0    -1.22723
   150.0    165.0    -0.84288
   165.0    165.0    -0.40282
   180.0    165.0    -0.03043
  -180.0    180.0     0.00000
  -165.0    180.0    -0.15918
  -150.0    180.0    -0.46924
  -135.0    180.0    -0.94887
  -120.0    180.0    -1.41919
  -105.0    180.0    -1.89608
   -90.0    180.0    -2.35024
   -75.0    180.0    -2.81648
   -60.0    180.0    -3.17758
   -45.0    180.0    -2.91092
   -30.0    180.0    -1.84916
   -15.0    180.0    -0.61868
     0.0    180.0     1.44957
    15.0    180.0    -0.61868
    30.0    180.0    -1.84916
    45.0    180.0    -2.91092
    60.0    180.0    -3.17758
    75.0    180.0    -2.81793
    90.0    180.0    -2.34954
   105.0    180.0    -1.91578
   120.0    180.0    -1.41919
   135.0    180.0    -0.94887
   150.0    180.0    -0.46924
   165.0    180.0    -0.15918
   180.0    180.0     0.00000

tortors       3    1    2    3   15        25   25
  -180.0   -180.0     0.00000
  -165.0   -180.0    -0.15918
  -150.0   -180.0    -0.46924
  -135.0   -180.0    -0.94887
  -120.0   -180.0    -1.41919
  -105.0   -180.0    -1.89608
   -90.0   -180.0    -2.35024
   -75.0   -180.0    -2.81648
   -60.0   -180.0    -3.17758
   -45.0   -180.0    -2.91092
   -30.0   -180.0    -1.84916
   -15.0   -180.0    -0.61868
     0.0   -180.0     1.44957
    15.0   -180.0    -0.61868
    30.0   -180.0    -1.84916
    45.0   -180.0    -2.91092
    60.0   -180.0    -3.17758
    75.0   -180.0    -2.81793
    90.0   -180.0    -2.34954
   105.0   -180.0    -1.91578
   120.0   -180.0    -1.41919
   135.0   -180.0    -0.94887
   150.0   -180.0    -0.46924
   165.0   -180.0    -0.15918
   180.0   -180.0     0.00000
  -180.0   -165.0    -0.03043
  -165.0   -165.0    -0.40282
  -150.0   -165.0    -0.84288
  -135.0   -165.0    -1.22723
  -120.0   -165.0    -1.58634
  -105.0   -165.0    -1.98317
   -90.0   -165.0    -2.46682
   -75.0   -165.0    -2.96238
   -60.0   -165.0    -3.27921
   -45.0   -165.0    -2.85897
   -30.0   -165.0    -1.66034
   -15.0   -165.0     0.28654
     0.0   -165.0     0.47583
    15.0   -165.0    -0.59328
    30.0   -165.0    -1.85441
    45.0   -165.0    -2.72832
    60.0   -165.0    -2.82977
    75.0   -165.0    -2.43750
    90.0   -165.0    -1.97978
   105.0   -165.0    -1.47132
   120.0   -165.0    -0.94989
   135.0   -165.0    -0.44166
   150.0   -165.0    -0.04055
   165.0   -165.0     0.10146
   180.0   -165.0    -0.03043
  -180.0   -150.0    -0.05487
  -165.0   -150.0    -0.49639
  -150.0   -150.0    -0.83418
  -135.0   -150.0    -1.02443
  -120.0   -150.0    -1.24614
  -105.0   -150.0    -1.65671
   -90.0   -150.0    -2.17397
   -75.0   -150.0    -2.73078
   -60.0   -150.0    -2.95919
   -45.0   -150.0    -2.36553
   -30.0   -150.0    -0.65594
   -15.0   -150.0     1.60921
     0.0   -150.0     0.68197
    15.0   -150.0    -0.47503
    30.0   -150.0    -1.60792
    45.0   -150.0    -2.28172
    60.0   -150.0    -2.27657
    75.0   -150.0    -1.84368
    90.0   -150.0    -1.32072
   105.0   -150.0    -0.79693
   120.0   -150.0    -0.27502
   135.0   -150.0     0.15792
   150.0   -150.0     0.37394
   165.0   -150.0     0.30007
   180.0   -150.0    -0.05487
  -180.0   -135.0     0.22137
  -165.0   -135.0    -0.11507
  -150.0   -135.0    -0.25069
  -135.0   -135.0    -0.25120
  -120.0   -135.0    -0.45372
  -105.0   -135.0    -0.91494
   -90.0   -135.0    -1.48283
   -75.0   -135.0    -1.97985
   -60.0   -135.0    -1.99291
   -45.0   -135.0    -0.87317
   -30.0   -135.0     2.15102
   -15.0   -135.0     2.08125
     0.0   -135.0     1.01469
    15.0   -135.0    -0.13409
    30.0   -135.0    -1.08446
    45.0   -135.0    -1.57764
    60.0   -135.0    -1.54005
    75.0   -135.0    -1.11846
    90.0   -135.0    -0.54882
   105.0   -135.0    -0.14353
   120.0   -135.0     0.35059
   135.0   -135.0     0.78961
   150.0   -135.0     0.82176
   165.0   -135.0     0.59900
   180.0   -135.0     0.22137
  -180.0   -120.0     0.76282
  -165.0   -120.0     0.65049
  -150.0   -120.0     0.73226
  -135.0   -120.0     0.80302
  -120.0   -120.0     0.46767
  -105.0   -120.0    -0.17578
   -90.0   -120.0    -0.55868
   -75.0   -120.0    -0.87022
   -60.0   -120.0    -0.44624
   -45.0   -120.0     1.42775
   -30.0   -120.0     3.49117
   -15.0   -120.0     2.47433
     0.0   -120.0     1.40660
    15.0   -120.0     0.51132
    30.0   -120.0    -0.07964
    45.0   -120.0    -0.49787
    60.0   -120.0    -0.64487
    75.0   -120.0    -0.35755
    90.0   -120.0     0.18803
   105.0   -120.0     0.54550
   120.0   -120.0     0.97289
   135.0   -120.0     1.16949
   150.0   -120.0     1.15910
   165.0   -120.0     1.05012
   180.0   -120.0     0.76282
  -180.0   -105.0     1.42827
  -165.0   -105.0     1.50406
  -150.0   -105.0     1.72284
  -135.0   -105.0     1.64917
  -120.0   -105.0     1.03764
  -105.0   -105.0     0.56475
   -90.0   -105.0     0.20084
   -75.0   -105.0     0.20821
   -60.0   -105.0     1.22814
   -45.0   -105.0     2.98189
   -30.0   -105.0     3.57647
   -15.0   -105.0     2.65211
     0.0   -105.0     1.95317
    15.0   -105.0     1.65224
    30.0   -105.0     1.43567
    45.0   -105.0     0.92486
    60.0   -105.0     0.55065
    75.0   -105.0     0.46027
    90.0   -105.0     0.60470
   105.0   -105.0     1.02077
   120.0   -105.0     1.33189
   135.0   -105.0     1.51499
   150.0   -105.0     1.50886
   165.0   -105.0     1.53133
   180.0   -105.0     1.42827
  -180.0    -90.0     1.90401
  -165.0    -90.0     2.03939
  -150.0    -90.0     2.29924
  -135.0    -90.0     1.79055
  -120.0    -90.0     1.35280
  -105.0    -90.0     1.02391
   -90.0    -90.0     0.90562
   -75.0    -90.0     1.23397
   -60.0    -90.0     2.45075
   -45.0    -90.0     3.45522
   -30.0    -90.0     3.09983
   -15.0    -90.0     2.62493
     0.0    -90.0     2.65047
    15.0    -90.0     3.09474
    30.0    -90.0     2.79428
    45.0    -90.0     2.15793
    60.0    -90.0     1.57482
    75.0    -90.0     1.33310
    90.0    -90.0     1.13012
   105.0    -90.0     1.17449
   120.0    -90.0     1.41199
   135.0    -90.0     1.62671
   150.0    -90.0     1.81755
   165.0    -90.0     1.82118
   180.0    -90.0     1.90401
  -180.0    -75.0     1.80621
  -165.0    -75.0     2.08080
  -150.0    -75.0     2.03556
  -135.0    -75.0     1.68691
  -120.0    -75.0     1.29208
  -105.0    -75.0     1.22509
   -90.0    -75.0     1.43311
   -75.0    -75.0     2.16375
   -60.0    -75.0     2.17320
   -45.0    -75.0     2.21268
   -30.0    -75.0     2.13049
   -15.0    -75.0     2.40205
     0.0    -75.0     3.24329
    15.0    -75.0     4.06613
    30.0    -75.0     3.57523
    45.0    -75.0     2.86443
    60.0    -75.0     2.31976
    75.0    -75.0     1.66472
    90.0    -75.0     1.27852
   105.0    -75.0     1.09103
   120.0    -75.0     1.36656
   135.0    -75.0     1.53314
   150.0    -75.0     1.59747
   165.0    -75.0     1.64225
   180.0    -75.0     1.80621
  -180.0    -60.0     0.94133
  -165.0    -60.0     1.07716
  -150.0    -60.0     1.06365
  -135.0    -60.0     0.96211
  -120.0    -60.0     0.94411
  -105.0    -60.0     1.25994
   -90.0    -60.0     0.79628
   -75.0    -60.0     0.57562
   -60.0    -60.0     0.56577
   -45.0    -60.0     0.74572
   -30.0    -60.0     1.24745
   -15.0    -60.0     2.21612
     0.0    -60.0     3.54214
    15.0    -60.0     3.78367
    30.0    -60.0     3.40120
    45.0    -60.0     2.89718
    60.0    -60.0     1.94715
    75.0    -60.0     1.36042
    90.0    -60.0     0.79250
   105.0    -60.0     0.57769
   120.0    -60.0     0.77935
   135.0    -60.0     0.79351
   150.0    -60.0     0.75367
   165.0    -60.0     0.78581
   180.0    -60.0     0.94133
  -180.0    -45.0    -0.67275
  -165.0    -45.0    -0.59212
  -150.0    -45.0    -0.42200
  -135.0    -45.0    -0.01106
  -120.0    -45.0    -0.51470
  -105.0    -45.0    -0.80922
   -90.0    -45.0    -0.99538
   -75.0    -45.0    -1.06430
   -60.0    -45.0    -0.87844
   -45.0    -45.0    -0.24576
   -30.0    -45.0     0.77634
   -15.0    -45.0     2.05251
     0.0    -45.0     2.78505
    15.0    -45.0     3.13379
    30.0    -45.0     2.85045
    45.0    -45.0     2.19151
    60.0    -45.0     1.16243
    75.0    -45.0     0.20720
    90.0    -45.0    -0.42237
   105.0    -45.0    -0.46460
   120.0    -45.0    -0.38665
   135.0    -45.0    -0.55232
   150.0    -45.0    -0.67078
   165.0    -45.0    -0.67830
   180.0    -45.0    -0.67275
  -180.0    -30.0    -2.46944
  -165.0    -30.0    -2.32595
  -150.0    -30.0    -1.71439
  -135.0    -30.0    -2.48703
  -120.0    -30.0    -2.56054
  -105.0    -30.0    -2.46215
   -90.0    -30.0    -2.37111
   -75.0    -30.0    -2.19037
   -60.0    -30.0    -1.62432
   -45.0    -30.0    -0.72370
   -30.0    -30.0     0.35895
   -15.0    -30.0     1.35947
     0.0    -30.0     2.12358
    15.0    -30.0     2.36496
    30.0    -30.0     1.96636
    45.0    -30.0     1.05275
    60.0    -30.0    -0.26183
    75.0    -30.0    -1.16368
    90.0    -30.0    -1.65442
   105.0    -30.0    -1.64196
   120.0    -30.0    -1.86484
   135.0    -30.0    -2.09366
   150.0    -30.0    -2.28268
   165.0    -30.0    -2.41932
   180.0    -30.0    -2.46944
  -180.0    -15.0    -3.82546
  -165.0    -15.0    -3.22967
  -150.0    -15.0    -3.93518
  -135.0    -15.0    -3.85949
  -120.0    -15.0    -3.58321
  -105.0    -15.0    -3.28549
   -90.0    -15.0    -3.01617
   -75.0    -15.0    -2.60005
   -60.0    -15.0    -1.92147
   -45.0    -15.0    -1.14234
   -30.0    -15.0    -0.00873
   -15.0    -15.0     1.14445
     0.0    -15.0     1.77335
    15.0    -15.0     1.79047
    30.0    -15.0     1.09507
    45.0    -15.0    -0.16297
    60.0    -15.0    -1.43516
    75.0    -15.0    -2.26699
    90.0    -15.0    -2.45933
   105.0    -15.0    -2.70542
   120.0    -15.0    -3.03929
   135.0    -15.0    -3.35545
   150.0    -15.0    -3.62364
   165.0    -15.0    -3.79758
   180.0    -15.0    -3.82546
  -180.0      0.0    -3.82990
  -165.0      0.0    -4.37645
  -150.0      0.0    -4.29456
  -135.0      0.0    -4.01846
  -120.0      0.0    -3.66843
  -105.0      0.0    -3.31240
   -90.0      0.0    -2.96646
   -75.0      0.0    -2.58028
   -60.0      0.0    -2.08554
   -45.0      0.0    -0.99050
   -30.0      0.0     0.42261
   -15.0      0.0     1.35374
     0.0      0.0     1.69885
    15.0      0.0     1.35374
    30.0      0.0     0.42261
    45.0      0.0    -1.00310
    60.0      0.0    -2.08554
    75.0      0.0    -2.58028
    90.0      0.0    -2.96646
   105.0      0.0    -3.31240
   120.0      0.0    -3.66843
   135.0      0.0    -4.01846
   150.0      0.0    -4.29456
   165.0      0.0    -4.37645
   180.0      0.0    -3.82990
  -180.0     15.0    -3.82546
  -165.0     15.0    -3.79758
  -150.0     15.0    -3.62364
  -135.0     15.0    -3.35545
  -120.0     15.0    -3.03929
  -105.0     15.0    -2.70542
   -90.0     15.0    -2.45933
   -75.0     15.0    -2.26699
   -60.0     15.0    -1.43516
   -45.0     15.0    -0.16297
   -30.0     15.0     1.09507
   -15.0     15.0     1.79047
     0.0     15.0     1.77335
    15.0     15.0     1.14445
    30.0     15.0    -0.00873
    45.0     15.0    -1.14234
    60.0     15.0    -1.92147
    75.0     15.0    -2.60005
    90.0     15.0    -3.01617
   105.0     15.0    -3.28549
   120.0     15.0    -3.58321
   135.0     15.0    -3.85949
   150.0     15.0    -3.93518
   165.0     15.0    -3.23037
   180.0     15.0    -3.82546
  -180.0     30.0    -2.46944
  -165.0     30.0    -2.41932
  -150.0     30.0    -2.28268
  -135.0     30.0    -2.09366
  -120.0     30.0    -1.86484
  -105.0     30.0    -1.64196
   -90.0     30.0    -1.65442
   -75.0     30.0    -1.16368
   -60.0     30.0    -0.26183
   -45.0     30.0     1.05275
   -30.0     30.0     1.96636
   -15.0     30.0     2.36496
     0.0     30.0     2.12358
    15.0     30.0     1.35947
    30.0     30.0     0.35055
    45.0     30.0    -0.72370
    60.0     30.0    -1.62432
    75.0     30.0    -2.19037
    90.0     30.0    -2.37111
   105.0     30.0    -2.46215
   120.0     30.0    -2.56054
   135.0     30.0    -2.48703
   150.0     30.0    -1.70729
   165.0     30.0    -2.32595
   180.0     30.0    -2.46944
  -180.0     45.0    -0.67275
  -165.0     45.0    -0.67830
  -150.0     45.0    -0.67078
  -135.0     45.0    -0.55232
  -120.0     45.0    -0.38665
  -105.0     45.0    -0.46460
   -90.0     45.0    -0.42237
   -75.0     45.0     0.20720
   -60.0     45.0     1.16243
   -45.0     45.0     2.19151
   -30.0     45.0     2.85045
   -15.0     45.0     3.13379
     0.0     45.0     2.78505
    15.0     45.0     2.06071
    30.0     45.0     0.77634
    45.0     45.0    -0.24576
    60.0     45.0    -0.87844
    75.0     45.0    -1.06430
    90.0     45.0    -0.99538
   105.0     45.0    -0.80922
   120.0     45.0    -0.51470
   135.0     45.0    -0.01106
   150.0     45.0    -0.42200
   165.0     45.0    -0.59212
   180.0     45.0    -0.67275
  -180.0     60.0     0.94133
  -165.0     60.0     0.78581
  -150.0     60.0     0.75367
  -135.0     60.0     0.79351
  -120.0     60.0     0.77935
  -105.0     60.0     0.57769
   -90.0     60.0     0.79250
   -75.0     60.0     1.36042
   -60.0     60.0     1.94715
   -45.0     60.0     2.89718
   -30.0     60.0     3.40120
   -15.0     60.0     3.78367
     0.0     60.0     3.54214
    15.0     60.0     2.19742
    30.0     60.0     1.24745
    45.0     60.0     0.74572
    60.0     60.0     0.56577
    75.0     60.0     0.57562
    90.0     60.0     0.79628
   105.0     60.0     1.25994
   120.0     60.0     0.94411
   135.0     60.0     0.96211
   150.0     60.0     1.06365
   165.0     60.0     1.07716
   180.0     60.0     0.94133
  -180.0     75.0     1.80621
  -165.0     75.0     1.64225
  -150.0     75.0     1.59747
  -135.0     75.0     1.53314
  -120.0     75.0     1.36656
  -105.0     75.0     1.09103
   -90.0     75.0     1.27852
   -75.0     75.0     1.66472
   -60.0     75.0     2.31976
   -45.0     75.0     2.86443
   -30.0     75.0     3.57523
   -15.0     75.0     4.06613
     0.0     75.0     3.24329
    15.0     75.0     2.40295
    30.0     75.0     2.13049
    45.0     75.0     2.21268
    60.0     75.0     2.17320
    75.0     75.0     2.16375
    90.0     75.0     1.43311
   105.0     75.0     1.22509
   120.0     75.0     1.29208
   135.0     75.0     1.68691
   150.0     75.0     2.03556
   165.0     75.0     2.08080
   180.0     75.0     1.80621
  -180.0     90.0     1.90401
  -165.0     90.0     1.82118
  -150.0     90.0     1.81755
  -135.0     90.0     1.62671
  -120.0     90.0     1.41199
  -105.0     90.0     1.17449
   -90.0     90.0     1.13012
   -75.0     90.0     1.33310
   -60.0     90.0     1.57482
   -45.0     90.0     2.15793
   -30.0     90.0     2.79428
   -15.0     90.0     3.09474
     0.0     90.0     2.65047
    15.0     90.0     2.62493
    30.0     90.0     3.09673
    45.0     90.0     3.45522
    60.0     90.0     2.45075
    75.0     90.0     1.23397
    90.0     90.0     0.90562
   105.0     90.0     1.02391
   120.0     90.0     1.35280
   135.0     90.0     1.79055
   150.0     90.0     2.29924
   165.0     90.0     2.03939
   180.0     90.0     1.90401
  -180.0    105.0     1.42827
  -165.0    105.0     1.53133
  -150.0    105.0     1.50886
  -135.0    105.0     1.51499
  -120.0    105.0     1.33189
  -105.0    105.0     1.02077
   -90.0    105.0     0.60470
   -75.0    105.0     0.46027
   -60.0    105.0     0.55065
   -45.0    105.0     0.92486
   -30.0    105.0     1.43567
   -15.0    105.0     1.65224
     0.0    105.0     1.95317
    15.0    105.0     2.65211
    30.0    105.0     3.58847
    45.0    105.0     2.98189
    60.0    105.0     1.22814
    75.0    105.0     0.20821
    90.0    105.0     0.20084
   105.0    105.0     0.56475
   120.0    105.0     1.03764
   135.0    105.0     1.64917
   150.0    105.0     1.72204
   165.0    105.0     1.50406
   180.0    105.0     1.42827
  -180.0    120.0     0.76282
  -165.0    120.0     1.05012
  -150.0    120.0     1.15910
  -135.0    120.0     1.16949
  -120.0    120.0     0.97289
  -105.0    120.0     0.54550
   -90.0    120.0     0.18803
   -75.0    120.0    -0.35755
   -60.0    120.0    -0.64487
   -45.0    120.0    -0.49787
   -30.0    120.0    -0.07964
   -15.0    120.0     0.51132
     0.0    120.0     1.40660
    15.0    120.0     2.47433
    30.0    120.0     3.49117
    45.0    120.0     1.42775
    60.0    120.0    -0.44624
    75.0    120.0    -0.87022
    90.0    120.0    -0.55868
   105.0    120.0    -0.17578
   120.0    120.0     0.46767
   135.0    120.0     0.80302
   150.0    120.0     0.73536
   165.0    120.0     0.65049
   180.0    120.0     0.76282
  -180.0    135.0     0.22137
  -165.0    135.0     0.59900
  -150.0    135.0     0.82176
  -135.0    135.0     0.78961
  -120.0    135.0     0.35059
  -105.0    135.0    -0.14353
   -90.0    135.0    -0.54882
   -75.0    135.0    -1.11846
   -60.0    135.0    -1.54005
   -45.0    135.0    -1.57764
   -30.0    135.0    -1.08446
   -15.0    135.0    -0.13409
     0.0    135.0     1.01469
    15.0    135.0     2.08125
    30.0    135.0     2.15102
    45.0    135.0    -0.87317
    60.0    135.0    -1.99291
    75.0    135.0    -1.97985
    90.0    135.0    -1.48283
   105.0    135.0    -0.91494
   120.0    135.0    -0.45372
   135.0    135.0    -0.25120
   150.0    135.0    -0.25069
   165.0    135.0    -0.11507
   180.0    135.0     0.22137
  -180.0    150.0    -0.05487
  -165.0    150.0     0.30007
  -150.0    150.0     0.37394
  -135.0    150.0     0.15792
  -120.0    150.0    -0.27502
  -105.0    150.0    -0.79693
   -90.0    150.0    -1.32072
   -75.0    150.0    -1.85418
   -60.0    150.0    -2.27657
   -45.0    150.0    -2.28172
   -30.0    150.0    -1.60792
   -15.0    150.0    -0.47503
     0.0    150.0     0.68197
    15.0    150.0     1.60921
    30.0    150.0    -0.65594
    45.0    150.0    -2.36553
    60.0    150.0    -2.95919
    75.0    150.0    -2.73078
    90.0    150.0    -2.17397
   105.0    150.0    -1.65041
   120.0    150.0    -1.25474
   135.0    150.0    -1.02443
   150.0    150.0    -0.83418
   165.0    150.0    -0.49639
   180.0    150.0    -0.05487
  -180.0    165.0    -0.03043
  -165.0    165.0     0.10146
  -150.0    165.0    -0.04055
  -135.0    165.0    -0.44166
  -120.0    165.0    -0.94989
  -105.0    165.0    -1.47132
   -90.0    165.0    -1.96898
   -75.0    165.0    -2.45910
   -60.0    165.0    -2.82977
   -45.0    165.0    -2.72832
   -30.0    165.0    -1.85441
   -15.0    165.0    -0.59328
     0.0    165.0     0.47583
    15.0    165.0     0.28654
    30.0    165.0    -1.66034
    45.0    165.0    -2.85897
    60.0    165.0    -3.27921
    75.0    165.0    -2.96238
    90.0    165.0    -2.44752
   105.0    165.0    -1.99117
   120.0    165.0    -1.60564
   135.0    165.0    -1.22723
   150.0    165.0    -0.84288
   165.0    165.0    -0.40282
   180.0    165.0    -0.03043
  -180.0    180.0     0.00000
  -165.0    180.0    -0.15918
  -150.0    180.0    -0.46924
  -135.0    180.0    -0.94887
  -120.0    180.0    -1.41919
  -105.0    180.0    -1.89608
   -90.0    180.0    -2.35024
   -75.0    180.0    -2.81648
   -60.0    180.0    -3.17758
   -45.0    180.0    -2.91092
   -30.0    180.0    -1.84916
   -15.0    180.0    -0.61868
     0.0    180.0     1.44957
    15.0    180.0    -0.61868
    30.0    180.0    -1.84916
    45.0    180.0    -2.91092
    60.0    180.0    -3.17758
    75.0    180.0    -2.81793
    90.0    180.0    -2.34954
   105.0    180.0    -1.91578
   120.0    180.0    -1.41919
   135.0    180.0    -0.94887
   150.0    180.0    -0.46924
   165.0    180.0    -0.15918
   180.0    180.0     0.00000

tortors       3    1    7    3    1        25   25
  -180.0   -180.0     0.98936
  -165.0   -180.0     0.76408
  -150.0   -180.0     0.21674
  -135.0   -180.0    -0.18200
  -120.0   -180.0    -0.37729
  -105.0   -180.0    -0.47834
   -90.0   -180.0    -0.59267
   -75.0   -180.0    -0.93985
   -60.0   -180.0    -1.55558
   -45.0   -180.0    -2.01849
   -30.0   -180.0    -1.94076
   -15.0   -180.0    -1.46400
     0.0   -180.0     0.18253
    15.0   -180.0    -0.80364
    30.0   -180.0    -1.32974
    45.0   -180.0    -1.31658
    60.0   -180.0    -0.50140
    75.0   -180.0     0.20431
    90.0   -180.0     0.39356
   105.0   -180.0     0.20356
   120.0   -180.0    -0.16993
   135.0   -180.0    -0.22733
   150.0   -180.0     0.13703
   165.0   -180.0     0.66356
   180.0   -180.0     0.98936
  -180.0   -165.0     0.96101
  -165.0   -165.0     0.37535
  -150.0   -165.0    -0.35733
  -135.0   -165.0    -0.69994
  -120.0   -165.0    -0.67298
  -105.0   -165.0    -0.58294
   -90.0   -165.0    -0.66465
   -75.0   -165.0    -1.02945
   -60.0   -165.0    -1.72427
   -45.0   -165.0    -2.19357
   -30.0   -165.0    -2.26378
   -15.0   -165.0    -1.73850
     0.0   -165.0    -0.80969
    15.0   -165.0    -1.16164
    30.0   -165.0    -1.62772
    45.0   -165.0    -1.51932
    60.0   -165.0    -0.62569
    75.0   -165.0     0.13130
    90.0   -165.0     0.41019
   105.0   -165.0     0.32974
   120.0   -165.0     0.19191
   135.0   -165.0     0.32320
   150.0   -165.0     0.68257
   165.0   -165.0     1.03015
   180.0   -165.0     0.96101
  -180.0   -150.0     0.72651
  -165.0   -150.0    -0.04361
  -150.0   -150.0    -0.78147
  -135.0   -150.0    -0.90703
  -120.0   -150.0    -0.65095
  -105.0   -150.0    -0.48165
   -90.0   -150.0    -0.59657
   -75.0   -150.0    -1.14449
   -60.0   -150.0    -1.75396
   -45.0   -150.0    -2.27900
   -30.0   -150.0    -2.14873
   -15.0   -150.0    -0.26757
     0.0   -150.0    -0.77578
    15.0   -150.0    -1.30595
    30.0   -150.0    -1.79607
    45.0   -150.0    -1.55982
    60.0   -150.0    -0.57905
    75.0   -150.0     0.30576
    90.0   -150.0     0.70711
   105.0   -150.0     0.68903
   120.0   -150.0     0.53594
   135.0   -150.0     0.60304
   150.0   -150.0     0.88805
   165.0   -150.0     0.99720
   180.0   -150.0     0.72651
  -180.0   -135.0     0.15500
  -165.0   -135.0    -0.20013
  -150.0   -135.0    -0.79660
  -135.0   -135.0    -0.74958
  -120.0   -135.0    -0.43624
  -105.0   -135.0    -0.36715
   -90.0   -135.0    -0.58938
   -75.0   -135.0    -0.99698
   -60.0   -135.0    -1.59208
   -45.0   -135.0    -1.67026
   -30.0   -135.0     0.50672
   -15.0   -135.0    -0.03293
     0.0   -135.0    -0.84501
    15.0   -135.0    -1.52731
    30.0   -135.0    -1.89898
    45.0   -135.0    -1.54469
    60.0   -135.0    -0.53752
    75.0   -135.0     0.40003
    90.0   -135.0     0.88952
   105.0   -135.0     0.82150
   120.0   -135.0     0.58663
   135.0   -135.0     0.56781
   150.0   -135.0     0.74002
   165.0   -135.0     0.84486
   180.0   -135.0     0.15500
  -180.0   -120.0     0.34021
  -165.0   -120.0    -0.20306
  -150.0   -120.0    -0.62787
  -135.0   -120.0    -0.55418
  -120.0   -120.0    -0.38986
  -105.0   -120.0    -0.44533
   -90.0   -120.0    -0.60179
   -75.0   -120.0    -0.93351
   -60.0   -120.0    -1.09198
   -45.0   -120.0    -0.18408
   -30.0   -120.0     1.24545
   -15.0   -120.0    -0.24279
     0.0   -120.0    -1.24581
    15.0   -120.0    -1.76363
    30.0   -120.0    -1.80810
    45.0   -120.0    -1.40319
    60.0   -120.0    -0.63233
    75.0   -120.0     0.15411
    90.0   -120.0     0.58640
   105.0   -120.0     0.51937
   120.0   -120.0     0.25822
   135.0   -120.0     0.13668
   150.0   -120.0     0.23659
   165.0   -120.0     0.46899
   180.0   -120.0     0.34021
  -180.0   -105.0    -0.15437
  -165.0   -105.0    -0.14060
  -150.0   -105.0    -0.54321
  -135.0   -105.0    -0.58112
  -120.0   -105.0    -0.64967
  -105.0   -105.0    -0.71916
   -90.0   -105.0    -0.78801
   -75.0   -105.0    -0.76163
   -60.0   -105.0    -0.33401
   -45.0   -105.0     0.91720
   -30.0   -105.0     0.65423
   -15.0   -105.0    -0.84456
     0.0   -105.0    -1.63476
    15.0   -105.0    -1.65992
    30.0   -105.0    -1.33178
    45.0   -105.0    -1.08999
    60.0   -105.0    -0.74243
    75.0   -105.0    -0.33157
    90.0   -105.0    -0.20618
   105.0   -105.0    -0.07103
   120.0   -105.0    -0.25941
   135.0   -105.0    -0.37634
   150.0   -105.0    -0.12892
   165.0   -105.0     0.19386
   180.0   -105.0    -0.15437
  -180.0    -90.0     0.44630
  -165.0    -90.0     0.02406
  -150.0    -90.0    -0.42821
  -135.0    -90.0    -0.76736
  -120.0    -90.0    -0.93537
  -105.0    -90.0    -0.86621
   -90.0    -90.0    -0.66178
   -75.0    -90.0    -0.23513
   -60.0    -90.0     0.41508
   -45.0    -90.0     0.97897
   -30.0    -90.0    -0.30358
   -15.0    -90.0    -1.42025
     0.0    -90.0    -1.62146
    15.0    -90.0    -0.98816
    30.0    -90.0    -0.58148
    45.0    -90.0    -0.49791
    60.0    -90.0    -0.32045
    75.0    -90.0    -0.39639
    90.0    -90.0    -0.94422
   105.0    -90.0    -0.74539
   120.0    -90.0    -0.60241
   135.0    -90.0    -0.56295
   150.0    -90.0    -0.15877
   165.0    -90.0     0.33609
   180.0    -90.0     0.44630
  -180.0    -75.0     0.69562
  -165.0    -75.0     0.16403
  -150.0    -75.0    -0.43627
  -135.0    -75.0    -0.79169
  -120.0    -75.0    -0.80743
  -105.0    -75.0    -0.48767
   -90.0    -75.0     0.12397
   -75.0    -75.0     0.80972
   -60.0    -75.0     0.52616
   -45.0    -75.0    -0.13884
   -30.0    -75.0    -1.08459
   -15.0    -75.0    -1.55600
     0.0    -75.0    -1.12531
    15.0    -75.0    -0.19831
    30.0    -75.0    -0.00344
    45.0    -75.0     0.01061
    60.0    -75.0     0.11066
    75.0    -75.0    -0.12406
    90.0    -75.0    -0.81980
   105.0    -75.0    -1.04369
   120.0    -75.0    -0.62525
   135.0    -75.0    -0.37223
   150.0    -75.0     0.09012
   165.0    -75.0     0.58855
   180.0    -75.0     0.69562
  -180.0    -60.0     0.70531
  -165.0    -60.0     0.15456
  -150.0    -60.0    -0.40882
  -135.0    -60.0    -0.57653
  -120.0    -60.0    -0.20146
  -105.0    -60.0     0.21285
   -90.0    -60.0     0.15007
   -75.0    -60.0     0.06572
   -60.0    -60.0    -0.22861
   -45.0    -60.0    -0.75313
   -30.0    -60.0    -1.17725
   -15.0    -60.0    -1.07040
     0.0    -60.0    -0.29306
    15.0    -60.0     0.11777
    30.0    -60.0     0.42905
    45.0    -60.0     0.53679
    60.0    -60.0     0.52038
    75.0    -60.0     0.27617
    90.0    -60.0    -0.36078
   105.0    -60.0    -0.66569
   120.0    -60.0    -0.35068
   135.0    -60.0    -0.13164
   150.0    -60.0     0.27666
   165.0    -60.0     0.70865
   180.0    -60.0     0.70531
  -180.0    -45.0     0.42237
  -165.0    -45.0    -0.14148
  -150.0    -45.0    -0.50856
  -135.0    -45.0    -0.14423
  -120.0    -45.0    -0.53339
  -105.0    -45.0    -0.51400
   -90.0    -45.0    -0.33290
   -75.0    -45.0    -0.24488
   -60.0    -45.0    -0.32054
   -45.0    -45.0    -0.40379
   -30.0    -45.0    -0.41006
   -15.0    -45.0    -0.23372
     0.0    -45.0     0.07185
    15.0    -45.0     0.70729
    30.0    -45.0     1.16881
    45.0    -45.0     1.23276
    60.0    -45.0     0.77518
    75.0    -45.0     0.51970
    90.0    -45.0    -0.12956
   105.0    -45.0    -0.24028
   120.0    -45.0    -0.08791
   135.0    -45.0     0.02315
   150.0    -45.0     0.32774
   165.0    -45.0     0.55330
   180.0    -45.0     0.42237
  -180.0    -30.0     0.12700
  -165.0    -30.0    -0.36697
  -150.0    -30.0    -0.33178
  -135.0    -30.0    -1.09856
  -120.0    -30.0    -1.01098
  -105.0    -30.0    -0.61780
   -90.0    -30.0    -0.18232
   -75.0    -30.0     0.14143
   -60.0    -30.0     0.40819
   -45.0    -30.0     0.50556
   -30.0    -30.0     0.34379
   -15.0    -30.0     0.31224
     0.0    -30.0     0.97008
    15.0    -30.0     1.70616
    30.0    -30.0     1.99942
    45.0    -30.0     1.79196
    60.0    -30.0     1.26978
    75.0    -30.0     0.65732
    90.0    -30.0     0.04223
   105.0    -30.0     0.22658
   120.0    -30.0     0.08209
   135.0    -30.0     0.05525
   150.0    -30.0     0.22382
   165.0    -30.0     0.33964
   180.0    -30.0     0.12700
  -180.0    -15.0    -0.06517
  -165.0    -15.0    -0.13598
  -150.0    -15.0    -1.30614
  -135.0    -15.0    -1.09555
  -120.0    -15.0    -0.64991
  -105.0    -15.0    -0.06482
   -90.0    -15.0     0.49509
   -75.0    -15.0     0.92103
   -60.0    -15.0     1.94755
   -45.0    -15.0     0.95164
   -30.0    -15.0     0.87870
   -15.0    -15.0     1.42479
     0.0    -15.0     2.06338
    15.0    -15.0     2.50243
    30.0    -15.0     2.59266
    45.0    -15.0     2.02131
    60.0    -15.0     1.26236
    75.0    -15.0     0.65759
    90.0    -15.0     0.60601
   105.0    -15.0     0.40777
   120.0    -15.0     0.08605
   135.0    -15.0    -0.02333
   150.0    -15.0     0.06947
   165.0    -15.0     0.13044
   180.0    -15.0    -0.06517
  -180.0      0.0    -1.44412
  -165.0      0.0    -1.37206
  -150.0      0.0    -0.97055
  -135.0      0.0    -0.54692
  -120.0      0.0    -0.04768
  -105.0      0.0     0.65462
   -90.0      0.0     1.09803
   -75.0      0.0     1.41180
   -60.0      0.0     1.23685
   -45.0      0.0     1.32368
   -30.0      0.0     1.83555
   -15.0      0.0     2.29146
     0.0      0.0     2.61632
    15.0      0.0     2.73204
    30.0      0.0     2.49607
    45.0      0.0     1.76205
    60.0      0.0     1.23208
    75.0      0.0     1.11843
    90.0      0.0     1.50389
   105.0      0.0     0.20088
   120.0      0.0    -0.22667
   135.0      0.0    -0.38306
   150.0      0.0    -0.27813
   165.0      0.0    -0.08165
   180.0      0.0    -1.44412
  -180.0     15.0    -1.54337
  -165.0     15.0    -0.94875
  -150.0     15.0    -0.44630
  -135.0     15.0    -0.06444
  -120.0     15.0     0.39675
  -105.0     15.0     0.90513
   -90.0     15.0     1.24019
   -75.0     15.0     1.18954
   -60.0     15.0     1.36753
   -45.0     15.0     1.82290
   -30.0     15.0     2.22229
   -15.0     15.0     2.44694
     0.0     15.0     2.44244
    15.0     15.0     2.26164
    30.0     15.0     1.85516
    45.0     15.0     1.56722
    60.0     15.0     1.43193
    75.0     15.0     0.71918
    90.0     15.0     0.14053
   105.0     15.0    -0.36429
   120.0     15.0    -0.76466
   135.0     15.0    -0.87217
   150.0     15.0    -0.57197
   165.0     15.0    -1.61569
   180.0     15.0    -1.54337
  -180.0     30.0    -1.09485
  -165.0     30.0    -0.56681
  -150.0     30.0    -0.13387
  -135.0     30.0     0.19412
  -120.0     30.0     0.57374
  -105.0     30.0     0.86366
   -90.0     30.0     0.80314
   -75.0     30.0     1.08125
   -60.0     30.0     1.39143
   -45.0     30.0     1.86048
   -30.0     30.0     2.01491
   -15.0     30.0     2.03904
     0.0     30.0     1.77856
    15.0     30.0     1.48754
    30.0     30.0     1.53762
    45.0     30.0     1.22766
    60.0     30.0     0.55347
    75.0     30.0    -0.06469
    90.0     30.0    -0.47099
   105.0     30.0    -0.82958
   120.0     30.0    -1.01883
   135.0     30.0    -0.75479
   150.0     30.0    -1.39221
   165.0     30.0    -1.55942
   180.0     30.0    -1.09485
  -180.0     45.0    -0.55882
  -165.0     45.0    -0.22825
  -150.0     45.0     0.01795
  -135.0     45.0     0.21896
  -120.0     45.0     0.49238
  -105.0     45.0     0.39403
   -90.0     45.0     0.48870
   -75.0     45.0     0.90318
   -60.0     45.0     1.06730
   -45.0     45.0     1.40576
   -30.0     45.0     1.50400
   -15.0     45.0     1.39328
     0.0     45.0     1.13519
    15.0     45.0     1.11176
    30.0     45.0     0.55506
    45.0     45.0     0.04408
    60.0     45.0    -0.25930
    75.0     45.0    -0.42888
    90.0     45.0    -0.51963
   105.0     45.0    -0.55634
   120.0     45.0    -0.25212
   135.0     45.0    -0.62098
   150.0     45.0    -1.22694
   165.0     45.0    -1.05054
   180.0     45.0    -0.55882
  -180.0     60.0    -0.18285
  -165.0     60.0    -0.08650
  -150.0     60.0     0.00476
  -135.0     60.0     0.11545
  -120.0     60.0     0.16266
  -105.0     60.0     0.01161
   -90.0     60.0     0.39632
   -75.0     60.0     0.75519
   -60.0     60.0     0.96557
   -45.0     60.0     0.97640
   -30.0     60.0     0.97745
   -15.0     60.0     0.97978
     0.0     60.0     0.79555
    15.0     60.0    -0.15675
    30.0     60.0    -0.51647
    45.0     60.0    -0.39418
    60.0     60.0    -0.15303
    75.0     60.0    -0.00800
    90.0     60.0     0.09982
   105.0     60.0     0.37002
   120.0     60.0     0.12378
   135.0     60.0    -0.63827
   150.0     60.0    -0.59589
   165.0     60.0    -0.38041
   180.0     60.0    -0.18285
  -180.0     75.0    -0.06600
  -165.0     75.0    -0.07528
  -150.0     75.0    -0.04119
  -135.0     75.0    -0.07933
  -120.0     75.0    -0.19424
  -105.0     75.0    -0.27213
   -90.0     75.0     0.00000
   -75.0     75.0     0.40627
   -60.0     75.0     0.67141
   -45.0     75.0     0.48954
   -30.0     75.0     0.49392
   -15.0     75.0     0.53926
     0.0     75.0    -0.43613
    15.0     75.0    -0.91296
    30.0     75.0    -0.57046
    45.0     75.0     0.20602
    60.0     75.0     0.66426
    75.0     75.0     0.78486
    90.0     75.0     0.83638
   105.0     75.0     0.47569
   120.0     75.0    -0.24156
   135.0     75.0    -0.36935
   150.0     75.0    -0.03276
   165.0     75.0    -0.00079
   180.0     75.0    -0.06600
  -180.0     90.0    -0.19813
  -165.0     90.0    -0.18275
  -150.0     90.0    -0.13564
  -135.0     90.0    -0.16443
  -120.0     90.0    -0.25121
  -105.0     90.0    -0.36588
   -90.0     90.0    -0.30532
   -75.0     90.0    -0.05335
   -60.0     90.0    -0.11065
   -45.0     90.0    -0.24703
   -30.0     90.0    -0.35383
   -15.0     90.0    -0.66704
     0.0     90.0    -1.22785
    15.0     90.0    -0.99837
    30.0     90.0     0.07165
    45.0     90.0     1.17090
    60.0     90.0     1.52568
    75.0     90.0     1.19212
    90.0     90.0     0.65821
   105.0     90.0     0.07691
   120.0     90.0    -0.25244
   135.0     90.0    -0.10611
   150.0     90.0     0.09358
   165.0     90.0     0.00731
   180.0     90.0    -0.19813
  -180.0    105.0    -0.34850
  -165.0    105.0    -0.15035
  -150.0    105.0    -0.40367
  -135.0    105.0    -0.01197
  -120.0    105.0    -0.06100
  -105.0    105.0    -0.15190
   -90.0    105.0    -0.31715
   -75.0    105.0    -0.62391
   -60.0    105.0    -0.90231
   -45.0    105.0    -1.37607
   -30.0    105.0    -1.62179
   -15.0    105.0    -1.73579
     0.0    105.0    -1.64875
    15.0    105.0    -0.75542
    30.0    105.0     0.71157
    45.0    105.0     1.26356
    60.0    105.0     0.75960
    75.0    105.0     0.59400
    90.0    105.0     0.30667
   105.0    105.0    -0.06284
   120.0    105.0    -0.20456
   135.0    105.0    -0.08836
   150.0    105.0    -0.16590
   165.0    105.0    -0.35505
   180.0    105.0    -0.34850
  -180.0    120.0    -0.34576
  -165.0    120.0     0.02576
  -150.0    120.0     0.27228
  -135.0    120.0     0.28454
  -120.0    120.0     0.18375
  -105.0    120.0     0.01398
   -90.0    120.0    -0.27455
   -75.0    120.0    -0.77580
   -60.0    120.0    -1.42554
   -45.0    120.0    -1.99064
   -30.0    120.0    -2.37393
   -15.0    120.0    -2.20009
     0.0    120.0    -1.60683
    15.0    120.0    -0.44372
    30.0    120.0     1.09513
    45.0    120.0     0.35522
    60.0    120.0    -0.04151
    75.0    120.0     0.17766
    90.0    120.0     0.14305
   105.0    120.0    -0.13472
   120.0    120.0    -0.31725
   135.0    120.0    -0.45800
   150.0    120.0    -0.64821
   165.0    120.0    -0.63355
   180.0    120.0    -0.34576
  -180.0    135.0    -0.08457
  -165.0    135.0     0.36013
  -150.0    135.0     0.54446
  -135.0    135.0     0.48098
  -120.0    135.0     0.27776
  -105.0    135.0     0.02335
   -90.0    135.0    -0.28766
   -75.0    135.0    -0.80414
   -60.0    135.0    -1.51330
   -45.0    135.0    -2.20028
   -30.0    135.0    -2.36835
   -15.0    135.0    -2.12483
     0.0    135.0    -1.37600
    15.0    135.0    -0.25291
    30.0    135.0     0.78641
    45.0    135.0    -0.96321
    60.0    135.0    -0.57499
    75.0    135.0    -0.00398
    90.0    135.0     0.08668
   105.0    135.0    -0.17475
   120.0    135.0    -0.55212
   135.0    135.0    -0.94225
   150.0    135.0    -1.01661
   165.0    135.0    -0.69656
   180.0    135.0    -0.08457
  -180.0    150.0     0.28510
  -165.0    150.0     0.66185
  -150.0    150.0     0.69665
  -135.0    150.0     0.48378
  -120.0    150.0     0.16399
  -105.0    150.0    -0.09637
   -90.0    150.0    -0.36878
   -75.0    150.0    -0.80945
   -60.0    150.0    -1.41793
   -45.0    150.0    -2.18914
   -30.0    150.0    -2.20786
   -15.0    150.0    -1.82363
     0.0    150.0    -1.11629
    15.0    150.0    -0.04735
    30.0    150.0    -1.17126
    45.0    150.0    -1.34899
    60.0    150.0    -0.62467
    75.0    150.0     0.05642
    90.0    150.0     0.17332
   105.0    150.0    -0.14673
   120.0    150.0    -0.69800
   135.0    150.0    -1.11306
   150.0    150.0    -1.02621
   165.0    150.0    -0.41495
   180.0    150.0     0.28510
  -180.0    165.0     0.76902
  -165.0    165.0     0.89311
  -150.0    165.0     0.59358
  -135.0    165.0     0.25887
  -120.0    165.0    -0.03955
  -105.0    165.0    -0.24006
   -90.0    165.0    -0.46456
   -75.0    165.0    -0.83170
   -60.0    165.0    -1.40143
   -45.0    165.0    -1.95471
   -30.0    165.0    -2.00388
   -15.0    165.0    -1.56184
     0.0    165.0    -0.83182
    15.0    165.0    -0.45132
    30.0    165.0    -1.23096
    45.0    165.0    -1.22650
    60.0    165.0    -0.44761
    75.0    165.0     0.25891
    90.0    165.0     0.39936
   105.0    165.0     0.07650
   120.0    165.0    -0.49787
   135.0    165.0    -0.79017
   150.0    165.0    -0.50914
   165.0    165.0     0.18602
   180.0    165.0     0.76902
  -180.0    180.0     0.98936
  -165.0    180.0     0.76408
  -150.0    180.0     0.21674
  -135.0    180.0    -0.18200
  -120.0    180.0    -0.37729
  -105.0    180.0    -0.47834
   -90.0    180.0    -0.59267
   -75.0    180.0    -0.93985
   -60.0    180.0    -1.55558
   -45.0    180.0    -2.01849
   -30.0    180.0    -1.94076
   -15.0    180.0    -1.46400
     0.0    180.0     0.18253
    15.0    180.0    -0.80364
    30.0    180.0    -1.32974
    45.0    180.0    -1.31658
    60.0    180.0    -0.50140
    75.0    180.0     0.20431
    90.0    180.0     0.39356
   105.0    180.0     0.20356
   120.0    180.0    -0.16993
   135.0    180.0    -0.22733
   150.0    180.0     0.13703
   165.0    180.0     0.66356
   180.0    180.0     0.98936

tortors       3    1    7    3   15        25   25
  -180.0   -180.0     0.98936
  -165.0   -180.0     0.76408
  -150.0   -180.0     0.21674
  -135.0   -180.0    -0.18200
  -120.0   -180.0    -0.37729
  -105.0   -180.0    -0.47834
   -90.0   -180.0    -0.59267
   -75.0   -180.0    -0.93985
   -60.0   -180.0    -1.55558
   -45.0   -180.0    -2.01849
   -30.0   -180.0    -1.94076
   -15.0   -180.0    -1.46400
     0.0   -180.0     0.18253
    15.0   -180.0    -0.80364
    30.0   -180.0    -1.32974
    45.0   -180.0    -1.31658
    60.0   -180.0    -0.50140
    75.0   -180.0     0.20431
    90.0   -180.0     0.39356
   105.0   -180.0     0.20356
   120.0   -180.0    -0.16993
   135.0   -180.0    -0.22733
   150.0   -180.0     0.13703
   165.0   -180.0     0.66356
   180.0   -180.0     0.98936
  -180.0   -165.0     0.96101
  -165.0   -165.0     0.37535
  -150.0   -165.0    -0.35733
  -135.0   -165.0    -0.69994
  -120.0   -165.0    -0.67298
  -105.0   -165.0    -0.58294
   -90.0   -165.0    -0.66465
   -75.0   -165.0    -1.02945
   -60.0   -165.0    -1.72427
   -45.0   -165.0    -2.19357
   -30.0   -165.0    -2.26378
   -15.0   -165.0    -1.73850
     0.0   -165.0    -0.80969
    15.0   -165.0    -1.16164
    30.0   -165.0    -1.62772
    45.0   -165.0    -1.51932
    60.0   -165.0    -0.62569
    75.0   -165.0     0.13130
    90.0   -165.0     0.41019
   105.0   -165.0     0.32974
   120.0   -165.0     0.19191
   135.0   -165.0     0.32320
   150.0   -165.0     0.68257
   165.0   -165.0     1.03015
   180.0   -165.0     0.96101
  -180.0   -150.0     0.72651
  -165.0   -150.0    -0.04361
  -150.0   -150.0    -0.78147
  -135.0   -150.0    -0.90703
  -120.0   -150.0    -0.65095
  -105.0   -150.0    -0.48165
   -90.0   -150.0    -0.59657
   -75.0   -150.0    -1.14449
   -60.0   -150.0    -1.75396
   -45.0   -150.0    -2.27900
   -30.0   -150.0    -2.14873
   -15.0   -150.0    -0.26757
     0.0   -150.0    -0.77578
    15.0   -150.0    -1.30595
    30.0   -150.0    -1.79607
    45.0   -150.0    -1.55982
    60.0   -150.0    -0.57905
    75.0   -150.0     0.30576
    90.0   -150.0     0.70711
   105.0   -150.0     0.68903
   120.0   -150.0     0.53594
   135.0   -150.0     0.60304
   150.0   -150.0     0.88805
   165.0   -150.0     0.99720
   180.0   -150.0     0.72651
  -180.0   -135.0     0.15500
  -165.0   -135.0    -0.20013
  -150.0   -135.0    -0.79660
  -135.0   -135.0    -0.74958
  -120.0   -135.0    -0.43624
  -105.0   -135.0    -0.36715
   -90.0   -135.0    -0.58938
   -75.0   -135.0    -0.99698
   -60.0   -135.0    -1.59208
   -45.0   -135.0    -1.67026
   -30.0   -135.0     0.50672
   -15.0   -135.0    -0.03293
     0.0   -135.0    -0.84501
    15.0   -135.0    -1.52731
    30.0   -135.0    -1.89898
    45.0   -135.0    -1.54469
    60.0   -135.0    -0.53752
    75.0   -135.0     0.40003
    90.0   -135.0     0.88952
   105.0   -135.0     0.82150
   120.0   -135.0     0.58663
   135.0   -135.0     0.56781
   150.0   -135.0     0.74002
   165.0   -135.0     0.84486
   180.0   -135.0     0.15500
  -180.0   -120.0     0.34021
  -165.0   -120.0    -0.20306
  -150.0   -120.0    -0.62787
  -135.0   -120.0    -0.55418
  -120.0   -120.0    -0.38986
  -105.0   -120.0    -0.44533
   -90.0   -120.0    -0.60179
   -75.0   -120.0    -0.93351
   -60.0   -120.0    -1.09198
   -45.0   -120.0    -0.18408
   -30.0   -120.0     1.24545
   -15.0   -120.0    -0.24279
     0.0   -120.0    -1.24581
    15.0   -120.0    -1.76363
    30.0   -120.0    -1.80810
    45.0   -120.0    -1.40319
    60.0   -120.0    -0.63233
    75.0   -120.0     0.15411
    90.0   -120.0     0.58640
   105.0   -120.0     0.51937
   120.0   -120.0     0.25822
   135.0   -120.0     0.13668
   150.0   -120.0     0.23659
   165.0   -120.0     0.46899
   180.0   -120.0     0.34021
  -180.0   -105.0    -0.15437
  -165.0   -105.0    -0.14060
  -150.0   -105.0    -0.54321
  -135.0   -105.0    -0.58112
  -120.0   -105.0    -0.64967
  -105.0   -105.0    -0.71916
   -90.0   -105.0    -0.78801
   -75.0   -105.0    -0.76163
   -60.0   -105.0    -0.33401
   -45.0   -105.0     0.91720
   -30.0   -105.0     0.65423
   -15.0   -105.0    -0.84456
     0.0   -105.0    -1.63476
    15.0   -105.0    -1.65992
    30.0   -105.0    -1.33178
    45.0   -105.0    -1.08999
    60.0   -105.0    -0.74243
    75.0   -105.0    -0.33157
    90.0   -105.0    -0.20618
   105.0   -105.0    -0.07103
   120.0   -105.0    -0.25941
   135.0   -105.0    -0.37634
   150.0   -105.0    -0.12892
   165.0   -105.0     0.19386
   180.0   -105.0    -0.15437
  -180.0    -90.0     0.44630
  -165.0    -90.0     0.02406
  -150.0    -90.0    -0.42821
  -135.0    -90.0    -0.76736
  -120.0    -90.0    -0.93537
  -105.0    -90.0    -0.86621
   -90.0    -90.0    -0.66178
   -75.0    -90.0    -0.23513
   -60.0    -90.0     0.41508
   -45.0    -90.0     0.97897
   -30.0    -90.0    -0.30358
   -15.0    -90.0    -1.42025
     0.0    -90.0    -1.62146
    15.0    -90.0    -0.98816
    30.0    -90.0    -0.58148
    45.0    -90.0    -0.49791
    60.0    -90.0    -0.32045
    75.0    -90.0    -0.39639
    90.0    -90.0    -0.94422
   105.0    -90.0    -0.74539
   120.0    -90.0    -0.60241
   135.0    -90.0    -0.56295
   150.0    -90.0    -0.15877
   165.0    -90.0     0.33609
   180.0    -90.0     0.44630
  -180.0    -75.0     0.69562
  -165.0    -75.0     0.16403
  -150.0    -75.0    -0.43627
  -135.0    -75.0    -0.79169
  -120.0    -75.0    -0.80743
  -105.0    -75.0    -0.48767
   -90.0    -75.0     0.12397
   -75.0    -75.0     0.80972
   -60.0    -75.0     0.52616
   -45.0    -75.0    -0.13884
   -30.0    -75.0    -1.08459
   -15.0    -75.0    -1.55600
     0.0    -75.0    -1.12531
    15.0    -75.0    -0.19831
    30.0    -75.0    -0.00344
    45.0    -75.0     0.01061
    60.0    -75.0     0.11066
    75.0    -75.0    -0.12406
    90.0    -75.0    -0.81980
   105.0    -75.0    -1.04369
   120.0    -75.0    -0.62525
   135.0    -75.0    -0.37223
   150.0    -75.0     0.09012
   165.0    -75.0     0.58855
   180.0    -75.0     0.69562
  -180.0    -60.0     0.70531
  -165.0    -60.0     0.15456
  -150.0    -60.0    -0.40882
  -135.0    -60.0    -0.57653
  -120.0    -60.0    -0.20146
  -105.0    -60.0     0.21285
   -90.0    -60.0     0.15007
   -75.0    -60.0     0.06572
   -60.0    -60.0    -0.22861
   -45.0    -60.0    -0.75313
   -30.0    -60.0    -1.17725
   -15.0    -60.0    -1.07040
     0.0    -60.0    -0.29306
    15.0    -60.0     0.11777
    30.0    -60.0     0.42905
    45.0    -60.0     0.53679
    60.0    -60.0     0.52038
    75.0    -60.0     0.27617
    90.0    -60.0    -0.36078
   105.0    -60.0    -0.66569
   120.0    -60.0    -0.35068
   135.0    -60.0    -0.13164
   150.0    -60.0     0.27666
   165.0    -60.0     0.70865
   180.0    -60.0     0.70531
  -180.0    -45.0     0.42237
  -165.0    -45.0    -0.14148
  -150.0    -45.0    -0.50856
  -135.0    -45.0    -0.14423
  -120.0    -45.0    -0.53339
  -105.0    -45.0    -0.51400
   -90.0    -45.0    -0.33290
   -75.0    -45.0    -0.24488
   -60.0    -45.0    -0.32054
   -45.0    -45.0    -0.40379
   -30.0    -45.0    -0.41006
   -15.0    -45.0    -0.23372
     0.0    -45.0     0.07185
    15.0    -45.0     0.70729
    30.0    -45.0     1.16881
    45.0    -45.0     1.23276
    60.0    -45.0     0.77518
    75.0    -45.0     0.51970
    90.0    -45.0    -0.12956
   105.0    -45.0    -0.24028
   120.0    -45.0    -0.08791
   135.0    -45.0     0.02315
   150.0    -45.0     0.32774
   165.0    -45.0     0.55330
   180.0    -45.0     0.42237
  -180.0    -30.0     0.12700
  -165.0    -30.0    -0.36697
  -150.0    -30.0    -0.33178
  -135.0    -30.0    -1.09856
  -120.0    -30.0    -1.01098
  -105.0    -30.0    -0.61780
   -90.0    -30.0    -0.18232
   -75.0    -30.0     0.14143
   -60.0    -30.0     0.40819
   -45.0    -30.0     0.50556
   -30.0    -30.0     0.34379
   -15.0    -30.0     0.31224
     0.0    -30.0     0.97008
    15.0    -30.0     1.70616
    30.0    -30.0     1.99942
    45.0    -30.0     1.79196
    60.0    -30.0     1.26978
    75.0    -30.0     0.65732
    90.0    -30.0     0.04223
   105.0    -30.0     0.22658
   120.0    -30.0     0.08209
   135.0    -30.0     0.05525
   150.0    -30.0     0.22382
   165.0    -30.0     0.33964
   180.0    -30.0     0.12700
  -180.0    -15.0    -0.06517
  -165.0    -15.0    -0.13598
  -150.0    -15.0    -1.30614
  -135.0    -15.0    -1.09555
  -120.0    -15.0    -0.64991
  -105.0    -15.0    -0.06482
   -90.0    -15.0     0.49509
   -75.0    -15.0     0.92103
   -60.0    -15.0     1.94755
   -45.0    -15.0     0.95164
   -30.0    -15.0     0.87870
   -15.0    -15.0     1.42479
     0.0    -15.0     2.06338
    15.0    -15.0     2.50243
    30.0    -15.0     2.59266
    45.0    -15.0     2.02131
    60.0    -15.0     1.26236
    75.0    -15.0     0.65759
    90.0    -15.0     0.60601
   105.0    -15.0     0.40777
   120.0    -15.0     0.08605
   135.0    -15.0    -0.02333
   150.0    -15.0     0.06947
   165.0    -15.0     0.13044
   180.0    -15.0    -0.06517
  -180.0      0.0    -1.44412
  -165.0      0.0    -1.37206
  -150.0      0.0    -0.97055
  -135.0      0.0    -0.54692
  -120.0      0.0    -0.04768
  -105.0      0.0     0.65462
   -90.0      0.0     1.09803
   -75.0      0.0     1.41180
   -60.0      0.0     1.23685
   -45.0      0.0     1.32368
   -30.0      0.0     1.83555
   -15.0      0.0     2.29146
     0.0      0.0     2.61632
    15.0      0.0     2.73204
    30.0      0.0     2.49607
    45.0      0.0     1.76205
    60.0      0.0     1.23208
    75.0      0.0     1.11843
    90.0      0.0     1.50389
   105.0      0.0     0.20088
   120.0      0.0    -0.22667
   135.0      0.0    -0.38306
   150.0      0.0    -0.27813
   165.0      0.0    -0.08165
   180.0      0.0    -1.44412
  -180.0     15.0    -1.54337
  -165.0     15.0    -0.94875
  -150.0     15.0    -0.44630
  -135.0     15.0    -0.06444
  -120.0     15.0     0.39675
  -105.0     15.0     0.90513
   -90.0     15.0     1.24019
   -75.0     15.0     1.18954
   -60.0     15.0     1.36753
   -45.0     15.0     1.82290
   -30.0     15.0     2.22229
   -15.0     15.0     2.44694
     0.0     15.0     2.44244
    15.0     15.0     2.26164
    30.0     15.0     1.85516
    45.0     15.0     1.56722
    60.0     15.0     1.43193
    75.0     15.0     0.71918
    90.0     15.0     0.14053
   105.0     15.0    -0.36429
   120.0     15.0    -0.76466
   135.0     15.0    -0.87217
   150.0     15.0    -0.57197
   165.0     15.0    -1.61569
   180.0     15.0    -1.54337
  -180.0     30.0    -1.09485
  -165.0     30.0    -0.56681
  -150.0     30.0    -0.13387
  -135.0     30.0     0.19412
  -120.0     30.0     0.57374
  -105.0     30.0     0.86366
   -90.0     30.0     0.80314
   -75.0     30.0     1.08125
   -60.0     30.0     1.39143
   -45.0     30.0     1.86048
   -30.0     30.0     2.01491
   -15.0     30.0     2.03904
     0.0     30.0     1.77856
    15.0     30.0     1.48754
    30.0     30.0     1.53762
    45.0     30.0     1.22766
    60.0     30.0     0.55347
    75.0     30.0    -0.06469
    90.0     30.0    -0.47099
   105.0     30.0    -0.82958
   120.0     30.0    -1.01883
   135.0     30.0    -0.75479
   150.0     30.0    -1.39221
   165.0     30.0    -1.55942
   180.0     30.0    -1.09485
  -180.0     45.0    -0.55882
  -165.0     45.0    -0.22825
  -150.0     45.0     0.01795
  -135.0     45.0     0.21896
  -120.0     45.0     0.49238
  -105.0     45.0     0.39403
   -90.0     45.0     0.48870
   -75.0     45.0     0.90318
   -60.0     45.0     1.06730
   -45.0     45.0     1.40576
   -30.0     45.0     1.50400
   -15.0     45.0     1.39328
     0.0     45.0     1.13519
    15.0     45.0     1.11176
    30.0     45.0     0.55506
    45.0     45.0     0.04408
    60.0     45.0    -0.25930
    75.0     45.0    -0.42888
    90.0     45.0    -0.51963
   105.0     45.0    -0.55634
   120.0     45.0    -0.25212
   135.0     45.0    -0.62098
   150.0     45.0    -1.22694
   165.0     45.0    -1.05054
   180.0     45.0    -0.55882
  -180.0     60.0    -0.18285
  -165.0     60.0    -0.08650
  -150.0     60.0     0.00476
  -135.0     60.0     0.11545
  -120.0     60.0     0.16266
  -105.0     60.0     0.01161
   -90.0     60.0     0.39632
   -75.0     60.0     0.75519
   -60.0     60.0     0.96557
   -45.0     60.0     0.97640
   -30.0     60.0     0.97745
   -15.0     60.0     0.97978
     0.0     60.0     0.79555
    15.0     60.0    -0.15675
    30.0     60.0    -0.51647
    45.0     60.0    -0.39418
    60.0     60.0    -0.15303
    75.0     60.0    -0.00800
    90.0     60.0     0.09982
   105.0     60.0     0.37002
   120.0     60.0     0.12378
   135.0     60.0    -0.63827
   150.0     60.0    -0.59589
   165.0     60.0    -0.38041
   180.0     60.0    -0.18285
  -180.0     75.0    -0.06600
  -165.0     75.0    -0.07528
  -150.0     75.0    -0.04119
  -135.0     75.0    -0.07933
  -120.0     75.0    -0.19424
  -105.0     75.0    -0.27213
   -90.0     75.0     0.00000
   -75.0     75.0     0.40627
   -60.0     75.0     0.67141
   -45.0     75.0     0.48954
   -30.0     75.0     0.49392
   -15.0     75.0     0.53926
     0.0     75.0    -0.43613
    15.0     75.0    -0.91296
    30.0     75.0    -0.57046
    45.0     75.0     0.20602
    60.0     75.0     0.66426
    75.0     75.0     0.78486
    90.0     75.0     0.83638
   105.0     75.0     0.47569
   120.0     75.0    -0.24156
   135.0     75.0    -0.36935
   150.0     75.0    -0.03276
   165.0     75.0    -0.00079
   180.0     75.0    -0.06600
  -180.0     90.0    -0.19813
  -165.0     90.0    -0.18275
  -150.0     90.0    -0.13564
  -135.0     90.0    -0.16443
  -120.0     90.0    -0.25121
  -105.0     90.0    -0.36588
   -90.0     90.0    -0.30532
   -75.0     90.0    -0.05335
   -60.0     90.0    -0.11065
   -45.0     90.0    -0.24703
   -30.0     90.0    -0.35383
   -15.0     90.0    -0.66704
     0.0     90.0    -1.22785
    15.0     90.0    -0.99837
    30.0     90.0     0.07165
    45.0     90.0     1.17090
    60.0     90.0     1.52568
    75.0     90.0     1.19212
    90.0     90.0     0.65821
   105.0     90.0     0.07691
   120.0     90.0    -0.25244
   135.0     90.0    -0.10611
   150.0     90.0     0.09358
   165.0     90.0     0.00731
   180.0     90.0    -0.19813
  -180.0    105.0    -0.34850
  -165.0    105.0    -0.15035
  -150.0    105.0    -0.40367
  -135.0    105.0    -0.01197
  -120.0    105.0    -0.06100
  -105.0    105.0    -0.15190
   -90.0    105.0    -0.31715
   -75.0    105.0    -0.62391
   -60.0    105.0    -0.90231
   -45.0    105.0    -1.37607
   -30.0    105.0    -1.62179
   -15.0    105.0    -1.73579
     0.0    105.0    -1.64875
    15.0    105.0    -0.75542
    30.0    105.0     0.71157
    45.0    105.0     1.26356
    60.0    105.0     0.75960
    75.0    105.0     0.59400
    90.0    105.0     0.30667
   105.0    105.0    -0.06284
   120.0    105.0    -0.20456
   135.0    105.0    -0.08836
   150.0    105.0    -0.16590
   165.0    105.0    -0.35505
   180.0    105.0    -0.34850
  -180.0    120.0    -0.34576
  -165.0    120.0     0.02576
  -150.0    120.0     0.27228
  -135.0    120.0     0.28454
  -120.0    120.0     0.18375
  -105.0    120.0     0.01398
   -90.0    120.0    -0.27455
   -75.0    120.0    -0.77580
   -60.0    120.0    -1.42554
   -45.0    120.0    -1.99064
   -30.0    120.0    -2.37393
   -15.0    120.0    -2.20009
     0.0    120.0    -1.60683
    15.0    120.0    -0.44372
    30.0    120.0     1.09513
    45.0    120.0     0.35522
    60.0    120.0    -0.04151
    75.0    120.0     0.17766
    90.0    120.0     0.14305
   105.0    120.0    -0.13472
   120.0    120.0    -0.31725
   135.0    120.0    -0.45800
   150.0    120.0    -0.64821
   165.0    120.0    -0.63355
   180.0    120.0    -0.34576
  -180.0    135.0    -0.08457
  -165.0    135.0     0.36013
  -150.0    135.0     0.54446
  -135.0    135.0     0.48098
  -120.0    135.0     0.27776
  -105.0    135.0     0.02335
   -90.0    135.0    -0.28766
   -75.0    135.0    -0.80414
   -60.0    135.0    -1.51330
   -45.0    135.0    -2.20028
   -30.0    135.0    -2.36835
   -15.0    135.0    -2.12483
     0.0    135.0    -1.37600
    15.0    135.0    -0.25291
    30.0    135.0     0.78641
    45.0    135.0    -0.96321
    60.0    135.0    -0.57499
    75.0    135.0    -0.00398
    90.0    135.0     0.08668
   105.0    135.0    -0.17475
   120.0    135.0    -0.55212
   135.0    135.0    -0.94225
   150.0    135.0    -1.01661
   165.0    135.0    -0.69656
   180.0    135.0    -0.08457
  -180.0    150.0     0.28510
  -165.0    150.0     0.66185
  -150.0    150.0     0.69665
  -135.0    150.0     0.48378
  -120.0    150.0     0.16399
  -105.0    150.0    -0.09637
   -90.0    150.0    -0.36878
   -75.0    150.0    -0.80945
   -60.0    150.0    -1.41793
   -45.0    150.0    -2.18914
   -30.0    150.0    -2.20786
   -15.0    150.0    -1.82363
     0.0    150.0    -1.11629
    15.0    150.0    -0.04735
    30.0    150.0    -1.17126
    45.0    150.0    -1.34899
    60.0    150.0    -0.62467
    75.0    150.0     0.05642
    90.0    150.0     0.17332
   105.0    150.0    -0.14673
   120.0    150.0    -0.69800
   135.0    150.0    -1.11306
   150.0    150.0    -1.02621
   165.0    150.0    -0.41495
   180.0    150.0     0.28510
  -180.0    165.0     0.76902
  -165.0    165.0     0.89311
  -150.0    165.0     0.59358
  -135.0    165.0     0.25887
  -120.0    165.0    -0.03955
  -105.0    165.0    -0.24006
   -90.0    165.0    -0.46456
   -75.0    165.0    -0.83170
   -60.0    165.0    -1.40143
   -45.0    165.0    -1.95471
   -30.0    165.0    -2.00388
   -15.0    165.0    -1.56184
     0.0    165.0    -0.83182
    15.0    165.0    -0.45132
    30.0    165.0    -1.23096
    45.0    165.0    -1.22650
    60.0    165.0    -0.44761
    75.0    165.0     0.25891
    90.0    165.0     0.39936
   105.0    165.0     0.07650
   120.0    165.0    -0.49787
   135.0    165.0    -0.79017
   150.0    165.0    -0.50914
   165.0    165.0     0.18602
   180.0    165.0     0.76902
  -180.0    180.0     0.98936
  -165.0    180.0     0.76408
  -150.0    180.0     0.21674
  -135.0    180.0    -0.18200
  -120.0    180.0    -0.37729
  -105.0    180.0    -0.47834
   -90.0    180.0    -0.59267
   -75.0    180.0    -0.93985
   -60.0    180.0    -1.55558
   -45.0    180.0    -2.01849
   -30.0    180.0    -1.94076
   -15.0    180.0    -1.46400
     0.0    180.0     0.18253
    15.0    180.0    -0.80364
    30.0    180.0    -1.32974
    45.0    180.0    -1.31658
    60.0    180.0    -0.50140
    75.0    180.0     0.20431
    90.0    180.0     0.39356
   105.0    180.0     0.20356
   120.0    180.0    -0.16993
   135.0    180.0    -0.22733
   150.0    180.0     0.13703
   165.0    180.0     0.66356
   180.0    180.0     0.98936

tortors      63   63   62   63   63        25   25
   -60.0    -60.0     0.00000
   -55.0    -60.0     0.00000
   -50.0    -60.0     0.00000
   -45.0    -60.0     0.00000
   -40.0    -60.0     0.00000
   -35.0    -60.0     0.00000
   -30.0    -60.0     0.00000
   -25.0    -60.0     0.00000
   -20.0    -60.0     0.00000
   -15.0    -60.0     0.00000
   -10.0    -60.0     0.00000
    -5.0    -60.0     0.00000
     0.0    -60.0     0.00000
     5.0    -60.0     0.00000
    10.0    -60.0     0.00000
    15.0    -60.0     0.00000
    20.0    -60.0     0.00000
    25.0    -60.0    -3.34859
    30.0    -60.0    -2.26068
    35.0    -60.0    -1.53407
    40.0    -60.0    -0.92165
    45.0    -60.0    -0.49220
    50.0    -60.0    -0.49945
    55.0    -60.0    -1.22214
    60.0    -60.0    -2.71591
   -60.0    -55.0     0.00000
   -55.0    -55.0     0.00000
   -50.0    -55.0     0.00000
   -45.0    -55.0     0.00000
   -40.0    -55.0     0.00000
   -35.0    -55.0     0.00000
   -30.0    -55.0     0.00000
   -25.0    -55.0     0.00000
   -20.0    -55.0     0.00000
   -15.0    -55.0     0.00000
   -10.0    -55.0     0.00000
    -5.0    -55.0     0.00000
     0.0    -55.0     0.00000
     5.0    -55.0     0.00000
    10.0    -55.0     0.00000
    15.0    -55.0    -4.30948
    20.0    -55.0    -2.57230
    25.0    -55.0    -1.54795
    30.0    -55.0    -0.77830
    35.0    -55.0    -0.10949
    40.0    -55.0     0.39671
    45.0    -55.0     0.53940
    50.0    -55.0    -0.01316
    55.0    -55.0    -1.35124
    60.0    -55.0    -2.97925
   -60.0    -50.0     0.00000
   -55.0    -50.0     0.00000
   -50.0    -50.0     0.00000
   -45.0    -50.0     0.00000
   -40.0    -50.0     0.00000
   -35.0    -50.0     0.00000
   -30.0    -50.0     0.00000
   -25.0    -50.0     0.00000
   -20.0    -50.0     0.00000
   -15.0    -50.0     0.00000
   -10.0    -50.0     0.00000
    -5.0    -50.0     0.00000
     0.0    -50.0     0.00000
     5.0    -50.0     0.00000
    10.0    -50.0    -3.79718
    15.0    -50.0    -1.97217
    20.0    -50.0    -0.90646
    25.0    -50.0    -0.17368
    30.0    -50.0     0.48245
    35.0    -50.0     1.04559
    40.0    -50.0     1.29297
    45.0    -50.0     0.88381
    50.0    -50.0    -0.27960
    55.0    -50.0    -1.71413
    60.0    -50.0    -3.29794
   -60.0    -45.0     0.00000
   -55.0    -45.0     0.00000
   -50.0    -45.0     0.00000
   -45.0    -45.0     0.00000
   -40.0    -45.0     0.00000
   -35.0    -45.0     0.00000
   -30.0    -45.0     0.00000
   -25.0    -45.0     0.00000
   -20.0    -45.0     0.00000
   -15.0    -45.0     0.00000
   -10.0    -45.0     0.00000
    -5.0    -45.0     0.00000
     0.0    -45.0     0.00000
     5.0    -45.0    -3.42407
    10.0    -45.0    -1.52802
    15.0    -45.0    -0.42681
    20.0    -45.0     0.26477
    25.0    -45.0     0.88153
    30.0    -45.0     1.45874
    35.0    -45.0     1.76987
    40.0    -45.0     1.48943
    45.0    -45.0     0.52323
    50.0    -45.0    -0.70927
    55.0    -45.0    -2.13253
    60.0    -45.0    -3.72232
   -60.0    -40.0     0.00000
   -55.0    -40.0     0.00000
   -50.0    -40.0     0.00000
   -45.0    -40.0     0.00000
   -40.0    -40.0     0.00000
   -35.0    -40.0     0.00000
   -30.0    -40.0     0.00000
   -25.0    -40.0     0.00000
   -20.0    -40.0     0.00000
   -15.0    -40.0     0.00000
   -10.0    -40.0     0.00000
    -5.0    -40.0     0.00000
     0.0    -40.0    -3.24603
     5.0    -40.0    -1.26715
    10.0    -40.0    -0.14889
    15.0    -40.0     0.51208
    20.0    -40.0     1.09333
    25.0    -40.0     1.64762
    30.0    -40.0     1.97750
    35.0    -40.0     1.82364
    40.0    -40.0     1.08565
    45.0    -40.0     0.05579
    50.0    -40.0    -1.20397
    55.0    -40.0    -2.66579
    60.0    -40.0    -4.29092
   -60.0    -35.0     0.00000
   -55.0    -35.0     0.00000
   -50.0    -35.0     0.00000
   -45.0    -35.0     0.00000
   -40.0    -35.0     0.00000
   -35.0    -35.0     0.00000
   -30.0    -35.0     0.00000
   -25.0    -35.0     0.00000
   -20.0    -35.0     0.00000
   -15.0    -35.0     0.00000
   -10.0    -35.0     0.00000
    -5.0    -35.0    -3.08944
     0.0    -35.0    -1.18260
     5.0    -35.0    -0.02491
    10.0    -35.0     0.61137
    15.0    -35.0     1.13349
    20.0    -35.0     1.61794
    25.0    -35.0     1.93538
    30.0    -35.0     1.91657
    35.0    -35.0     1.42337
    40.0    -35.0     0.58960
    45.0    -35.0    -0.50117
    50.0    -35.0    -1.82047
    55.0    -35.0    -3.32126
    60.0    -35.0    -4.90932
   -60.0    -30.0     0.00000
   -55.0    -30.0     0.00000
   -50.0    -30.0     0.00000
   -45.0    -30.0     0.00000
   -40.0    -30.0     0.00000
   -35.0    -30.0     0.00000
   -30.0    -30.0     0.00000
   -25.0    -30.0     0.00000
   -20.0    -30.0     0.00000
   -15.0    -30.0     0.00000
   -10.0    -30.0    -2.95295
    -5.0    -30.0    -1.27250
     0.0    -30.0    -0.10126
     5.0    -30.0     0.57183
    10.0    -30.0     1.01801
    15.0    -30.0     1.40532
    20.0    -30.0     1.69566
    25.0    -30.0     1.81393
    30.0    -30.0     1.55808
    35.0    -30.0     0.90930
    40.0    -30.0    -0.01572
    45.0    -30.0    -1.18916
    50.0    -30.0    -2.57344
    55.0    -30.0    -4.04453
    60.0    -30.0    -5.68632
   -60.0    -25.0     0.00000
   -55.0    -25.0     0.00000
   -50.0    -25.0     0.00000
   -45.0    -25.0     0.00000
   -40.0    -25.0     0.00000
   -35.0    -25.0     0.00000
   -30.0    -25.0     0.00000
   -25.0    -25.0     0.00000
   -20.0    -25.0     0.00000
   -15.0    -25.0    -3.24428
   -10.0    -25.0    -1.23106
    -5.0    -25.0    -0.09312
     0.0    -25.0     0.56793
     5.0    -25.0     0.93977
    10.0    -25.0     1.20683
    15.0    -25.0     1.40698
    20.0    -25.0     1.56183
    25.0    -25.0     1.51817
    30.0    -25.0     1.03831
    35.0    -25.0     0.27611
    40.0    -25.0    -0.75741
    45.0    -25.0    -2.04455
    50.0    -25.0    -3.41908
    55.0    -25.0    -4.97509
    60.0    -25.0    -6.85322
   -60.0    -20.0     0.00000
   -55.0    -20.0     0.00000
   -50.0    -20.0     0.00000
   -45.0    -20.0     0.00000
   -40.0    -20.0     0.00000
   -35.0    -20.0     0.00000
   -30.0    -20.0     0.00000
   -25.0    -20.0     0.00000
   -20.0    -20.0    -3.39739
   -15.0    -20.0    -1.38908
   -10.0    -20.0    -0.21578
    -5.0    -20.0     0.42795
     0.0    -20.0     0.77706
     5.0    -20.0     0.98671
    10.0    -20.0     1.12783
    15.0    -20.0     1.18291
    20.0    -20.0     0.97599
    25.0    -20.0     1.00362
    30.0    -20.0     0.39932
    35.0    -20.0    -0.50020
    40.0    -20.0    -1.77572
    45.0    -20.0    -3.10096
    50.0    -20.0    -4.53696
    55.0    -20.0    -6.29879
    60.0    -20.0     0.00000
   -60.0    -15.0     0.00000
   -55.0    -15.0     0.00000
   -50.0    -15.0     0.00000
   -45.0    -15.0     0.00000
   -40.0    -15.0     0.00000
   -35.0    -15.0     0.00000
   -30.0    -15.0     0.00000
   -25.0    -15.0    -3.72204
   -20.0    -15.0    -1.66846
   -15.0    -15.0    -0.52208
   -10.0    -15.0     0.14216
    -5.0    -15.0     0.49336
     0.0    -15.0     0.66840
     5.0    -15.0     0.78452
    10.0    -15.0     0.86470
    15.0    -15.0     0.69961
    20.0    -15.0     0.23499
    25.0    -15.0    -0.41158
    30.0    -15.0    -0.52970
    35.0    -15.0    -1.86320
    40.0    -15.0    -3.12136
    45.0    -15.0    -4.43654
    50.0    -15.0    -5.97830
    55.0    -15.0     0.00000
    60.0    -15.0     0.00000
   -60.0    -10.0     0.00000
   -55.0    -10.0     0.00000
   -50.0    -10.0     0.00000
   -45.0    -10.0     0.00000
   -40.0    -10.0     0.00000
   -35.0    -10.0     0.00000
   -30.0    -10.0    -4.15599
   -25.0    -10.0    -2.19827
   -20.0    -10.0    -0.95521
   -15.0    -10.0    -0.29886
   -10.0    -10.0     0.04835
    -5.0    -10.0     0.19772
     0.0    -10.0     0.32406
     5.0    -10.0     0.47801
    10.0    -10.0     0.40841
    15.0    -10.0    -0.01555
    20.0    -10.0    -0.63176
    25.0    -10.0    -1.41232
    30.0    -10.0    -2.36589
    35.0    -10.0    -3.31048
    40.0    -10.0    -4.51036
    45.0    -10.0    -5.93757
    50.0    -10.0     0.00000
    55.0    -10.0     0.00000
    60.0    -10.0     0.00000
   -60.0     -5.0     0.00000
   -55.0     -5.0     0.00000
   -50.0     -5.0     0.00000
   -45.0     -5.0     0.00000
   -40.0     -5.0     0.00000
   -35.0     -5.0    -4.68511
   -30.0     -5.0    -2.85637
   -25.0     -5.0    -1.57291
   -20.0     -5.0    -0.89665
   -15.0     -5.0    -0.56005
   -10.0     -5.0    -0.41701
    -5.0     -5.0    -0.26301
     0.0     -5.0    -0.00331
     5.0     -5.0     0.07696
    10.0     -5.0    -0.26667
    15.0     -5.0    -0.83182
    20.0     -5.0    -1.56030
    25.0     -5.0    -2.45388
    30.0     -5.0    -3.34910
    35.0     -5.0    -4.42998
    40.0     -5.0    -2.41122
    45.0     -5.0    -7.92471
    50.0     -5.0     0.00000
    55.0     -5.0     0.00000
    60.0     -5.0     0.00000
   -60.0      0.0     0.00000
   -55.0      0.0     0.00000
   -50.0      0.0     0.00000
   -45.0      0.0     0.00000
   -40.0      0.0    -5.26098
   -35.0      0.0    -3.48850
   -30.0      0.0    -2.32185
   -25.0      0.0    -1.62944
   -20.0      0.0    -1.27900
   -15.0      0.0    -1.12183
   -10.0      0.0    -0.93084
    -5.0      0.0    -0.56989
     0.0      0.0    -0.31089
     5.0      0.0    -0.53327
    10.0      0.0    -1.03036
    15.0      0.0    -1.69852
    20.0      0.0    -2.52324
    25.0      0.0    -3.36820
    30.0      0.0    -4.40522
    35.0      0.0    -2.35864
    40.0      0.0    -5.07138
    45.0      0.0     0.00000
    50.0      0.0     0.00000
    55.0      0.0     0.00000
    60.0      0.0     0.00000
   -60.0      5.0     0.00000
   -55.0      5.0     0.00000
   -50.0      5.0     0.00000
   -45.0      5.0     0.00000
   -40.0      5.0    -4.14344
   -35.0      5.0    -3.09499
   -30.0      5.0    -2.40013
   -25.0      5.0    -2.03320
   -20.0      5.0    -1.85135
   -15.0      5.0    -1.62104
   -10.0      5.0    -1.18282
    -5.0      5.0    -0.75884
     0.0      5.0    -0.82361
     5.0      5.0    -1.23036
    10.0      5.0    -1.82587
    15.0      5.0    -2.57116
    20.0      5.0    -3.35863
    25.0      5.0    -4.34873
    30.0      5.0    -2.27690
    35.0      5.0    -4.94540
    40.0      5.0     0.00000
    45.0      5.0     0.00000
    50.0      5.0     0.00000
    55.0      5.0     0.00000
    60.0      5.0     0.00000
   -60.0     10.0     0.00000
   -55.0     10.0     0.00000
   -50.0     10.0     0.00000
   -45.0     10.0    -4.88968
   -40.0     10.0    -3.77891
   -35.0     10.0    -3.10077
   -30.0     10.0    -2.72681
   -25.0     10.0    -2.53361
   -20.0     10.0    -2.28064
   -15.0     10.0    -1.79659
   -10.0     10.0    -1.25103
    -5.0     10.0    -1.14661
     0.0     10.0    -1.43321
     5.0     10.0    -1.93533
    10.0     10.0    -2.58448
    15.0     10.0    -3.30471
    20.0     10.0    -0.28036
    25.0     10.0    -5.48737
    30.0     10.0    -7.45892
    35.0     10.0     0.00000
    40.0     10.0     0.00000
    45.0     10.0     0.00000
    50.0     10.0     0.00000
    55.0     10.0     0.00000
    60.0     10.0     0.00000
   -60.0     15.0     0.00000
   -55.0     15.0     0.00000
   -50.0     15.0    -5.57433
   -45.0     15.0    -4.41509
   -40.0     15.0    -3.70103
   -35.0     15.0    -3.30510
   -30.0     15.0    -3.09660
   -25.0     15.0    -2.84923
   -20.0     15.0    -2.36398
   -15.0     15.0    -1.75415
   -10.0     15.0    -1.50903
    -5.0     15.0    -1.65094
     0.0     15.0    -2.02015
     5.0     15.0    -2.54540
    10.0     15.0    -3.18641
    15.0     15.0    -0.12952
    20.0     15.0    -1.92781
    25.0     15.0    -4.43234
    30.0     15.0     0.00000
    35.0     15.0     0.00000
    40.0     15.0     0.00000
    45.0     15.0     0.00000
    50.0     15.0     0.00000
    55.0     15.0     0.00000
    60.0     15.0     0.00000
   -60.0     20.0     0.00000
   -55.0     20.0    -6.25248
   -50.0     20.0    -5.04739
   -45.0     20.0    -4.27015
   -40.0     20.0    -3.79542
   -35.0     20.0    -3.52883
   -30.0     20.0    -3.26178
   -25.0     20.0    -2.81849
   -20.0     20.0    -2.22194
   -15.0     20.0    -1.89680
   -10.0     20.0    -1.90620
    -5.0     20.0    -2.10099
     0.0     20.0    -2.45540
     5.0     20.0    -2.98466
    10.0     20.0     0.11443
    15.0     20.0    -1.60577
    20.0     20.0    -3.99976
    25.0     20.0     0.00000
    30.0     20.0     0.00000
    35.0     20.0     0.00000
    40.0     20.0     0.00000
    45.0     20.0     0.00000
    50.0     20.0     0.00000
    55.0     20.0     0.00000
    60.0     20.0     0.00000
   -60.0     25.0     0.00000
   -55.0     25.0    -5.82910
   -50.0     25.0    -4.85579
   -45.0     25.0    -4.24949
   -40.0     25.0    -3.86515
   -35.0     25.0    -3.52521
   -30.0     25.0    -3.09604
   -25.0     25.0    -2.54420
   -20.0     25.0    -2.22885
   -15.0     25.0    -2.17858
   -10.0     25.0    -2.22411
    -5.0     25.0    -2.36938
     0.0     25.0    -2.73017
     5.0     25.0     0.45724
    10.0     25.0    -1.14103
    15.0     25.0    -3.40622
    20.0     25.0     0.00000
    25.0     25.0     0.00000
    30.0     25.0     0.00000
    35.0     25.0     0.00000
    40.0     25.0     0.00000
    45.0     25.0     0.00000
    50.0     25.0     0.00000
    55.0     25.0     0.00000
    60.0     25.0     0.00000
   -60.0     30.0    -6.74017
   -55.0     30.0    -5.56466
   -50.0     30.0    -4.73062
   -45.0     30.0    -4.15541
   -40.0     30.0    -3.67057
   -35.0     30.0    -3.16852
   -30.0     30.0    -2.58625
   -25.0     30.0    -2.28139
   -20.0     30.0    -2.27420
   -15.0     30.0    -2.31495
   -10.0     30.0    -2.34007
    -5.0     30.0    -2.52274
     0.0     30.0     0.83818
     5.0     30.0    -0.55413
    10.0     30.0     0.00000
    15.0     30.0     0.00000
    20.0     30.0     0.00000
    25.0     30.0     0.00000
    30.0     30.0     0.00000
    35.0     30.0     0.00000
    40.0     30.0     0.00000
    45.0     30.0     0.00000
    50.0     30.0     0.00000
    55.0     30.0     0.00000
    60.0     30.0     0.00000
   -60.0     35.0    -6.44220
   -55.0     35.0    -5.34031
   -50.0     35.0    -4.49506
   -45.0     35.0    -3.78373
   -40.0     35.0    -3.08459
   -35.0     35.0    -2.38223
   -30.0     35.0    -1.99841
   -25.0     35.0    -2.01850
   -20.0     35.0    -1.60248
   -15.0     35.0    -1.29357
   -10.0     35.0    -1.28090
    -5.0     35.0    -2.69945
     0.0     35.0     0.59195
     5.0     35.0     0.00000
    10.0     35.0     0.00000
    15.0     35.0     0.00000
    20.0     35.0     0.00000
    25.0     35.0     0.00000
    30.0     35.0     0.00000
    35.0     35.0     0.00000
    40.0     35.0     0.00000
    45.0     35.0     0.00000
    50.0     35.0     0.00000
    55.0     35.0     0.00000
    60.0     35.0     0.00000
   -60.0     40.0    -6.17635
   -55.0     40.0    -5.01129
   -50.0     40.0    -3.93950
   -45.0     40.0    -2.93043
   -40.0     40.0    -1.97787
   -35.0     40.0    -1.47061
   -30.0     40.0    -1.74907
   -25.0     40.0    -1.50302
   -20.0     40.0    -1.12724
   -15.0     40.0    -1.06712
   -10.0     40.0    -1.71500
    -5.0     40.0    -0.31646
     0.0     40.0     0.00000
     5.0     40.0     0.00000
    10.0     40.0     0.00000
    15.0     40.0     0.00000
    20.0     40.0     0.00000
    25.0     40.0     0.00000
    30.0     40.0     0.00000
    35.0     40.0     0.00000
    40.0     40.0     0.00000
    45.0     40.0     0.00000
    50.0     40.0     0.00000
    55.0     40.0     0.00000
    60.0     40.0     0.00000
   -60.0     45.0    -5.84154
   -55.0     45.0    -4.40900
   -50.0     45.0    -2.96416
   -45.0     45.0    -1.61891
   -40.0     45.0    -1.75863
   -35.0     45.0    -1.78070
   -30.0     45.0    -1.52630
   -25.0     45.0    -1.03180
   -20.0     45.0    -0.85066
   -15.0     45.0    -1.25823
   -10.0     45.0    -0.24415
    -5.0     45.0     0.00000
     0.0     45.0     0.00000
     5.0     45.0     0.00000
    10.0     45.0     0.00000
    15.0     45.0     0.00000
    20.0     45.0     0.00000
    25.0     45.0     0.00000
    30.0     45.0     0.00000
    35.0     45.0     0.00000
    40.0     45.0     0.00000
    45.0     45.0     0.00000
    50.0     45.0     0.00000
    55.0     45.0     0.00000
    60.0     45.0     0.00000
   -60.0     50.0    -5.34856
   -55.0     50.0    -3.63795
   -50.0     50.0    -3.30699
   -45.0     50.0    -2.40390
   -40.0     50.0    -2.19314
   -35.0     50.0    -1.78791
   -30.0     50.0    -1.12814
   -25.0     50.0    -0.71920
   -20.0     50.0    -0.87226
   -15.0     50.0    -0.86327
   -10.0     50.0     0.00000
    -5.0     50.0     0.00000
     0.0     50.0     0.00000
     5.0     50.0     0.00000
    10.0     50.0     0.00000
    15.0     50.0     0.00000
    20.0     50.0     0.00000
    25.0     50.0     0.00000
    30.0     50.0     0.00000
    35.0     50.0     0.00000
    40.0     50.0     0.00000
    45.0     50.0     0.00000
    50.0     50.0     0.00000
    55.0     50.0     0.00000
    60.0     50.0     0.00000
   -60.0     55.0     0.00000
   -55.0     55.0     0.00000
   -50.0     55.0    -3.25149
   -45.0     55.0    -2.90526
   -40.0     55.0    -2.30892
   -35.0     55.0    -1.49327
   -30.0     55.0    -0.76993
   -25.0     55.0     0.00000
   -20.0     55.0     0.00000
   -15.0     55.0     0.00000
   -10.0     55.0     0.00000
    -5.0     55.0     0.00000
     0.0     55.0     0.00000
     5.0     55.0     0.00000
    10.0     55.0     0.00000
    15.0     55.0     0.00000
    20.0     55.0     0.00000
    25.0     55.0     0.00000
    30.0     55.0     0.00000
    35.0     55.0     0.00000
    40.0     55.0     0.00000
    45.0     55.0     0.00000
    50.0     55.0     0.00000
    55.0     55.0     0.00000
    60.0     55.0     0.00000
   -60.0     60.0     0.00000
   -55.0     60.0     0.00000
   -50.0     60.0     0.00000
   -45.0     60.0     0.00000
   -40.0     60.0     0.00000
   -35.0     60.0     0.00000
   -30.0     60.0     0.00000
   -25.0     60.0     0.00000
   -20.0     60.0     0.00000
   -15.0     60.0     0.00000
   -10.0     60.0     0.00000
    -5.0     60.0     0.00000
     0.0     60.0     0.00000
     5.0     60.0     0.00000
    10.0     60.0     0.00000
    15.0     60.0     0.00000
    20.0     60.0     0.00000
    25.0     60.0     0.00000
    30.0     60.0     0.00000
    35.0     60.0     0.00000
    40.0     60.0     0.00000
    45.0     60.0     0.00000
    50.0     60.0     0.00000
    55.0     60.0     0.00000
    60.0     60.0     0.00000

tortors      69   69   62   69   69        29   29
   -70.0    -70.0     0.00000
   -65.0    -70.0     0.00000
   -60.0    -70.0     0.00000
   -55.0    -70.0     0.00000
   -50.0    -70.0     0.00000
   -45.0    -70.0     0.00000
   -40.0    -70.0     0.00000
   -35.0    -70.0     0.00000
   -30.0    -70.0     0.00000
   -25.0    -70.0     0.00000
   -20.0    -70.0     0.00000
   -15.0    -70.0     0.00000
   -10.0    -70.0     0.00000
    -5.0    -70.0     0.00000
     0.0    -70.0     0.00000
     5.0    -70.0     0.00000
    10.0    -70.0     0.00000
    15.0    -70.0     0.00000
    20.0    -70.0     0.00000
    25.0    -70.0     0.00000
    30.0    -70.0     0.00000
    35.0    -70.0    -7.35536
    40.0    -70.0    -6.39157
    45.0    -70.0    -5.51336
    50.0    -70.0    -4.70213
    55.0    -70.0    -4.12364
    60.0    -70.0    -3.90599
    65.0    -70.0    -4.05868
    70.0    -70.0     0.00000
   -70.0    -65.0     0.00000
   -65.0    -65.0     0.00000
   -60.0    -65.0     0.00000
   -55.0    -65.0     0.00000
   -50.0    -65.0     0.00000
   -45.0    -65.0     0.00000
   -40.0    -65.0     0.00000
   -35.0    -65.0     0.00000
   -30.0    -65.0     0.00000
   -25.0    -65.0     0.00000
   -20.0    -65.0     0.00000
   -15.0    -65.0     0.00000
   -10.0    -65.0     0.00000
    -5.0    -65.0     0.00000
     0.0    -65.0     0.00000
     5.0    -65.0     0.00000
    10.0    -65.0     0.00000
    15.0    -65.0     0.00000
    20.0    -65.0     0.00000
    25.0    -65.0     0.00000
    30.0    -65.0    -6.41192
    35.0    -65.0    -5.44802
    40.0    -65.0    -4.61720
    45.0    -65.0    -3.78560
    50.0    -65.0    -3.09814
    55.0    -65.0    -2.69971
    60.0    -65.0    -2.66551
    65.0    -65.0    -3.02608
    70.0    -65.0    -3.73243
   -70.0    -60.0     0.00000
   -65.0    -60.0     0.00000
   -60.0    -60.0     0.00000
   -55.0    -60.0     0.00000
   -50.0    -60.0     0.00000
   -45.0    -60.0     0.00000
   -40.0    -60.0     0.00000
   -35.0    -60.0     0.00000
   -30.0    -60.0     0.00000
   -25.0    -60.0     0.00000
   -20.0    -60.0     0.00000
   -15.0    -60.0     0.00000
   -10.0    -60.0     0.00000
    -5.0    -60.0     0.00000
     0.0    -60.0     0.00000
     5.0    -60.0     0.00000
    10.0    -60.0     0.00000
    15.0    -60.0     0.00000
    20.0    -60.0    -6.80224
    25.0    -60.0    -5.57358
    30.0    -60.0    -4.63259
    35.0    -60.0    -3.82350
    40.0    -60.0    -2.98053
    45.0    -60.0    -2.22020
    50.0    -60.0    -1.68302
    55.0    -60.0    -1.46662
    60.0    -60.0    -1.61187
    65.0    -60.0    -2.16861
    70.0    -60.0    -3.12062
   -70.0    -55.0     0.00000
   -65.0    -55.0     0.00000
   -60.0    -55.0     0.00000
   -55.0    -55.0     0.00000
   -50.0    -55.0     0.00000
   -45.0    -55.0     0.00000
   -40.0    -55.0     0.00000
   -35.0    -55.0     0.00000
   -30.0    -55.0     0.00000
   -25.0    -55.0     0.00000
   -20.0    -55.0     0.00000
   -15.0    -55.0     0.00000
   -10.0    -55.0     0.00000
    -5.0    -55.0     0.00000
     0.0    -55.0     0.00000
     5.0    -55.0     0.00000
    10.0    -55.0     0.00000
    15.0    -55.0    -6.18421
    20.0    -55.0    -4.85929
    25.0    -55.0    -3.94181
    30.0    -55.0    -3.13278
    35.0    -55.0    -2.28412
    40.0    -55.0    -1.47623
    45.0    -55.0    -0.84043
    50.0    -55.0    -0.47338
    55.0    -55.0    -0.45704
    60.0    -55.0    -0.83761
    65.0    -55.0    -1.62839
    70.0    -55.0    -2.78769
   -70.0    -50.0     0.00000
   -65.0    -50.0     0.00000
   -60.0    -50.0     0.00000
   -55.0    -50.0     0.00000
   -50.0    -50.0     0.00000
   -45.0    -50.0     0.00000
   -40.0    -50.0     0.00000
   -35.0    -50.0     0.00000
   -30.0    -50.0     0.00000
   -25.0    -50.0     0.00000
   -20.0    -50.0     0.00000
   -15.0    -50.0     0.00000
   -10.0    -50.0     0.00000
    -5.0    -50.0     0.00000
     0.0    -50.0     0.00000
     5.0    -50.0     0.00000
    10.0    -50.0    -5.77464
    15.0    -50.0    -4.29706
    20.0    -50.0    -3.31425
    25.0    -50.0    -2.51387
    30.0    -50.0    -1.69323
    35.0    -50.0    -0.87239
    40.0    -50.0    -0.17362
    45.0    -50.0     0.30015
    50.0    -50.0     0.46356
    55.0    -50.0     0.22953
    60.0    -50.0    -0.19891
    65.0    -50.0    -1.23088
    70.0    -50.0    -4.22905
   -70.0    -45.0     0.00000
   -65.0    -45.0     0.00000
   -60.0    -45.0     0.00000
   -55.0    -45.0     0.00000
   -50.0    -45.0     0.00000
   -45.0    -45.0     0.00000
   -40.0    -45.0     0.00000
   -35.0    -45.0     0.00000
   -30.0    -45.0     0.00000
   -25.0    -45.0     0.00000
   -20.0    -45.0     0.00000
   -15.0    -45.0     0.00000
   -10.0    -45.0     0.00000
    -5.0    -45.0     0.00000
     0.0    -45.0     0.00000
     5.0    -45.0    -5.49016
    10.0    -45.0    -3.83953
    15.0    -45.0    -2.81432
    20.0    -45.0    -1.40115
    25.0    -45.0    -1.24748
    30.0    -45.0    -0.43812
    35.0    -45.0     0.29489
    40.0    -45.0     0.84200
    45.0    -45.0     1.11542
    50.0    -45.0     1.02545
    55.0    -45.0     0.75833
    60.0    -45.0    -1.73840
    65.0    -45.0    -3.06209
    70.0    -45.0    -4.28611
   -70.0    -40.0     0.00000
   -65.0    -40.0     0.00000
   -60.0    -40.0     0.00000
   -55.0    -40.0     0.00000
   -50.0    -40.0     0.00000
   -45.0    -40.0     0.00000
   -40.0    -40.0     0.00000
   -35.0    -40.0     0.00000
   -30.0    -40.0     0.00000
   -25.0    -40.0     0.00000
   -20.0    -40.0     0.00000
   -15.0    -40.0     0.00000
   -10.0    -40.0     0.00000
    -5.0    -40.0     0.00000
     0.0    -40.0    -4.70793
     5.0    -40.0    -2.99333
    10.0    -40.0    -1.96288
    15.0    -40.0    -1.17488
    20.0    -40.0    -0.43859
    25.0    -40.0     0.33188
    30.0    -40.0     1.07703
    35.0    -40.0     1.68420
    40.0    -40.0     1.81828
    45.0    -40.0     1.75159
    50.0    -40.0     1.39542
    55.0    -40.0    -0.97837
    60.0    -40.0    -2.16939
    65.0    -40.0    -3.25442
    70.0    -40.0    -4.35030
   -70.0    -35.0     0.00000
   -65.0    -35.0     0.00000
   -60.0    -35.0     0.00000
   -55.0    -35.0     0.00000
   -50.0    -35.0     0.00000
   -45.0    -35.0     0.00000
   -40.0    -35.0     0.00000
   -35.0    -35.0     0.00000
   -30.0    -35.0     0.00000
   -25.0    -35.0     0.00000
   -20.0    -35.0     0.00000
   -15.0    -35.0     0.00000
   -10.0    -35.0     0.00000
    -5.0    -35.0    -4.56083
     0.0    -35.0    -2.86367
     5.0    -35.0    -1.81006
    10.0    -35.0    -1.06444
    15.0    -35.0    -0.42347
    20.0    -35.0     0.23897
    25.0    -35.0     0.91783
    30.0    -35.0     1.52890
    35.0    -35.0     1.98149
    40.0    -35.0     2.17414
    45.0    -35.0     1.67904
    50.0    -35.0    -0.17420
    55.0    -35.0    -1.54885
    60.0    -35.0    -2.53790
    65.0    -35.0    -3.49962
    70.0    -35.0     0.00000
   -70.0    -30.0     0.00000
   -65.0    -30.0     0.00000
   -60.0    -30.0     0.00000
   -55.0    -30.0     0.00000
   -50.0    -30.0     0.00000
   -45.0    -30.0     0.00000
   -40.0    -30.0     0.00000
   -35.0    -30.0     0.00000
   -30.0    -30.0     0.00000
   -25.0    -30.0     0.00000
   -20.0    -30.0     0.00000
   -15.0    -30.0     0.00000
   -10.0    -30.0    -4.54051
    -5.0    -30.0    -2.84226
     0.0    -30.0    -1.71079
     5.0    -30.0    -0.97176
    10.0    -30.0    -0.40865
    15.0    -30.0     0.12405
    20.0    -30.0     0.68076
    25.0    -30.0     1.21063
    30.0    -30.0     1.64283
    35.0    -30.0     1.89526
    40.0    -30.0     1.87274
    45.0    -30.0    -0.35114
    50.0    -30.0    -0.98740
    55.0    -30.0    -1.79881
    60.0    -30.0    -2.96853
    65.0    -30.0    -3.81603
    70.0    -30.0     0.00000
   -70.0    -25.0     0.00000
   -65.0    -25.0     0.00000
   -60.0    -25.0     0.00000
   -55.0    -25.0     0.00000
   -50.0    -25.0     0.00000
   -45.0    -25.0     0.00000
   -40.0    -25.0     0.00000
   -35.0    -25.0     0.00000
   -30.0    -25.0     0.00000
   -25.0    -25.0     0.00000
   -20.0    -25.0     0.00000
   -15.0    -25.0    -4.49063
   -10.0    -25.0    -2.78401
    -5.0    -25.0    -1.57899
     0.0    -25.0    -0.81897
     5.0    -25.0    -0.30565
    10.0    -25.0     0.10575
    15.0    -25.0     0.50455
    20.0    -25.0     0.88631
    25.0    -25.0     1.21754
    30.0    -25.0     1.45176
    35.0    -25.0     1.50253
    40.0    -25.0    -0.62514
    45.0    -25.0    -1.11071
    50.0    -25.0    -1.77846
    55.0    -25.0    -2.48613
    60.0    -25.0    -3.49970
    65.0    -25.0     0.00000
    70.0    -25.0     0.00000
   -70.0    -20.0     0.00000
   -65.0    -20.0     0.00000
   -60.0    -20.0     0.00000
   -55.0    -20.0     0.00000
   -50.0    -20.0     0.00000
   -45.0    -20.0     0.00000
   -40.0    -20.0     0.00000
   -35.0    -20.0     0.00000
   -30.0    -20.0     0.00000
   -25.0    -20.0     0.00000
   -20.0    -20.0    -4.25085
   -15.0    -20.0    -2.61358
   -10.0    -20.0    -1.38585
    -5.0    -20.0    -0.59170
     0.0    -20.0    -0.09493
     5.0    -20.0     0.23340
    10.0    -20.0     0.49126
    15.0    -20.0     0.69780
    20.0    -20.0     0.86390
    25.0    -20.0     0.99744
    30.0    -20.0     1.03918
    35.0    -20.0    -1.05546
    40.0    -20.0    -1.43982
    45.0    -20.0    -1.99481
    50.0    -20.0    -2.62015
    55.0    -20.0    -2.25942
    60.0    -20.0     0.00000
    65.0    -20.0     0.00000
    70.0    -20.0     0.00000
   -70.0    -15.0     0.00000
   -65.0    -15.0     0.00000
   -60.0    -15.0     0.00000
   -55.0    -15.0     0.00000
   -50.0    -15.0     0.00000
   -45.0    -15.0     0.00000
   -40.0    -15.0     0.00000
   -35.0    -15.0     0.00000
   -30.0    -15.0     0.00000
   -25.0    -15.0    -4.12180
   -20.0    -15.0    -2.43845
   -15.0    -15.0    -1.21799
   -10.0    -15.0    -0.39346
    -5.0    -15.0     0.10897
     0.0    -15.0     0.40740
     5.0    -15.0     0.59202
    10.0    -15.0     0.67637
    15.0    -15.0     0.68559
    20.0    -15.0     0.67674
    25.0    -15.0     0.63497
    30.0    -15.0    -1.49836
    35.0    -15.0    -1.85499
    40.0    -15.0    -2.35008
    45.0    -15.0    -2.92299
    50.0    -15.0    -2.45149
    55.0    -15.0    -3.50426
    60.0    -15.0     0.00000
    65.0    -15.0     0.00000
    70.0    -15.0     0.00000
   -70.0    -10.0     0.00000
   -65.0    -10.0     0.00000
   -60.0    -10.0     0.00000
   -55.0    -10.0     0.00000
   -50.0    -10.0     0.00000
   -45.0    -10.0     0.00000
   -40.0    -10.0     0.00000
   -35.0    -10.0     0.00000
   -30.0    -10.0    -4.10405
   -25.0    -10.0    -2.40173
   -20.0    -10.0    -1.18264
   -15.0    -10.0    -0.35151
   -10.0    -10.0     0.15297
    -5.0    -10.0     0.45260
     0.0    -10.0     0.64310
     5.0    -10.0     0.70439
    10.0    -10.0     0.63396
    15.0    -10.0     0.52079
    20.0    -10.0     0.38551
    25.0    -10.0    -1.81905
    30.0    -10.0    -2.22175
    35.0    -10.0    -2.72757
    40.0    -10.0    -1.80688
    45.0    -10.0    -2.74398
    50.0    -10.0    -3.85703
    55.0    -10.0     0.00000
    60.0    -10.0     0.00000
    65.0    -10.0     0.00000
    70.0    -10.0     0.00000
   -70.0     -5.0     0.00000
   -65.0     -5.0     0.00000
   -60.0     -5.0     0.00000
   -55.0     -5.0     0.00000
   -50.0     -5.0     0.00000
   -45.0     -5.0     0.00000
   -40.0     -5.0     0.00000
   -35.0     -5.0    -4.15106
   -30.0     -5.0    -2.52158
   -25.0     -5.0    -1.35237
   -20.0     -5.0    -0.52607
   -15.0     -5.0    -0.02414
   -10.0     -5.0     0.27577
    -5.0     -5.0     0.50208
     0.0     -5.0     0.63792
     5.0     -5.0     0.59774
    10.0     -5.0     0.45217
    15.0     -5.0     0.26409
    20.0     -5.0    -1.97633
    25.0     -5.0    -2.44744
    30.0     -5.0    -3.01542
    35.0     -5.0    -2.09823
    40.0     -5.0    -3.09081
    45.0     -5.0    -4.26767
    50.0     -5.0     0.00000
    55.0     -5.0     0.00000
    60.0     -5.0     0.00000
    65.0     -5.0     0.00000
    70.0     -5.0     0.00000
   -70.0      0.0     0.00000
   -65.0      0.0     0.00000
   -60.0      0.0     0.00000
   -55.0      0.0     0.00000
   -50.0      0.0     0.00000
   -45.0      0.0     0.00000
   -40.0      0.0    -4.34406
   -35.0      0.0    -2.83022
   -30.0      0.0    -1.72949
   -25.0      0.0    -0.91498
   -20.0      0.0    -0.41633
   -15.0      0.0    -0.11711
   -10.0      0.0     0.13849
    -5.0      0.0     0.37961
     0.0      0.0     0.47411
     5.0      0.0     0.39130
    10.0      0.0     0.20636
    15.0      0.0    -2.01823
    20.0      0.0    -2.53534
    25.0      0.0    -3.16310
    30.0      0.0    -2.28451
    35.0      0.0    -3.35959
    40.0      0.0    -4.63134
    45.0      0.0     0.00000
    50.0      0.0     0.00000
    55.0      0.0     0.00000
    60.0      0.0     0.00000
    65.0      0.0     0.00000
    70.0      0.0     0.00000
   -70.0      5.0     0.00000
   -65.0      5.0     0.00000
   -60.0      5.0     0.00000
   -55.0      5.0     0.00000
   -50.0      5.0     0.00000
   -45.0      5.0     0.00000
   -40.0      5.0    -3.33992
   -35.0      5.0    -2.26424
   -30.0      5.0    -1.48556
   -25.0      5.0    -0.98391
   -20.0      5.0    -0.67540
   -15.0      5.0    -0.39674
   -10.0      5.0    -0.07324
    -5.0      5.0     0.18371
     0.0      5.0     0.25837
     5.0      5.0     0.15378
    10.0      5.0    -1.99620
    15.0      5.0    -2.52901
    20.0      5.0    -3.19310
    25.0      5.0    -3.96923
    30.0      5.0    -3.51255
    35.0      5.0    -4.87195
    40.0      5.0    -6.45350
    45.0      5.0     0.00000
    50.0      5.0     0.00000
    55.0      5.0     0.00000
    60.0      5.0     0.00000
    65.0      5.0     0.00000
    70.0      5.0     0.00000
   -70.0     10.0     0.00000
   -65.0     10.0     0.00000
   -60.0     10.0     0.00000
   -55.0     10.0     0.00000
   -50.0     10.0     0.00000
   -45.0     10.0    -0.09699
   -40.0     10.0     1.09800
   -35.0     10.0    -2.18665
   -30.0     10.0    -1.67750
   -25.0     10.0    -1.34867
   -20.0     10.0    -1.04832
   -15.0     10.0    -0.67323
   -10.0     10.0    -0.28930
    -5.0     10.0    -0.02654
     0.0     10.0     0.03478
     5.0     10.0    -1.96054
    10.0     10.0    -2.46921
    15.0     10.0    -0.60235
    20.0     10.0    -1.45440
    25.0     10.0    -3.53855
    30.0     10.0    -4.91435
    35.0     10.0    -6.63879
    40.0     10.0     0.00000
    45.0     10.0     0.00000
    50.0     10.0     0.00000
    55.0     10.0     0.00000
    60.0     10.0     0.00000
    65.0     10.0     0.00000
    70.0     10.0     0.00000
   -70.0     15.0     0.00000
   -65.0     15.0     0.00000
   -60.0     15.0     0.00000
   -55.0     15.0     0.00000
   -50.0     15.0     0.00000
   -45.0     15.0     1.26682
   -40.0     15.0     2.21135
   -35.0     15.0     3.04857
   -30.0     15.0     3.67556
   -25.0     15.0    -1.76563
   -20.0     15.0    -1.36352
   -15.0     15.0    -0.90615
   -10.0     15.0    -0.49607
    -5.0     15.0    -0.23612
     0.0     15.0    -1.98165
     5.0     15.0     0.09774
    10.0     15.0    -0.52629
    15.0     15.0    -1.38116
    20.0     15.0    -3.48791
    25.0     15.0    -4.82506
    30.0     15.0    -6.63865
    35.0     15.0     0.00000
    40.0     15.0     0.00000
    45.0     15.0     0.00000
    50.0     15.0     0.00000
    55.0     15.0     0.00000
    60.0     15.0     0.00000
    65.0     15.0     0.00000
    70.0     15.0     0.00000
   -70.0     20.0     0.00000
   -65.0     20.0     0.00000
   -60.0     20.0     0.00000
   -55.0     20.0     0.00000
   -50.0     20.0     1.08600
   -45.0     20.0     2.03968
   -40.0     20.0     2.96484
   -35.0     20.0     3.71819
   -30.0     20.0     4.12055
   -25.0     20.0    -2.09545
   -20.0     20.0    -1.61026
   -15.0     20.0    -1.11880
   -10.0     20.0    -0.70204
    -5.0     20.0    -2.15053
     0.0     20.0     0.05354
     5.0     20.0    -0.46679
    10.0     20.0    -2.18819
    15.0     20.0    -3.36511
    20.0     20.0    -4.70377
    25.0     20.0    -6.52015
    30.0     20.0     0.00000
    35.0     20.0     0.00000
    40.0     20.0     0.00000
    45.0     20.0     0.00000
    50.0     20.0     0.00000
    55.0     20.0     0.00000
    60.0     20.0     0.00000
    65.0     20.0     0.00000
    70.0     20.0     0.00000
   -70.0     25.0     0.00000
   -65.0     25.0     0.00000
   -60.0     25.0     0.00000
   -55.0     25.0     0.00000
   -50.0     25.0     0.68253
   -45.0     25.0     1.84526
   -40.0     25.0     3.30576
   -35.0     25.0     3.41171
   -30.0     25.0    -2.77115
   -25.0     25.0    -2.34588
   -20.0     25.0    -1.82983
   -15.0     25.0    -1.33008
   -10.0     25.0    -2.51476
    -5.0     25.0    -0.17090
     0.0     25.0    -1.33810
     5.0     25.0    -2.14676
    10.0     25.0    -3.23777
    15.0     25.0    -4.57484
    20.0     25.0    -6.29758
    25.0     25.0     0.00000
    30.0     25.0     0.00000
    35.0     25.0     0.00000
    40.0     25.0     0.00000
    45.0     25.0     0.00000
    50.0     25.0     0.00000
    55.0     25.0     0.00000
    60.0     25.0     0.00000
    65.0     25.0     0.00000
    70.0     25.0     0.00000
   -70.0     30.0     0.00000
   -65.0     30.0     0.00000
   -60.0     30.0     0.00000
   -55.0     30.0     0.08457
   -50.0     30.0     1.20541
   -45.0     30.0     1.79751
   -40.0     30.0     2.25805
   -35.0     30.0    -2.89072
   -30.0     30.0    -2.71181
   -25.0     30.0    -2.58737
   -20.0     30.0    -2.39889
   -15.0     30.0    -3.02296
   -10.0     30.0    -0.61756
    -5.0     30.0    -1.64710
     0.0     30.0    -2.25891
     5.0     30.0    -3.16586
    10.0     30.0    -4.41981
    15.0     30.0    -6.01564
    20.0     30.0     0.00000
    25.0     30.0     0.00000
    30.0     30.0     0.00000
    35.0     30.0     0.00000
    40.0     30.0     0.00000
    45.0     30.0     0.00000
    50.0     30.0     0.00000
    55.0     30.0     0.00000
    60.0     30.0     0.00000
    65.0     30.0     0.00000
    70.0     30.0     0.00000
   -70.0     35.0     0.00000
   -65.0     35.0     0.00000
   -60.0     35.0     0.00000
   -55.0     35.0    -0.06902
   -50.0     35.0     0.83009
   -45.0     35.0     1.50408
   -40.0     35.0    -4.06823
   -35.0     35.0    -2.04965
   -30.0     35.0    -2.03787
   -25.0     35.0    -2.08528
   -20.0     35.0    -3.63172
   -15.0     35.0    -3.73319
   -10.0     35.0    -2.31068
    -5.0     35.0    -2.71294
     0.0     35.0    -3.32576
     5.0     35.0    -4.28409
    10.0     35.0     0.00000
    15.0     35.0     0.00000
    20.0     35.0     0.00000
    25.0     35.0     0.00000
    30.0     35.0     0.00000
    35.0     35.0     0.00000
    40.0     35.0     0.00000
    45.0     35.0     0.00000
    50.0     35.0     0.00000
    55.0     35.0     0.00000
    60.0     35.0     0.00000
    65.0     35.0     0.00000
    70.0     35.0     0.00000
   -70.0     40.0     0.00000
   -65.0     40.0     0.00000
   -60.0     40.0     0.00000
   -55.0     40.0    -0.18309
   -50.0     40.0     0.65098
   -45.0     40.0     1.17821
   -40.0     40.0    -3.16353
   -35.0     40.0    -1.11172
   -30.0     40.0     0.65011
   -25.0     40.0     0.57148
   -20.0     40.0     0.11875
   -15.0     40.0    -0.89921
   -10.0     40.0    -2.62749
    -5.0     40.0    -3.82396
     0.0     40.0    -4.11637
     5.0     40.0     0.00000
    10.0     40.0     0.00000
    15.0     40.0     0.00000
    20.0     40.0     0.00000
    25.0     40.0     0.00000
    30.0     40.0     0.00000
    35.0     40.0     0.00000
    40.0     40.0     0.00000
    45.0     40.0     0.00000
    50.0     40.0     0.00000
    55.0     40.0     0.00000
    60.0     40.0     0.00000
    65.0     40.0     0.00000
    70.0     40.0     0.00000
   -70.0     45.0     0.00000
   -65.0     45.0     0.00000
   -60.0     45.0    -1.16370
   -55.0     45.0    -0.25400
   -50.0     45.0     0.44283
   -45.0     45.0    -2.47844
   -40.0     45.0    -2.18114
   -35.0     45.0     0.27906
   -30.0     45.0    -0.99801
   -25.0     45.0    -0.07649
   -20.0     45.0    -0.95368
   -15.0     45.0    -2.42049
   -10.0     45.0    -3.89964
    -5.0     45.0    -4.64287
     0.0     45.0     0.00000
     5.0     45.0     0.00000
    10.0     45.0     0.00000
    15.0     45.0     0.00000
    20.0     45.0     0.00000
    25.0     45.0     0.00000
    30.0     45.0     0.00000
    35.0     45.0     0.00000
    40.0     45.0     0.00000
    45.0     45.0     0.00000
    50.0     45.0     0.00000
    55.0     45.0     0.00000
    60.0     45.0     0.00000
    65.0     45.0     0.00000
    70.0     45.0     0.00000
   -70.0     50.0     0.00000
   -65.0     50.0     0.00000
   -60.0     50.0     0.00000
   -55.0     50.0    -0.34022
   -50.0     50.0    -1.91537
   -45.0     50.0    -1.59077
   -40.0     50.0    -1.14958
   -35.0     50.0     0.01919
   -30.0     50.0    -0.21509
   -25.0     50.0    -0.89076
   -20.0     50.0    -2.02569
   -15.0     50.0    -3.42838
   -10.0     50.0     0.00000
    -5.0     50.0     0.00000
     0.0     50.0     0.00000
     5.0     50.0     0.00000
    10.0     50.0     0.00000
    15.0     50.0     0.00000
    20.0     50.0     0.00000
    25.0     50.0     0.00000
    30.0     50.0     0.00000
    35.0     50.0     0.00000
    40.0     50.0     0.00000
    45.0     50.0     0.00000
    50.0     50.0     0.00000
    55.0     50.0     0.00000
    60.0     50.0     0.00000
    65.0     50.0     0.00000
    70.0     50.0     0.00000
   -70.0     55.0     0.00000
   -65.0     55.0     0.00000
   -60.0     55.0     0.00000
   -55.0     55.0    -1.49765
   -50.0     55.0    -1.09687
   -45.0     55.0    -0.98897
   -40.0     55.0    -1.45115
   -35.0     55.0    -0.33631
   -30.0     55.0    -0.78973
   -25.0     55.0    -1.57784
   -20.0     55.0    -2.73801
   -15.0     55.0     0.00000
   -10.0     55.0     0.00000
    -5.0     55.0     0.00000
     0.0     55.0     0.00000
     5.0     55.0     0.00000
    10.0     55.0     0.00000
    15.0     55.0     0.00000
    20.0     55.0     0.00000
    25.0     55.0     0.00000
    30.0     55.0     0.00000
    35.0     55.0     0.00000
    40.0     55.0     0.00000
    45.0     55.0     0.00000
    50.0     55.0     0.00000
    55.0     55.0     0.00000
    60.0     55.0     0.00000
    65.0     55.0     0.00000
    70.0     55.0     0.00000
   -70.0     60.0     0.00000
   -65.0     60.0     0.00000
   -60.0     60.0     0.00000
   -55.0     60.0     0.00000
   -50.0     60.0    -3.67961
   -45.0     60.0    -1.42051
   -40.0     60.0    -1.87316
   -35.0     60.0    -0.67832
   -30.0     60.0    -1.25484
   -25.0     60.0     0.00000
   -20.0     60.0     0.00000
   -15.0     60.0     0.00000
   -10.0     60.0     0.00000
    -5.0     60.0     0.00000
     0.0     60.0     0.00000
     5.0     60.0     0.00000
    10.0     60.0     0.00000
    15.0     60.0     0.00000
    20.0     60.0     0.00000
    25.0     60.0     0.00000
    30.0     60.0     0.00000
    35.0     60.0     0.00000
    40.0     60.0     0.00000
    45.0     60.0     0.00000
    50.0     60.0     0.00000
    55.0     60.0     0.00000
    60.0     60.0     0.00000
    65.0     60.0     0.00000
    70.0     60.0     0.00000
   -70.0     65.0     0.00000
   -65.0     65.0     0.00000
   -60.0     65.0     0.00000
   -55.0     65.0     0.00000
   -50.0     65.0     0.00000
   -45.0     65.0     0.00000
   -40.0     65.0     0.00000
   -35.0     65.0     0.00000
   -30.0     65.0     0.00000
   -25.0     65.0     0.00000
   -20.0     65.0     0.00000
   -15.0     65.0     0.00000
   -10.0     65.0     0.00000
    -5.0     65.0     0.00000
     0.0     65.0     0.00000
     5.0     65.0     0.00000
    10.0     65.0     0.00000
    15.0     65.0     0.00000
    20.0     65.0     0.00000
    25.0     65.0     0.00000
    30.0     65.0     0.00000
    35.0     65.0     0.00000
    40.0     65.0     0.00000
    45.0     65.0     0.00000
    50.0     65.0     0.00000
    55.0     65.0     0.00000
    60.0     65.0     0.00000
    65.0     65.0     0.00000
    70.0     65.0     0.00000
   -70.0     70.0     0.00000
   -65.0     70.0     0.00000
   -60.0     70.0     0.00000
   -55.0     70.0     0.00000
   -50.0     70.0     0.00000
   -45.0     70.0     0.00000
   -40.0     70.0     0.00000
   -35.0     70.0     0.00000
   -30.0     70.0     0.00000
   -25.0     70.0     0.00000
   -20.0     70.0     0.00000
   -15.0     70.0     0.00000
   -10.0     70.0     0.00000
    -5.0     70.0     0.00000
     0.0     70.0     0.00000
     5.0     70.0     0.00000
    10.0     70.0     0.00000
    15.0     70.0     0.00000
    20.0     70.0     0.00000
    25.0     70.0     0.00000
    30.0     70.0     0.00000
    35.0     70.0     0.00000
    40.0     70.0     0.00000
    45.0     70.0     0.00000
    50.0     70.0     0.00000
    55.0     70.0     0.00000
    60.0     70.0     0.00000
    65.0     70.0     0.00000
    70.0     70.0     0.00000

tortors      63   63   68   63   63        25   25
   -60.0    -60.0     0.00000
   -55.0    -60.0     0.00000
   -50.0    -60.0     0.00000
   -45.0    -60.0     0.00000
   -40.0    -60.0     0.00000
   -35.0    -60.0     0.00000
   -30.0    -60.0     0.00000
   -25.0    -60.0     0.00000
   -20.0    -60.0     0.00000
   -15.0    -60.0     0.00000
   -10.0    -60.0     0.00000
    -5.0    -60.0     0.00000
     0.0    -60.0     0.00000
     5.0    -60.0     0.00000
    10.0    -60.0     0.00000
    15.0    -60.0     0.00000
    20.0    -60.0    -5.83580
    25.0    -60.0    -4.10131
    30.0    -60.0    -3.15720
    35.0    -60.0    -2.52015
    40.0    -60.0    -1.95291
    45.0    -60.0    -1.48406
    50.0    -60.0    -1.27507
    55.0    -60.0    -1.53562
    60.0    -60.0    -2.41753
   -60.0    -55.0     0.00000
   -55.0    -55.0     0.00000
   -50.0    -55.0     0.00000
   -45.0    -55.0     0.00000
   -40.0    -55.0     0.00000
   -35.0    -55.0     0.00000
   -30.0    -55.0     0.00000
   -25.0    -55.0     0.00000
   -20.0    -55.0     0.00000
   -15.0    -55.0     0.00000
   -10.0    -55.0     0.00000
    -5.0    -55.0     0.00000
     0.0    -55.0     0.00000
     5.0    -55.0     0.00000
    10.0    -55.0     0.00000
    15.0    -55.0    -5.05305
    20.0    -55.0    -3.33928
    25.0    -55.0    -2.41441
    30.0    -55.0    -1.79519
    35.0    -55.0    -1.22985
    40.0    -55.0    -0.70728
    45.0    -55.0    -0.37932
    50.0    -55.0    -0.46399
    55.0    -55.0    -1.18381
    60.0    -55.0    -2.40715
   -60.0    -50.0     0.00000
   -55.0    -50.0     0.00000
   -50.0    -50.0     0.00000
   -45.0    -50.0     0.00000
   -40.0    -50.0     0.00000
   -35.0    -50.0     0.00000
   -30.0    -50.0     0.00000
   -25.0    -50.0     0.00000
   -20.0    -50.0     0.00000
   -15.0    -50.0     0.00000
   -10.0    -50.0     0.00000
    -5.0    -50.0     0.00000
     0.0    -50.0     0.00000
     5.0    -50.0     0.00000
    10.0    -50.0    -4.56366
    15.0    -50.0    -2.72989
    20.0    -50.0    -1.83452
    25.0    -50.0    -1.24516
    30.0    -50.0    -0.69635
    35.0    -50.0    -0.14499
    40.0    -50.0     0.27269
    45.0    -50.0     0.33534
    50.0    -50.0    -0.22901
    55.0    -50.0    -1.32087
    60.0    -50.0    -2.70210
   -60.0    -45.0     0.00000
   -55.0    -45.0     0.00000
   -50.0    -45.0     0.00000
   -45.0    -45.0     0.00000
   -40.0    -45.0     0.00000
   -35.0    -45.0     0.00000
   -30.0    -45.0     0.00000
   -25.0    -45.0     0.00000
   -20.0    -45.0     0.00000
   -15.0    -45.0     0.00000
   -10.0    -45.0     0.00000
    -5.0    -45.0     0.00000
     0.0    -45.0     0.00000
     5.0    -45.0    -4.28901
    10.0    -45.0    -2.36540
    15.0    -45.0    -1.44799
    20.0    -45.0    -0.87305
    25.0    -45.0    -0.35540
    30.0    -45.0     0.19884
    35.0    -45.0     0.68121
    40.0    -45.0     0.87422
    45.0    -45.0     0.47311
    50.0    -45.0    -0.48811
    55.0    -45.0    -1.75459
    60.0    -45.0    -3.23250
   -60.0    -40.0     0.00000
   -55.0    -40.0     0.00000
   -50.0    -40.0     0.00000
   -45.0    -40.0     0.00000
   -40.0    -40.0     0.00000
   -35.0    -40.0     0.00000
   -30.0    -40.0     0.00000
   -25.0    -40.0     0.00000
   -20.0    -40.0     0.00000
   -15.0    -40.0     0.00000
   -10.0    -40.0     0.00000
    -5.0    -40.0     0.00000
     0.0    -40.0    -4.21609
     5.0    -40.0    -2.19871
    10.0    -40.0    -1.23713
    15.0    -40.0    -0.67214
    20.0    -40.0    -0.19771
    25.0    -40.0     0.33857
    30.0    -40.0     0.86240
    35.0    -40.0     1.16997
    40.0    -40.0     0.93497
    45.0    -40.0     0.12428
    50.0    -40.0    -1.01473
    55.0    -40.0    -2.39457
    60.0    -40.0    -3.96385
   -60.0    -35.0     0.00000
   -55.0    -35.0     0.00000
   -50.0    -35.0     0.00000
   -45.0    -35.0     0.00000
   -40.0    -35.0     0.00000
   -35.0    -35.0     0.00000
   -30.0    -35.0     0.00000
   -25.0    -35.0     0.00000
   -20.0    -35.0     0.00000
   -15.0    -35.0     0.00000
   -10.0    -35.0     0.00000
    -5.0    -35.0    -4.30432
     0.0    -35.0    -2.21293
     5.0    -35.0    -1.19409
    10.0    -35.0    -0.63370
    15.0    -35.0    -0.19059
    20.0    -35.0     0.31095
    25.0    -35.0     0.85451
    30.0    -35.0     1.25911
    35.0    -35.0     1.18705
    40.0    -35.0     0.52783
    45.0    -35.0    -0.48037
    50.0    -35.0    -1.75861
    55.0    -35.0    -3.25751
    60.0    -35.0    -4.90158
   -60.0    -30.0     0.00000
   -55.0    -30.0     0.00000
   -50.0    -30.0     0.00000
   -45.0    -30.0     0.00000
   -40.0    -30.0     0.00000
   -35.0    -30.0     0.00000
   -30.0    -30.0     0.00000
   -25.0    -30.0     0.00000
   -20.0    -30.0     0.00000
   -15.0    -30.0     0.00000
   -10.0    -30.0    -4.51066
    -5.0    -30.0    -2.37566
     0.0    -30.0    -1.30490
     5.0    -30.0    -0.71830
    10.0    -30.0    -0.30009
    15.0    -30.0     0.15906
    20.0    -30.0     0.69957
    25.0    -30.0     1.17910
    30.0    -30.0     1.25487
    35.0    -30.0     0.73672
    40.0    -30.0    -0.14813
    45.0    -30.0    -1.32471
    50.0    -30.0    -2.74217
    55.0    -30.0    -4.26407
    60.0    -30.0    -5.95061
   -60.0    -25.0     0.00000
   -55.0    -25.0     0.00000
   -50.0    -25.0     0.00000
   -45.0    -25.0     0.00000
   -40.0    -25.0     0.00000
   -35.0    -25.0     0.00000
   -30.0    -25.0     0.00000
   -25.0    -25.0     0.00000
   -20.0    -25.0     0.00000
   -15.0    -25.0    -4.77307
   -10.0    -25.0    -2.63312
    -5.0    -25.0    -1.51674
     0.0    -25.0    -0.89776
     5.0    -25.0    -0.49416
    10.0    -25.0    -0.07935
    15.0    -25.0     0.44113
    20.0    -25.0     0.96622
    25.0    -25.0     1.16381
    30.0    -25.0     0.77087
    35.0    -25.0    -0.00358
    40.0    -25.0    -1.07229
    45.0    -25.0    -2.36674
    50.0    -25.0    -3.71138
    55.0    -25.0    -5.27158
    60.0    -25.0     0.00000
   -60.0    -20.0     0.00000
   -55.0    -20.0     0.00000
   -50.0    -20.0     0.00000
   -45.0    -20.0     0.00000
   -40.0    -20.0     0.00000
   -35.0    -20.0     0.00000
   -30.0    -20.0     0.00000
   -25.0    -20.0     0.00000
   -20.0    -20.0    -5.09315
   -15.0    -20.0    -2.95517
   -10.0    -20.0    -1.80460
    -5.0    -20.0    -1.14660
     0.0    -20.0    -0.74759
     5.0    -20.0    -0.38000
    10.0    -20.0     0.10328
    15.0    -20.0     0.64809
    20.0    -20.0     0.94323
    25.0    -20.0     0.65745
    30.0    -20.0    -0.01915
    35.0    -20.0    -0.95485
    40.0    -20.0    -2.08050
    45.0    -20.0    -3.25913
    50.0    -20.0    -4.71133
    55.0    -20.0    -6.63971
    60.0    -20.0     0.00000
   -60.0    -15.0     0.00000
   -55.0    -15.0     0.00000
   -50.0    -15.0     0.00000
   -45.0    -15.0     0.00000
   -40.0    -15.0     0.00000
   -35.0    -15.0     0.00000
   -30.0    -15.0     0.00000
   -25.0    -15.0    -5.45034
   -20.0    -15.0    -3.32685
   -15.0    -15.0    -2.15296
   -10.0    -15.0    -1.45232
    -5.0    -15.0    -1.04803
     0.0    -15.0    -0.72396
     5.0    -15.0    -0.29232
    10.0    -15.0     0.24800
    15.0    -15.0     0.61448
    20.0    -15.0     0.42054
    25.0    -15.0    -0.15392
    30.0    -15.0    -0.91776
    35.0    -15.0    -1.87264
    40.0    -15.0    -2.98568
    45.0    -15.0    -4.40337
    50.0    -15.0    -6.22766
    55.0    -15.0     0.00000
    60.0    -15.0     0.00000
   -60.0    -10.0     0.00000
   -55.0    -10.0     0.00000
   -50.0    -10.0     0.00000
   -45.0    -10.0     0.00000
   -40.0    -10.0     0.00000
   -35.0    -10.0     0.00000
   -30.0    -10.0    -5.81449
   -25.0    -10.0    -3.73128
   -20.0    -10.0    -2.08624
   -15.0    -10.0    -1.62464
   -10.0    -10.0    -1.41500
    -5.0    -10.0    -1.24102
     0.0    -10.0    -0.92284
     5.0    -10.0    -0.21338
    10.0    -10.0     0.20700
    15.0    -10.0     0.09521
    20.0    -10.0    -0.36907
    25.0    -10.0    -0.94672
    30.0    -10.0    -1.74422
    35.0    -10.0    -3.08295
    40.0    -10.0    -4.46307
    45.0    -10.0    -6.00104
    50.0    -10.0     0.00000
    55.0    -10.0     0.00000
    60.0    -10.0     0.00000
   -60.0     -5.0     0.00000
   -55.0     -5.0     0.00000
   -50.0     -5.0     0.00000
   -45.0     -5.0     0.00000
   -40.0     -5.0     0.00000
   -35.0     -5.0    -6.15091
   -30.0     -5.0    -3.55861
   -25.0     -5.0    -2.57195
   -20.0     -5.0    -2.02681
   -15.0     -5.0    -1.78924
   -10.0     -5.0    -1.64777
    -5.0     -5.0    -1.39537
     0.0     -5.0    -0.96900
     5.0     -5.0    -0.25290
    10.0     -5.0    -0.28746
    15.0     -5.0    -0.63064
    20.0     -5.0    -1.06625
    25.0     -5.0    -1.47532
    30.0     -5.0    -3.00948
    35.0     -5.0    -4.44984
    40.0     -5.0    -5.95855
    45.0     -5.0     0.00000
    50.0     -5.0     0.00000
    55.0     -5.0     0.00000
    60.0     -5.0     0.00000
   -60.0      0.0     0.00000
   -55.0      0.0     0.00000
   -50.0      0.0     0.00000
   -45.0      0.0     0.00000
   -40.0      0.0    -6.45417
   -35.0      0.0    -4.62143
   -30.0      0.0    -3.08129
   -25.0      0.0    -2.45978
   -20.0      0.0    -2.17723
   -15.0      0.0    -2.03416
   -10.0      0.0    -1.80951
    -5.0      0.0    -1.38533
     0.0      0.0    -0.90395
     5.0      0.0    -0.42779
    10.0      0.0    -0.94115
    15.0      0.0    -1.30965
    20.0      0.0    -1.38555
    25.0      0.0    -2.90457
    30.0      0.0    -4.37987
    35.0      0.0    -6.02007
    40.0      0.0    -8.06281
    45.0      0.0     0.00000
    50.0      0.0     0.00000
    55.0      0.0     0.00000
    60.0      0.0     0.00000
   -60.0      5.0     0.00000
   -55.0      5.0     0.00000
   -50.0      5.0     0.00000
   -45.0      5.0     0.00000
   -40.0      5.0    -5.20922
   -35.0      5.0    -4.00563
   -30.0      5.0    -2.89695
   -25.0      5.0    -2.56096
   -20.0      5.0    -2.39153
   -15.0      5.0    -2.16389
   -10.0      5.0    -1.71843
    -5.0      5.0    -1.13558
     0.0      5.0    -0.58070
     5.0      5.0    -0.37062
    10.0      5.0    -0.69307
    15.0      5.0    -2.14963
    20.0      5.0    -2.75680
    25.0      5.0    -4.24320
    30.0      5.0    -5.93490
    35.0      5.0    -8.09825
    40.0      5.0     0.00000
    45.0      5.0     0.00000
    50.0      5.0     0.00000
    55.0      5.0     0.00000
    60.0      5.0     0.00000
   -60.0     10.0     0.00000
   -55.0     10.0     0.00000
   -50.0     10.0     0.00000
   -45.0     10.0    -5.89887
   -40.0     10.0    -4.61032
   -35.0     10.0    -3.33093
   -30.0     10.0    -2.93891
   -25.0     10.0    -2.72616
   -20.0     10.0    -2.47611
   -15.0     10.0    -2.00860
   -10.0     10.0    -1.37221
    -5.0     10.0    -0.95195
     0.0     10.0    -0.53303
     5.0     10.0    -0.80005
    10.0     10.0    -1.49429
    15.0     10.0     7.14810
    20.0     10.0    -4.07134
    25.0     10.0    -5.75519
    30.0     10.0    -8.08174
    35.0     10.0     0.00000
    40.0     10.0     0.00000
    45.0     10.0     0.00000
    50.0     10.0     0.00000
    55.0     10.0     0.00000
    60.0     10.0     0.00000
   -60.0     15.0     0.00000
   -55.0     15.0     0.00000
   -50.0     15.0    -6.67389
   -45.0     15.0    -5.28891
   -40.0     15.0    -3.78623
   -35.0     15.0    -3.32858
   -30.0     15.0    -3.05602
   -25.0     15.0    -2.76550
   -20.0     15.0    -2.27464
   -15.0     15.0    -1.61201
   -10.0     15.0    -1.20651
    -5.0     15.0    -0.72170
     0.0     15.0    -0.98022
     5.0     15.0    -1.60778
    10.0     15.0    -2.48238
    15.0     15.0    -3.59773
    20.0     15.0    -5.53243
    25.0     15.0    -7.87853
    30.0     15.0     0.00000
    35.0     15.0     0.00000
    40.0     15.0     0.00000
    45.0     15.0     0.00000
    50.0     15.0     0.00000
    55.0     15.0     0.00000
    60.0     15.0     0.00000
   -60.0     20.0     0.00000
   -55.0     20.0     0.00000
   -50.0     20.0    -6.06207
   -45.0     20.0    -4.30777
   -40.0     20.0    -3.76330
   -35.0     20.0    -3.41033
   -30.0     20.0    -3.05833
   -25.0     20.0    -2.53504
   -20.0     20.0    -1.86271
   -15.0     20.0    -1.49943
   -10.0     20.0    -1.52244
    -5.0     20.0    -1.22400
     0.0     20.0    -1.84097
     5.0     20.0    -2.58326
    10.0     20.0    -3.55006
    15.0     20.0    -4.80046
    20.0     20.0    -6.77925
    25.0     20.0     0.00000
    30.0     20.0     0.00000
    35.0     20.0     0.00000
    40.0     20.0     0.00000
    45.0     20.0     0.00000
    50.0     20.0     0.00000
    55.0     20.0     0.00000
    60.0     20.0     0.00000
   -60.0     25.0     0.00000
   -55.0     25.0    -6.71688
   -50.0     25.0    -4.93440
   -45.0     25.0    -4.28613
   -40.0     25.0    -3.82646
   -35.0     25.0    -3.38948
   -30.0     25.0    -2.81826
   -25.0     25.0    -2.14956
   -20.0     25.0    -1.87936
   -15.0     25.0    -2.03259
   -10.0     25.0    -2.25445
    -5.0     25.0    -2.23288
     0.0     25.0    -2.87541
     5.0     25.0    -3.62505
    10.0     25.0    -4.69355
    15.0     25.0    -6.42515
    20.0     25.0     0.00000
    25.0     25.0     0.00000
    30.0     25.0     0.00000
    35.0     25.0     0.00000
    40.0     25.0     0.00000
    45.0     25.0     0.00000
    50.0     25.0     0.00000
    55.0     25.0     0.00000
    60.0     25.0     0.00000
   -60.0     30.0     0.00000
   -55.0     30.0    -6.21631
   -50.0     30.0    -4.92852
   -45.0     30.0    -4.34573
   -40.0     30.0    -3.80246
   -35.0     30.0    -3.15604
   -30.0     30.0    -2.46375
   -25.0     30.0    -0.88023
   -20.0     30.0     0.61686
   -15.0     30.0     2.27087
   -10.0     30.0     1.72623
    -5.0     30.0     0.38929
     0.0     30.0    -1.41604
     5.0     30.0    -4.69785
    10.0     30.0    -4.02859
    15.0     30.0     0.00000
    20.0     30.0     0.00000
    25.0     30.0     0.00000
    30.0     30.0     0.00000
    35.0     30.0     0.00000
    40.0     30.0     0.00000
    45.0     30.0     0.00000
    50.0     30.0     0.00000
    55.0     30.0     0.00000
    60.0     30.0     0.00000
   -60.0     35.0    -7.11110
   -55.0     35.0    -5.71246
   -50.0     35.0    -5.15556
   -45.0     35.0    -4.48298
   -40.0     35.0    -3.77140
   -35.0     35.0    -2.82176
   -30.0     35.0     1.97933
   -25.0     35.0     1.83302
   -20.0     35.0     1.99498
   -15.0     35.0     1.66745
   -10.0     35.0     0.76867
    -5.0     35.0    -0.91706
     0.0     35.0    -1.26883
     5.0     35.0     0.00000
    10.0     35.0     0.00000
    15.0     35.0     0.00000
    20.0     35.0     0.00000
    25.0     35.0     0.00000
    30.0     35.0     0.00000
    35.0     35.0     0.00000
    40.0     35.0     0.00000
    45.0     35.0     0.00000
    50.0     35.0     0.00000
    55.0     35.0     0.00000
    60.0     35.0     0.00000
   -60.0     40.0    -6.65370
   -55.0     40.0    -6.00115
   -50.0     40.0    -5.16227
   -45.0     40.0    -4.13831
   -40.0     40.0    -2.88134
   -35.0     40.0    -1.14214
   -30.0     40.0     0.30513
   -25.0     40.0     1.70995
   -20.0     40.0     1.50302
   -15.0     40.0     0.75237
   -10.0     40.0    -0.56942
    -5.0     40.0    -1.00446
     0.0     40.0     0.00000
     5.0     40.0     0.00000
    10.0     40.0     0.00000
    15.0     40.0     0.00000
    20.0     40.0     0.00000
    25.0     40.0     0.00000
    30.0     40.0     0.00000
    35.0     40.0     0.00000
    40.0     40.0     0.00000
    45.0     40.0     0.00000
    50.0     40.0     0.00000
    55.0     40.0     0.00000
    60.0     40.0     0.00000
   -60.0     45.0    -6.79279
   -55.0     45.0    -5.74938
   -50.0     45.0    -4.52149
   -45.0     45.0    -3.01283
   -40.0     45.0    -1.23356
   -35.0     45.0     0.14494
   -30.0     45.0     0.67081
   -25.0     45.0     1.36431
   -20.0     45.0     0.78324
   -15.0     45.0    -0.30187
   -10.0     45.0    -0.58731
    -5.0     45.0     0.00000
     0.0     45.0     0.00000
     5.0     45.0     0.00000
    10.0     45.0     0.00000
    15.0     45.0     0.00000
    20.0     45.0     0.00000
    25.0     45.0     0.00000
    30.0     45.0     0.00000
    35.0     45.0     0.00000
    40.0     45.0     0.00000
    45.0     45.0     0.00000
    50.0     45.0     0.00000
    55.0     45.0     0.00000
    60.0     45.0     0.00000
   -60.0     50.0     0.00000
   -55.0     50.0    -5.31465
   -50.0     50.0    -3.18818
   -45.0     50.0    -1.35243
   -40.0     50.0     0.01198
   -35.0     50.0     0.51944
   -30.0     50.0     1.18114
   -25.0     50.0     0.83239
   -20.0     50.0     0.01828
   -15.0     50.0     0.00004
   -10.0     50.0     0.00000
    -5.0     50.0     0.00000
     0.0     50.0     0.00000
     5.0     50.0     0.00000
    10.0     50.0     0.00000
    15.0     50.0     0.00000
    20.0     50.0     0.00000
    25.0     50.0     0.00000
    30.0     50.0     0.00000
    35.0     50.0     0.00000
    40.0     50.0     0.00000
    45.0     50.0     0.00000
    50.0     50.0     0.00000
    55.0     50.0     0.00000
    60.0     50.0     0.00000
   -60.0     55.0     0.00000
   -55.0     55.0     0.00000
   -50.0     55.0    -1.48994
   -45.0     55.0     0.06393
   -40.0     55.0     0.76718
   -35.0     55.0     0.33348
   -30.0     55.0     0.79545
   -25.0     55.0     0.00000
   -20.0     55.0     0.00000
   -15.0     55.0     0.00000
   -10.0     55.0     0.00000
    -5.0     55.0     0.00000
     0.0     55.0     0.00000
     5.0     55.0     0.00000
    10.0     55.0     0.00000
    15.0     55.0     0.00000
    20.0     55.0     0.00000
    25.0     55.0     0.00000
    30.0     55.0     0.00000
    35.0     55.0     0.00000
    40.0     55.0     0.00000
    45.0     55.0     0.00000
    50.0     55.0     0.00000
    55.0     55.0     0.00000
    60.0     55.0     0.00000
   -60.0     60.0     0.00000
   -55.0     60.0     0.00000
   -50.0     60.0     0.00000
   -45.0     60.0     0.00000
   -40.0     60.0     0.00000
   -35.0     60.0     0.00000
   -30.0     60.0     0.00000
   -25.0     60.0     0.00000
   -20.0     60.0     0.00000
   -15.0     60.0     0.00000
   -10.0     60.0     0.00000
    -5.0     60.0     0.00000
     0.0     60.0     0.00000
     5.0     60.0     0.00000
    10.0     60.0     0.00000
    15.0     60.0     0.00000
    20.0     60.0     0.00000
    25.0     60.0     0.00000
    30.0     60.0     0.00000
    35.0     60.0     0.00000
    40.0     60.0     0.00000
    45.0     60.0     0.00000
    50.0     60.0     0.00000
    55.0     60.0     0.00000
    60.0     60.0     0.00000

tortors      69   69   68   69   69        29   29
   -70.0    -70.0     0.00000
   -65.0    -70.0     0.00000
   -60.0    -70.0     0.00000
   -55.0    -70.0     0.00000
   -50.0    -70.0     0.00000
   -45.0    -70.0     0.00000
   -40.0    -70.0     0.00000
   -35.0    -70.0     0.00000
   -30.0    -70.0     0.00000
   -25.0    -70.0     0.00000
   -20.0    -70.0     0.00000
   -15.0    -70.0     0.00000
   -10.0    -70.0     0.00000
    -5.0    -70.0     0.00000
     0.0    -70.0     0.00000
     5.0    -70.0     0.00000
    10.0    -70.0     0.00000
    15.0    -70.0     0.00000
    20.0    -70.0     0.00000
    25.0    -70.0     0.00000
    30.0    -70.0     0.00000
    35.0    -70.0    -7.54942
    40.0    -70.0    -6.80674
    45.0    -70.0    -6.03340
    50.0    -70.0    -5.25706
    55.0    -70.0    -4.61832
    60.0    -70.0    -4.23225
    65.0    -70.0    -4.11835
    70.0    -70.0     0.00000
   -70.0    -65.0     0.00000
   -65.0    -65.0     0.00000
   -60.0    -65.0     0.00000
   -55.0    -65.0     0.00000
   -50.0    -65.0     0.00000
   -45.0    -65.0     0.00000
   -40.0    -65.0     0.00000
   -35.0    -65.0     0.00000
   -30.0    -65.0     0.00000
   -25.0    -65.0     0.00000
   -20.0    -65.0     0.00000
   -15.0    -65.0     0.00000
   -10.0    -65.0     0.00000
    -5.0    -65.0     0.00000
     0.0    -65.0     0.00000
     5.0    -65.0     0.00000
    10.0    -65.0     0.00000
    15.0    -65.0     0.00000
    20.0    -65.0     0.00000
    25.0    -65.0     0.00000
    30.0    -65.0    -6.92038
    35.0    -65.0    -6.22416
    40.0    -65.0    -5.50740
    45.0    -65.0    -4.74400
    50.0    -65.0    -4.05069
    55.0    -65.0    -3.55238
    60.0    -65.0    -3.31098
    65.0    -65.0    -3.34400
    70.0    -65.0    -3.65503
   -70.0    -60.0     0.00000
   -65.0    -60.0     0.00000
   -60.0    -60.0     0.00000
   -55.0    -60.0     0.00000
   -50.0    -60.0     0.00000
   -45.0    -60.0     0.00000
   -40.0    -60.0     0.00000
   -35.0    -60.0     0.00000
   -30.0    -60.0     0.00000
   -25.0    -60.0     0.00000
   -20.0    -60.0     0.00000
   -15.0    -60.0     0.00000
   -10.0    -60.0     0.00000
    -5.0    -60.0     0.00000
     0.0    -60.0     0.00000
     5.0    -60.0     0.00000
    10.0    -60.0     0.00000
    15.0    -60.0     0.00000
    20.0    -60.0    -7.31368
    25.0    -60.0    -6.31256
    30.0    -60.0    -5.61848
    35.0    -60.0    -4.93623
    40.0    -60.0    -4.18671
    45.0    -60.0    -3.45990
    50.0    -60.0    -2.87558
    55.0    -60.0    -2.51236
    60.0    -60.0    -2.42291
    65.0    -60.0    -3.48338
    70.0    -60.0    -4.24029
   -70.0    -55.0     0.00000
   -65.0    -55.0     0.00000
   -60.0    -55.0     0.00000
   -55.0    -55.0     0.00000
   -50.0    -55.0     0.00000
   -45.0    -55.0     0.00000
   -40.0    -55.0     0.00000
   -35.0    -55.0     0.00000
   -30.0    -55.0     0.00000
   -25.0    -55.0     0.00000
   -20.0    -55.0     0.00000
   -15.0    -55.0     0.00000
   -10.0    -55.0     0.00000
    -5.0    -55.0     0.00000
     0.0    -55.0     0.00000
     5.0    -55.0     0.00000
    10.0    -55.0     0.00000
    15.0    -55.0    -6.90085
    20.0    -55.0    -5.77053
    25.0    -55.0    -4.58497
    30.0    -55.0    -4.27310
    35.0    -55.0    -3.50768
    40.0    -55.0    -2.82422
    45.0    -55.0    -2.23000
    50.0    -55.0    -1.76833
    55.0    -55.0    -2.11792
    60.0    -55.0    -2.49304
    65.0    -55.0    -3.18409
    70.0    -55.0    -4.13432
   -70.0    -50.0     0.00000
   -65.0    -50.0     0.00000
   -60.0    -50.0     0.00000
   -55.0    -50.0     0.00000
   -50.0    -50.0     0.00000
   -45.0    -50.0     0.00000
   -40.0    -50.0     0.00000
   -35.0    -50.0     0.00000
   -30.0    -50.0     0.00000
   -25.0    -50.0     0.00000
   -20.0    -50.0     0.00000
   -15.0    -50.0     0.00000
   -10.0    -50.0     0.00000
    -5.0    -50.0     0.00000
     0.0    -50.0     0.00000
     5.0    -50.0     0.00000
    10.0    -50.0    -6.63863
    15.0    -50.0    -5.33311
    20.0    -50.0    -4.01857
    25.0    -50.0    -3.66736
    30.0    -50.0    -2.90722
    35.0    -50.0    -2.21066
    40.0    -50.0    -1.68448
    45.0    -50.0    -1.38721
    50.0    -50.0    -1.36080
    55.0    -50.0    -1.62739
    60.0    -50.0    -2.23468
    65.0    -50.0    -3.13091
    70.0    -50.0    -5.80094
   -70.0    -45.0     0.00000
   -65.0    -45.0     0.00000
   -60.0    -45.0     0.00000
   -55.0    -45.0     0.00000
   -50.0    -45.0     0.00000
   -45.0    -45.0     0.00000
   -40.0    -45.0     0.00000
   -35.0    -45.0     0.00000
   -30.0    -45.0     0.00000
   -25.0    -45.0     0.00000
   -20.0    -45.0     0.00000
   -15.0    -45.0     0.00000
   -10.0    -45.0     0.00000
    -5.0    -45.0     0.00000
     0.0    -45.0     0.00000
     5.0    -45.0    -6.53327
    10.0    -45.0    -5.02271
    15.0    -45.0    -3.94076
    20.0    -45.0    -3.09929
    25.0    -45.0    -2.34721
    30.0    -45.0    -1.65917
    35.0    -45.0    -1.12082
    40.0    -45.0    -0.79028
    45.0    -45.0    -0.70157
    50.0    -45.0    -0.90802
    55.0    -45.0    -1.42864
    60.0    -45.0    -2.25070
    65.0    -45.0    -4.90137
    70.0    -45.0    -5.93459
   -70.0    -40.0     0.00000
   -65.0    -40.0     0.00000
   -60.0    -40.0     0.00000
   -55.0    -40.0     0.00000
   -50.0    -40.0     0.00000
   -45.0    -40.0     0.00000
   -40.0    -40.0     0.00000
   -35.0    -40.0     0.00000
   -30.0    -40.0     0.00000
   -25.0    -40.0     0.00000
   -20.0    -40.0     0.00000
   -15.0    -40.0     0.00000
   -10.0    -40.0     0.00000
    -5.0    -40.0     0.00000
     0.0    -40.0    -6.57010
     5.0    -40.0    -4.85677
    10.0    -40.0    -3.51679
    15.0    -40.0    -2.58296
    20.0    -40.0    -1.83150
    25.0    -40.0    -1.17330
    30.0    -40.0    -0.65391
    35.0    -40.0    -0.32513
    40.0    -40.0    -0.20571
    45.0    -40.0    -0.34046
    50.0    -40.0    -0.78406
    55.0    -40.0    -1.52417
    60.0    -40.0    -4.13678
    65.0    -40.0    -5.12874
    70.0    -40.0    -6.05144
   -70.0    -35.0     0.00000
   -65.0    -35.0     0.00000
   -60.0    -35.0     0.00000
   -55.0    -35.0     0.00000
   -50.0    -35.0     0.00000
   -45.0    -35.0     0.00000
   -40.0    -35.0     0.00000
   -35.0    -35.0     0.00000
   -30.0    -35.0     0.00000
   -25.0    -35.0     0.00000
   -20.0    -35.0     0.00000
   -15.0    -35.0     0.00000
   -10.0    -35.0     0.00000
    -5.0    -35.0    -5.92597
     0.0    -35.0    -4.28474
     5.0    -35.0    -3.10799
    10.0    -35.0    -2.21135
    15.0    -35.0    -1.42741
    20.0    -35.0    -0.64595
    25.0    -35.0    -0.29372
    30.0    -35.0     0.00003
    35.0    -35.0     0.11975
    40.0    -35.0     0.03635
    45.0    -35.0    -0.31371
    50.0    -35.0    -2.64356
    55.0    -35.0    -3.52846
    60.0    -35.0    -4.46306
    65.0    -35.0    -5.34103
    70.0    -35.0     0.00000
   -70.0    -30.0     0.00000
   -65.0    -30.0     0.00000
   -60.0    -30.0     0.00000
   -55.0    -30.0     0.00000
   -50.0    -30.0     0.00000
   -45.0    -30.0     0.00000
   -40.0    -30.0     0.00000
   -35.0    -30.0     0.00000
   -30.0    -30.0     0.00000
   -25.0    -30.0     0.00000
   -20.0    -30.0     0.00000
   -15.0    -30.0     0.00000
   -10.0    -30.0    -6.18732
    -5.0    -30.0    -4.33024
     0.0    -30.0    -2.97991
     5.0    -30.0    -2.01487
    10.0    -30.0    -1.25931
    15.0    -30.0    -0.57405
    20.0    -30.0     0.09426
    25.0    -30.0     0.68688
    30.0    -30.0     1.12459
    35.0    -30.0     0.21522
    40.0    -30.0    -0.04841
    45.0    -30.0    -2.27904
    50.0    -30.0    -3.06717
    55.0    -30.0    -3.94939
    60.0    -30.0    -4.77338
    65.0    -30.0    -5.45974
    70.0    -30.0     0.00000
   -70.0    -25.0     0.00000
   -65.0    -25.0     0.00000
   -60.0    -25.0     0.00000
   -55.0    -25.0     0.00000
   -50.0    -25.0     0.00000
   -45.0    -25.0     0.00000
   -40.0    -25.0     0.00000
   -35.0    -25.0     0.00000
   -30.0    -25.0     0.00000
   -25.0    -25.0     0.00000
   -20.0    -25.0     0.00000
   -15.0    -25.0    -6.27880
   -10.0    -25.0    -4.25795
    -5.0    -25.0    -2.77748
     0.0    -25.0    -1.72731
     5.0    -25.0    -0.96655
    10.0    -25.0    -0.36181
    15.0    -25.0     0.17451
    20.0    -25.0     0.63745
    25.0    -25.0     0.99080
    30.0    -25.0     1.18756
    35.0    -25.0     1.14534
    40.0    -25.0    -2.12832
    45.0    -25.0    -2.79778
    50.0    -25.0    -3.62068
    55.0    -25.0    -4.39808
    60.0    -25.0    -5.04811
    65.0    -25.0     0.00000
    70.0    -25.0     0.00000
   -70.0    -20.0     0.00000
   -65.0    -20.0     0.00000
   -60.0    -20.0     0.00000
   -55.0    -20.0     0.00000
   -50.0    -20.0     0.00000
   -45.0    -20.0     0.00000
   -40.0    -20.0     0.00000
   -35.0    -20.0     0.00000
   -30.0    -20.0     0.00000
   -25.0    -20.0     0.00000
   -20.0    -20.0    -6.10507
   -15.0    -20.0    -4.04626
   -10.0    -20.0    -2.47750
    -5.0    -20.0    -1.34320
     0.0    -20.0    -0.54524
     5.0    -20.0     0.02944
    10.0    -20.0     0.46942
    15.0    -20.0     0.78831
    20.0    -20.0     0.98803
    25.0    -20.0     1.07721
    30.0    -20.0     1.00084
    35.0    -20.0    -1.17098
    40.0    -20.0    -1.76994
    45.0    -20.0    -2.54277
    50.0    -20.0    -3.36407
    55.0    -20.0    -4.95296
    60.0    -20.0     0.00000
    65.0    -20.0     0.00000
    70.0    -20.0     0.00000
   -70.0    -15.0     0.00000
   -65.0    -15.0     0.00000
   -60.0    -15.0     0.00000
   -55.0    -15.0     0.00000
   -50.0    -15.0     0.00000
   -45.0    -15.0     0.00000
   -40.0    -15.0     0.00000
   -35.0    -15.0     0.00000
   -30.0    -15.0     0.00000
   -25.0    -15.0    -5.90156
   -20.0    -15.0    -3.81608
   -15.0    -15.0    -2.17103
   -10.0    -15.0    -0.95394
    -5.0    -15.0    -0.10034
     0.0    -15.0     0.48350
     5.0    -15.0     0.88117
    10.0    -15.0     1.11288
    15.0    -15.0     1.19322
    20.0    -15.0     1.15473
    25.0    -15.0     0.97304
    30.0    -15.0    -1.26660
    35.0    -15.0    -1.89711
    40.0    -15.0    -2.68141
    45.0    -15.0    -3.52549
    50.0    -15.0    -4.30253
    55.0    -15.0     0.00000
    60.0    -15.0     0.00000
    65.0    -15.0     0.00000
    70.0    -15.0     0.00000
   -70.0    -10.0     0.00000
   -65.0    -10.0     0.00000
   -60.0    -10.0     0.00000
   -55.0    -10.0     0.00000
   -50.0    -10.0     0.00000
   -45.0    -10.0     0.00000
   -40.0    -10.0     0.00000
   -35.0    -10.0     0.00000
   -30.0    -10.0    -5.70392
   -25.0    -10.0    -3.61717
   -20.0    -10.0    -1.91508
   -15.0    -10.0    -0.62115
   -10.0    -10.0     0.29805
    -5.0    -10.0     0.91473
     0.0    -10.0     1.30019
     5.0    -10.0     1.47676
    10.0    -10.0     1.47446
    15.0    -10.0     1.34819
    20.0    -10.0     1.08751
    25.0    -10.0    -1.22164
    30.0    -10.0    -1.93977
    35.0    -10.0    -2.80400
    40.0    -10.0    -3.72852
    45.0    -10.0    -4.60080
    50.0    -10.0    -5.38213
    55.0    -10.0     0.00000
    60.0    -10.0     0.00000
    65.0    -10.0     0.00000
    70.0    -10.0     0.00000
   -70.0     -5.0     0.00000
   -65.0     -5.0     0.00000
   -60.0     -5.0     0.00000
   -55.0     -5.0     0.00000
   -50.0     -5.0     0.00000
   -45.0     -5.0     0.00000
   -40.0     -5.0     0.00000
   -35.0     -5.0    -5.51729
   -30.0     -5.0    -3.46011
   -25.0     -5.0    -1.72666
   -20.0     -5.0    -0.36810
   -15.0     -5.0     0.62156
   -10.0     -5.0     1.29020
    -5.0     -5.0     1.68773
     0.0     -5.0     1.83011
     5.0     -5.0     1.75960
    10.0     -5.0     1.55830
    15.0     -5.0     1.23737
    20.0     -5.0    -1.09827
    25.0     -5.0    -1.87842
    30.0     -5.0    -2.83083
    35.0     -5.0    -3.87572
    40.0     -5.0    -4.89107
    45.0     -5.0    -5.82410
    50.0     -5.0     0.00000
    55.0     -5.0     0.00000
    60.0     -5.0     0.00000
    65.0     -5.0     0.00000
    70.0     -5.0     0.00000
   -70.0      0.0     0.00000
   -65.0      0.0     0.00000
   -60.0      0.0     0.00000
   -55.0      0.0     0.00000
   -50.0      0.0     0.00000
   -45.0      0.0     0.00000
   -40.0      0.0    -5.34482
   -35.0      0.0    -3.34521
   -30.0      0.0    -1.61137
   -25.0      0.0    -0.20555
   -20.0      0.0     0.85529
   -15.0      0.0     1.59343
   -10.0      0.0     2.02872
    -5.0      0.0     2.15953
     0.0      0.0     2.03458
     5.0      0.0     1.76198
    10.0      0.0     1.38128
    15.0      0.0    -0.96469
    20.0      0.0    -1.78660
    25.0      0.0    -2.79273
    30.0      0.0    -3.93181
    35.0      0.0    -5.09715
    40.0      0.0    -6.21194
    45.0      0.0     0.00000
    50.0      0.0     0.00000
    55.0      0.0     0.00000
    60.0      0.0     0.00000
    65.0      0.0     0.00000
    70.0      0.0     0.00000
   -70.0      5.0     0.00000
   -65.0      5.0     0.00000
   -60.0      5.0     0.00000
   -55.0      5.0     0.00000
   -50.0      5.0     0.00000
   -45.0      5.0     0.00000
   -40.0      5.0    -3.27257
   -35.0      5.0    -1.57286
   -30.0      5.0    -0.14298
   -25.0      5.0     0.98614
   -20.0      5.0     1.80967
   -15.0      5.0     2.31029
   -10.0      5.0     2.45782
    -5.0      5.0     2.30004
     0.0      5.0     1.96403
     5.0      5.0     1.51569
    10.0      5.0    -0.84419
    15.0      5.0    -1.71212
    20.0      5.0    -2.75319
    25.0      5.0    -3.94287
    30.0      5.0    -5.20826
    35.0      5.0    -6.48697
    40.0      5.0     0.00000
    45.0      5.0     0.00000
    50.0      5.0     0.00000
    55.0      5.0     0.00000
    60.0      5.0     0.00000
    65.0      5.0     0.00000
    70.0      5.0     0.00000
   -70.0     10.0     0.00000
   -65.0     10.0     0.00000
   -60.0     10.0     0.00000
   -55.0     10.0     0.00000
   -50.0     10.0     0.00000
   -45.0     10.0    -3.24952
   -40.0     10.0    -1.62165
   -35.0     10.0    -0.19346
   -30.0     10.0     0.99679
   -25.0     10.0     1.91758
   -20.0     10.0     2.50752
   -15.0     10.0     2.69707
   -10.0     10.0     2.50659
    -5.0     10.0     2.17901
     0.0     10.0     1.13819
     5.0     10.0    -0.96263
    10.0     10.0    -1.76686
    15.0     10.0    -2.77670
    20.0     10.0    -3.96628
    25.0     10.0    -5.27174
    30.0     10.0    -6.65005
    35.0     10.0     0.00000
    40.0     10.0     0.00000
    45.0     10.0     0.00000
    50.0     10.0     0.00000
    55.0     10.0     0.00000
    60.0     10.0     0.00000
    65.0     10.0     0.00000
    70.0     10.0     0.00000
   -70.0     15.0     0.00000
   -65.0     15.0     0.00000
   -60.0     15.0     0.00000
   -55.0     15.0     0.00000
   -50.0     15.0    -3.29749
   -45.0     15.0    -1.78406
   -40.0     15.0    -0.38197
   -35.0     15.0     0.86239
   -30.0     15.0     1.88611
   -25.0     15.0     2.45837
   -20.0     15.0     2.44965
   -15.0     15.0     0.90441
   -10.0     15.0    -0.68892
    -5.0     15.0     1.87753
     0.0     15.0     0.08938
     5.0     15.0    -2.10699
    10.0     15.0    -2.96799
    15.0     15.0    -4.06390
    20.0     15.0    -5.33599
    25.0     15.0    -6.74111
    30.0     15.0    -8.37771
    35.0     15.0     0.00000
    40.0     15.0     0.00000
    45.0     15.0     0.00000
    50.0     15.0     0.00000
    55.0     15.0     0.00000
    60.0     15.0     0.00000
    65.0     15.0     0.00000
    70.0     15.0     0.00000
   -70.0     20.0     0.00000
   -65.0     20.0     0.00000
   -60.0     20.0     0.00000
   -55.0     20.0     0.00000
   -50.0     20.0    -2.09312
   -45.0     20.0    -0.74079
   -40.0     20.0     0.54623
   -35.0     20.0     1.64682
   -30.0     20.0     2.01915
   -25.0     20.0     2.03392
   -20.0     20.0     0.76985
   -15.0     20.0    -0.21566
   -10.0     20.0    -1.34093
    -5.0     20.0    -0.74959
     0.0     20.0    -2.75998
     5.0     20.0    -3.41103
    10.0     20.0    -4.31485
    15.0     20.0    -5.45764
    20.0     20.0    -6.80536
    25.0     20.0    -8.44874
    30.0     20.0     0.00000
    35.0     20.0     0.00000
    40.0     20.0     0.00000
    45.0     20.0     0.00000
    50.0     20.0     0.00000
    55.0     20.0     0.00000
    60.0     20.0     0.00000
    65.0     20.0     0.00000
    70.0     20.0     0.00000
   -70.0     25.0     0.00000
   -65.0     25.0     0.00000
   -60.0     25.0     0.00000
   -55.0     25.0    -2.50998
   -50.0     25.0    -1.24688
   -45.0     25.0     0.03352
   -40.0     25.0     0.98432
   -35.0     25.0     1.43676
   -30.0     25.0     1.53155
   -25.0     25.0     0.58122
   -20.0     25.0    -0.44659
   -15.0     25.0    -1.88011
   -10.0     25.0    -3.70037
    -5.0     25.0    -3.59523
     0.0     25.0    -4.14025
     5.0     25.0    -4.79070
    10.0     25.0    -5.70684
    15.0     25.0    -6.89601
    20.0     25.0    -6.08390
    25.0     25.0     0.00000
    30.0     25.0     0.00000
    35.0     25.0     0.00000
    40.0     25.0     0.00000
    45.0     25.0     0.00000
    50.0     25.0     0.00000
    55.0     25.0     0.00000
    60.0     25.0     0.00000
    65.0     25.0     0.00000
    70.0     25.0     0.00000
   -70.0     30.0     0.00000
   -65.0     30.0     0.00000
   -60.0     30.0     0.00000
   -55.0     30.0    -1.80627
   -50.0     30.0    -0.69843
   -45.0     30.0     0.11574
   -40.0     30.0     0.69765
   -35.0     30.0     0.93325
   -30.0     30.0     0.30374
   -25.0     30.0    -0.70409
   -20.0     30.0    -1.76828
   -15.0     30.0    -2.75691
   -10.0     30.0    -5.25511
    -5.0     30.0    -5.13795
     0.0     30.0    -5.52094
     5.0     30.0    -3.67938
    10.0     30.0    -4.64604
    15.0     30.0    -7.69620
    20.0     30.0     0.00000
    25.0     30.0     0.00000
    30.0     30.0     0.00000
    35.0     30.0     0.00000
    40.0     30.0     0.00000
    45.0     30.0     0.00000
    50.0     30.0     0.00000
    55.0     30.0     0.00000
    60.0     30.0     0.00000
    65.0     30.0     0.00000
    70.0     30.0     0.00000
   -70.0     35.0     0.00000
   -65.0     35.0     0.00000
   -60.0     35.0    -2.77392
   -55.0     35.0    -1.82142
   -50.0     35.0    -0.95610
   -45.0     35.0    -0.24184
   -40.0     35.0     0.17605
   -35.0     35.0    -0.11685
   -30.0     35.0    -1.02718
   -25.0     35.0    -2.11567
   -20.0     35.0    -3.07610
   -15.0     35.0    -5.37914
   -10.0     35.0    -6.39156
    -5.0     35.0    -7.26126
     0.0     35.0    -5.89265
     5.0     35.0    -6.58388
    10.0     35.0     0.00000
    15.0     35.0     0.00000
    20.0     35.0     0.00000
    25.0     35.0     0.00000
    30.0     35.0     0.00000
    35.0     35.0     0.00000
    40.0     35.0     0.00000
    45.0     35.0     0.00000
    50.0     35.0     0.00000
    55.0     35.0     0.00000
    60.0     35.0     0.00000
    65.0     35.0     0.00000
    70.0     35.0     0.00000
   -70.0     40.0     0.00000
   -65.0     40.0     0.00000
   -60.0     40.0    -2.96696
   -55.0     40.0    -2.10390
   -50.0     40.0    -1.32419
   -45.0     40.0    -0.76928
   -40.0     40.0    -0.75079
   -35.0     40.0    -1.45827
   -30.0     40.0    -2.48234
   -25.0     40.0    -3.48033
   -20.0     40.0    -6.10713
   -15.0     40.0    -6.57222
   -10.0     40.0    -7.37632
    -5.0     40.0    -6.89430
     0.0     40.0    -7.20459
     5.0     40.0     0.00000
    10.0     40.0     0.00000
    15.0     40.0     0.00000
    20.0     40.0     0.00000
    25.0     40.0     0.00000
    30.0     40.0     0.00000
    35.0     40.0     0.00000
    40.0     40.0     0.00000
    45.0     40.0     0.00000
    50.0     40.0     0.00000
    55.0     40.0     0.00000
    60.0     40.0     0.00000
    65.0     40.0     0.00000
    70.0     40.0     0.00000
   -70.0     45.0     0.00000
   -65.0     45.0     0.00000
   -60.0     45.0    -3.17785
   -55.0     45.0    -2.38888
   -50.0     45.0    -1.77582
   -45.0     45.0    -1.56889
   -40.0     45.0    -2.05470
   -35.0     45.0    -2.85973
   -30.0     45.0    -2.27104
   -25.0     45.0    -6.30839
   -20.0     45.0    -5.25621
   -15.0     45.0    -6.06589
   -10.0     45.0    -6.96252
    -5.0     45.0    -7.80226
     0.0     45.0     0.00000
     5.0     45.0     0.00000
    10.0     45.0     0.00000
    15.0     45.0     0.00000
    20.0     45.0     0.00000
    25.0     45.0     0.00000
    30.0     45.0     0.00000
    35.0     45.0     0.00000
    40.0     45.0     0.00000
    45.0     45.0     0.00000
    50.0     45.0     0.00000
    55.0     45.0     0.00000
    60.0     45.0     0.00000
    65.0     45.0     0.00000
    70.0     45.0     0.00000
   -70.0     50.0     0.00000
   -65.0     50.0     0.00000
   -60.0     50.0    -3.33185
   -55.0     50.0    -2.70030
   -50.0     50.0    -2.38617
   -45.0     50.0    -2.70402
   -40.0     50.0    -3.29104
   -35.0     50.0    -4.48573
   -30.0     50.0    -4.80276
   -25.0     50.0    -5.80677
   -20.0     50.0    -6.02399
   -15.0     50.0    -6.85079
   -10.0     50.0    -7.70991
    -5.0     50.0     0.00000
     0.0     50.0     0.00000
     5.0     50.0     0.00000
    10.0     50.0     0.00000
    15.0     50.0     0.00000
    20.0     50.0     0.00000
    25.0     50.0     0.00000
    30.0     50.0     0.00000
    35.0     50.0     0.00000
    40.0     50.0     0.00000
    45.0     50.0     0.00000
    50.0     50.0     0.00000
    55.0     50.0     0.00000
    60.0     50.0     0.00000
    65.0     50.0     0.00000
    70.0     50.0     0.00000
   -70.0     55.0     0.00000
   -65.0     55.0     0.00000
   -60.0     55.0    -3.47703
   -55.0     55.0    -3.11870
   -50.0     55.0    -3.26172
   -45.0     55.0    -3.69949
   -40.0     55.0    -4.95466
   -35.0     55.0    -5.27716
   -30.0     55.0    -5.52653
   -25.0     55.0    -5.90597
   -20.0     55.0    -6.58543
   -15.0     55.0     0.00000
   -10.0     55.0     0.00000
    -5.0     55.0     0.00000
     0.0     55.0     0.00000
     5.0     55.0     0.00000
    10.0     55.0     0.00000
    15.0     55.0     0.00000
    20.0     55.0     0.00000
    25.0     55.0     0.00000
    30.0     55.0     0.00000
    35.0     55.0     0.00000
    40.0     55.0     0.00000
    45.0     55.0     0.00000
    50.0     55.0     0.00000
    55.0     55.0     0.00000
    60.0     55.0     0.00000
    65.0     55.0     0.00000
    70.0     55.0     0.00000
   -70.0     60.0     0.00000
   -65.0     60.0     0.00000
   -60.0     60.0     0.00000
   -55.0     60.0    -3.69092
   -50.0     60.0    -4.17700
   -45.0     60.0    -5.34644
   -40.0     60.0    -5.54562
   -35.0     60.0    -5.72098
   -30.0     60.0     0.00000
   -25.0     60.0     0.00000
   -20.0     60.0     0.00000
   -15.0     60.0     0.00000
   -10.0     60.0     0.00000
    -5.0     60.0     0.00000
     0.0     60.0     0.00000
     5.0     60.0     0.00000
    10.0     60.0     0.00000
    15.0     60.0     0.00000
    20.0     60.0     0.00000
    25.0     60.0     0.00000
    30.0     60.0     0.00000
    35.0     60.0     0.00000
    40.0     60.0     0.00000
    45.0     60.0     0.00000
    50.0     60.0     0.00000
    55.0     60.0     0.00000
    60.0     60.0     0.00000
    65.0     60.0     0.00000
    70.0     60.0     0.00000
   -70.0     65.0     0.00000
   -65.0     65.0     0.00000
   -60.0     65.0     0.00000
   -55.0     65.0     0.00000
   -50.0     65.0     0.00000
   -45.0     65.0     0.00000
   -40.0     65.0     0.00000
   -35.0     65.0     0.00000
   -30.0     65.0     0.00000
   -25.0     65.0     0.00000
   -20.0     65.0     0.00000
   -15.0     65.0     0.00000
   -10.0     65.0     0.00000
    -5.0     65.0     0.00000
     0.0     65.0     0.00000
     5.0     65.0     0.00000
    10.0     65.0     0.00000
    15.0     65.0     0.00000
    20.0     65.0     0.00000
    25.0     65.0     0.00000
    30.0     65.0     0.00000
    35.0     65.0     0.00000
    40.0     65.0     0.00000
    45.0     65.0     0.00000
    50.0     65.0     0.00000
    55.0     65.0     0.00000
    60.0     65.0     0.00000
    65.0     65.0     0.00000
    70.0     65.0     0.00000
   -70.0     70.0     0.00000
   -65.0     70.0     0.00000
   -60.0     70.0     0.00000
   -55.0     70.0     0.00000
   -50.0     70.0     0.00000
   -45.0     70.0     0.00000
   -40.0     70.0     0.00000
   -35.0     70.0     0.00000
   -30.0     70.0     0.00000
   -25.0     70.0     0.00000
   -20.0     70.0     0.00000
   -15.0     70.0     0.00000
   -10.0     70.0     0.00000
    -5.0     70.0     0.00000
     0.0     70.0     0.00000
     5.0     70.0     0.00000
    10.0     70.0     0.00000
    15.0     70.0     0.00000
    20.0     70.0     0.00000
    25.0     70.0     0.00000
    30.0     70.0     0.00000
    35.0     70.0     0.00000
    40.0     70.0     0.00000
    45.0     70.0     0.00000
    50.0     70.0     0.00000
    55.0     70.0     0.00000
    60.0     70.0     0.00000
    65.0     70.0     0.00000
    70.0     70.0     0.00000


      ###################################
      ##                               ##
      ##  Atomic Multipole Parameters  ##
      ##                               ##
      ###################################


multipole     1    2    4              -0.22620
                                        0.08214    0.00000    0.34883
                                        0.11775
                                        0.00000   -1.02185
                                       -0.17555    0.00000    0.90410
multipole     2    1    3              -0.15245
                                        0.19517    0.00000    0.19687
                                       -0.20677
                                        0.00000   -0.48084
                                       -0.01672    0.00000    0.68761
multipole     2    1  238              -0.26188
                                        0.19517    0.00000    0.19687
                                       -0.20677
                                        0.00000   -0.48084
                                       -0.01672    0.00000    0.68761
multipole     2    1  240              -0.06378
                                        0.23312    0.13956    0.09887
                                       -0.31660
                                       -0.24134   -0.22704
                                        0.00987   -0.17429    0.54364
multipole     2  234    3              -0.00060
                                        0.19517    0.00000    0.19687
                                       -0.20677
                                        0.00000   -0.48084
                                       -0.01672    0.00000    0.68761
multipole     2  236    3              -0.15431
                                        0.17831    0.12028    0.04835
                                       -0.18716
                                       -0.14669   -0.30278
                                       -0.23445   -0.03639    0.48994
multipole     3    5    2               0.84374
                                       -0.10331    0.00000    0.21864
                                        0.12993
                                        0.00000   -0.31823
                                        0.00297    0.00000    0.18830
multipole     4    1    2               0.12752
                                        0.00647    0.00000   -0.12783
                                        0.03203
                                        0.00000   -0.02425
                                       -0.00668    0.00000   -0.00778
multipole     5    3    2              -0.73597
                                       -0.00206    0.00000   -0.19382
                                       -0.52873
                                        0.00000    0.31757
                                        0.01718    0.00000    0.21116
multipole     6    2    6               0.07168
                                       -0.00670    0.00000   -0.03554
                                       -0.01145
                                        0.00000    0.00424
                                        0.00006    0.00000    0.00721
multipole     7    8   10              -0.14985
                                        0.03550    0.00000    0.44301
                                        0.09170
                                        0.00000   -1.11491
                                       -0.24348    0.00000    1.02321
multipole     7   33   10              -0.07700
                                        0.07153    0.00000    0.47356
                                        0.04187
                                        0.00000   -1.12615
                                       -0.13307    0.00000    1.08428
multipole     7   44   10              -0.14168
                                        0.07684    0.00000    0.42468
                                        0.07677
                                        0.00000   -1.10639
                                       -0.13195    0.00000    1.02962
multipole     8    7    9   12         -0.21238
                                        0.15677    0.10446    0.14545
                                       -0.17425
                                       -0.22519   -0.40549
                                       -0.00044   -0.22429    0.57974
multipole     8    7  238   12         -0.35660
                                        0.15677    0.10446    0.14545
                                       -0.17425
                                       -0.22519   -0.40549
                                       -0.00044   -0.22429    0.57974
multipole     8    7  240   12         -0.15850
                                        0.23312    0.13956    0.09887
                                       -0.31660
                                       -0.24134   -0.22704
                                        0.00987   -0.17429    0.54364
multipole     8  234    9   12          0.01822
                                        0.16474    0.12633    0.26753
                                       -0.21185
                                       -0.16278   -0.28684
                                       -0.20823   -0.06352    0.49869
multipole     8  236    9   12         -0.13549
                                        0.17831    0.12028    0.04835
                                       -0.18716
                                       -0.14669   -0.30278
                                       -0.23445   -0.03639    0.48994
multipole     9   11    8               0.85068
                                       -0.01685    0.00000    0.27745
                                        0.29463
                                        0.00000   -0.41598
                                       -0.00743    0.00000    0.12135
multipole     9   11   33               0.86830
                                       -0.00831    0.00000    0.28673
                                        0.31013
                                        0.00000   -0.40744
                                       -0.02007    0.00000    0.09731
multipole     9   11   44               0.86623
                                       -0.01620    0.00000    0.28155
                                        0.21345
                                        0.00000   -0.37126
                                        0.03757    0.00000    0.15781
multipole    10    7    8               0.12992
                                       -0.00883    0.00000   -0.14169
                                        0.04124
                                        0.00000   -0.02603
                                       -0.00466    0.00000   -0.01521
multipole    10    7   33               0.13014
                                       -0.01463    0.00000   -0.14527
                                        0.04339
                                        0.00000   -0.02611
                                       -0.00341    0.00000   -0.01728
multipole    10    7   44               0.13192
                                       -0.02608    0.00000   -0.13150
                                        0.02396
                                        0.00000   -0.01254
                                        0.00671    0.00000   -0.01142
multipole    11    9    8              -0.77770
                                       -0.01897    0.00000   -0.21786
                                       -0.61542
                                        0.00000    0.33936
                                        0.00866    0.00000    0.27606
multipole    11    9   33              -0.78568
                                       -0.00475    0.00000   -0.21642
                                       -0.63353
                                        0.00000    0.34214
                                        0.02232    0.00000    0.29139
multipole    11    9   44              -0.77214
                                       -0.00136    0.00000   -0.21318
                                       -0.59230
                                        0.00000    0.31639
                                        0.01541    0.00000    0.27591
multipole    12    8   13               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   15               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   19               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   25               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   64               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   73               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   92               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  109               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  120               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  130               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  140               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  144               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  150               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  156               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  170               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  178               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  185               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  195               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  205               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8  216               0.08921
                                        0.01405    0.00000    0.04185
                                       -0.00099
                                        0.00000   -0.00099
                                        0.00801    0.00000    0.00198
multipole    12    8   83               0.08544
                                        0.00588    0.00000    0.05950
                                        0.02355
                                        0.00000   -0.01645
                                        0.01114    0.00000   -0.00710
multipole    12    8  162               0.08646
                                        0.00138    0.00000    0.00677
                                       -0.00925
                                        0.00000    0.00263
                                        0.01278    0.00000    0.00662
multipole    12   33   34               0.09030
                                        0.00560    0.00000    0.05742
                                       -0.00170
                                        0.00000    0.00174
                                        0.01050    0.00000   -0.00004
multipole    12   33   38               0.08972
                                       -0.00888    0.00000    0.07916
                                       -0.01768
                                        0.00000   -0.01918
                                       -0.00214    0.00000    0.03686
multipole    12   44   45               0.09885
                                        0.01622    0.00000    0.05792
                                        0.00647
                                        0.00000    0.00221
                                        0.01141    0.00000   -0.00868
multipole    12   44   50               0.09273
                                       -0.01562    0.00000    0.07350
                                       -0.08566
                                        0.00000    0.06242
                                        0.09474    0.00000    0.02324
multipole    13    8   12              -0.15440
                                       -0.00010    0.00000    0.36287
                                       -0.29475
                                        0.00000   -0.29287
                                        0.00762    0.00000    0.58762
multipole    14   13    8               0.07484
                                       -0.00111    0.00000   -0.10010
                                       -0.00304
                                        0.00000   -0.01538
                                        0.01240    0.00000    0.01842
multipole    15   16    8               0.01482
                                        0.08020    0.00000   -0.26997
                                        0.34033
                                        0.00000    0.14255
                                       -0.02494    0.00000   -0.48288
multipole    16   15    8               0.06618
                                       -0.01550    0.00000   -0.03799
                                       -0.02092
                                        0.00000   -0.00865
                                        0.00210    0.00000    0.02957
multipole    17   15    8              -0.17773
                                        0.01639    0.00000    0.27595
                                       -0.26651
                                        0.00000   -0.24157
                                       -0.00302    0.00000    0.50808
multipole    18   17   15               0.05743
                                        0.00260    0.00000   -0.09807
                                       -0.00994
                                        0.00118   -0.01956
                                        0.00000    0.00000    0.02950
multipole    19    8   21              -0.05880
                                        0.26546    0.00000    0.21223
                                        0.20945
                                        0.00000   -0.58569
                                       -0.11242    0.00000    0.37624
multipole    21   22   19               0.02425
                                        0.13818    0.00000   -0.10780
                                        0.34224
                                        0.00000    0.03484
                                       -0.07137    0.00000   -0.37708
multipole    23   21   19              -0.11850
                                        0.02042    0.00000    0.27842
                                       -0.21793
                                        0.00000   -0.21279
                                       -0.05341    0.00000    0.43072
multipole    20   19   21               0.04696
                                        0.00607    0.00000   -0.06684
                                       -0.06962
                                        0.00000   -0.00388
                                        0.07593    0.00000    0.07350
multipole    22   21   19               0.00841
                                       -0.00672    0.00000   -0.06533
                                       -0.02250
                                        0.00000   -0.00022
                                        0.02359    0.00000    0.02272
multipole    24   23   21               0.03989
                                       -0.00280    0.00000   -0.10039
                                        0.04169
                                        0.00000    0.04396
                                       -0.04893    0.00000   -0.08565
multipole    25   26   29               0.02186
                                        0.08020    0.00000   -0.26997
                                        0.34033
                                        0.00000    0.14255
                                       -0.02494    0.00000   -0.48288
multipole    26   25   29               0.06618
                                       -0.01550    0.00000   -0.03799
                                       -0.02092
                                        0.00000   -0.00865
                                        0.00210    0.00000    0.02957
multipole    27   25   29              -0.17773
                                        0.01639    0.00000    0.27595
                                       -0.26651
                                        0.00000   -0.24157
                                       -0.00302    0.00000    0.50808
multipole    28   27   25               0.05743
                                        0.00260    0.00000   -0.09807
                                       -0.00994
                                        0.00118   -0.01956
                                        0.00000    0.00000    0.02950
multipole    29   31   25              -0.13782
                                        0.30388    0.00000    0.06758
                                        0.23297
                                        0.00000   -0.52767
                                       -0.19079    0.00000    0.29470
multipole    30   29   25               0.05838
                                       -0.00859    0.00000   -0.06224
                                       -0.01816
                                        0.00000   -0.01607
                                        0.00914    0.00000    0.03423
multipole    31   29   32              -0.16689
                                        0.00000    0.00000    0.21012
                                       -0.26816
                                        0.00000   -0.20521
                                        0.00830    0.00000    0.47337
multipole    32   31   29               0.05849
                                        0.01309    0.00000   -0.10315
                                       -0.00194
                                        0.00000   -0.01929
                                        0.00780    0.00000    0.02123
multipole    33    7    9   12         -0.31424
                                        0.10978    0.18667    0.05863
                                       -0.13616
                                       -0.31125   -0.33777
                                        0.02536   -0.27378    0.47393
multipole    33    7  238   12         -0.44882
                                        0.10978    0.18667    0.05863
                                       -0.13616
                                       -0.31125   -0.33777
                                        0.02536   -0.27378    0.47393
multipole    33  234    9   12         -0.01057
                                        0.10978    0.18667    0.25863
                                       -0.13616
                                       -0.31125   -0.33777
                                        0.02536   -0.27378    0.47393
multipole    33  236    9   12         -0.16428
                                        0.17831    0.12028    0.04835
                                       -0.18716
                                       -0.14669   -0.30278
                                       -0.23445   -0.03639    0.48994
multipole    34   33   36               0.18740
                                        0.32652    0.00000    0.16904
                                        0.38884
                                        0.00000   -0.64696
                                       -0.40264    0.00000    0.25812
multipole    35   34   33               0.01982
                                       -0.01239    0.00000   -0.11747
                                        0.01971
                                        0.00000    0.00381
                                       -0.01013    0.00000   -0.02352
multipole    36   37   34              -0.41295
                                        0.33448    0.00000   -0.14251
                                        0.42448
                                        0.00000   -0.41234
                                       -0.38297    0.00000   -0.01214
multipole    37   36   34               0.27409
                                       -0.00229    0.00000   -0.14154
                                        0.03579
                                        0.00000   -0.00191
                                        0.07686    0.00000   -0.03388
multipole    38   42   33               0.17854
                                        0.23880    0.00000    0.32060
                                        0.10533
                                        0.00000   -0.64403
                                       -0.29222    0.00000    0.53870
multipole    39   38   42               0.02134
                                       -0.00950    0.00000   -0.09928
                                        0.00686
                                        0.00000    0.00614
                                        0.05736    0.00000   -0.01300
multipole    40   38   41              -0.15307
                                       -0.00025    0.00000    0.38046
                                       -0.30173
                                        0.00000   -0.22953
                                       -0.06348    0.00000    0.53126
multipole    41   40   38               0.07192
                                       -0.00679    0.00000   -0.10053
                                        0.06651
                                        0.00000    0.02229
                                       -0.00281    0.00000   -0.08880
multipole    42   43   38              -0.39938
                                        0.31891    0.00000    0.06162
                                        0.17801
                                        0.00000   -0.65478
                                       -0.34887    0.00000    0.47677
multipole    43   42   38               0.22557
                                       -0.05057    0.00000   -0.02631
                                       -0.03639
                                        0.00000   -0.07964
                                       -0.03676    0.00000    0.11603
multipole    44    7    9   12         -0.24710
                                        0.10958    0.20789    0.11165
                                       -0.29651
                                       -0.34984   -0.19439
                                        0.01482   -0.12065    0.49090
multipole    44    7  238   12         -0.37021
                                        0.10958    0.20789    0.11165
                                       -0.29651
                                       -0.34984   -0.19439
                                        0.01482   -0.12065    0.49090
multipole    44  234    9   12         -0.00633
                                        0.10958    0.20789    0.25165
                                       -0.29651
                                       -0.34984   -0.19439
                                        0.01482   -0.12065    0.49090
multipole    44  236    9   12         -0.16004
                                        0.17831    0.12028    0.04835
                                       -0.18716
                                       -0.14669   -0.30278
                                       -0.23445   -0.03639    0.48994
multipole    45   44   47              -0.15207
                                       -0.06553    0.00000    0.34254
                                       -0.30415
                                        0.00000   -0.21377
                                       -0.28927    0.00000    0.51792
multipole    45   44   49              -0.15207
                                       -0.06553    0.00000    0.34254
                                       -0.30415
                                        0.00000   -0.21377
                                       -0.28927    0.00000    0.51792
multipole    46   45   44               0.07591
                                       -0.00889    0.00000   -0.04092
                                       -0.18958
                                        0.00000    0.00422
                                        0.16671    0.00000    0.18536
multipole    47   48   45              -0.04712
                                        0.52591    0.00000   -0.09604
                                        1.70327
                                        0.00000   -2.34352
                                       -0.60679    0.00000    0.64025
multipole    48   47   45               0.11129
                                       -0.04992    0.00000   -0.08691
                                        0.05295
                                        0.00000    0.13423
                                       -0.05345    0.00000   -0.18718
multipole    49   49   45               0.06417
                                        0.53667    0.00000    0.23589
                                        1.30986
                                        0.00000   -2.63022
                                       -0.81921    0.00000    1.32036
multipole    50   44   52               0.02101
                                        0.45179    0.00000    0.06973
                                        0.09122
                                        0.00000   -0.44012
                                       -0.52228    0.00000    0.34890
multipole    51   50   51               0.00952
                                       -0.01257    0.00000   -0.06988
                                        0.12020
                                        0.00000   -0.04321
                                        0.05399    0.00000   -0.07699
multipole    52   50   44              -0.97001
                                        0.10382    0.00000    0.32906
                                       -1.26053
                                        0.00000   -1.49518
                                       -0.38944    0.00000    2.75571
multipole    53   54   62              -0.11893
                                        0.34044    0.00000    0.34525
                                        0.13454
                                        0.00000   -1.26831
                                       -0.55465    0.00000    1.13377
multipole    54   53   55   57         -0.38385
                                        0.09303    0.30388    0.20804
                                       -0.28513
                                       -0.11620   -0.19141
                                       -0.06760   -0.05551    0.47654
multipole    54   53  238   57         -0.44047
                                        0.09303    0.30388    0.20804
                                       -0.28513
                                       -0.11620   -0.19141
                                       -0.06760   -0.05551    0.47654
multipole    55   56   54               0.98874
                                        0.02791    0.00000    0.30666
                                        0.30672
                                        0.00000   -0.48397
                                        0.08782    0.00000    0.17725
multipole    56   55   54              -0.82816
                                       -0.06750    0.00000   -0.25032
                                       -0.71170
                                        0.00000    0.39860
                                       -0.05460    0.00000    0.31310
multipole    57   54   58               0.10715
                                        0.00609    0.00000    0.07519
                                        0.01670
                                        0.00000   -0.01648
                                        0.01130    0.00000   -0.00022
multipole    58   54   60              -0.09495
                                        0.31121    0.00000    0.40605
                                        0.22917
                                        0.00000   -0.67119
                                       -0.07599    0.00000    0.44202
multipole    58  246   60              -0.12680
                                        0.31318    0.00000    0.41341
                                        0.26389
                                        0.00000   -0.70262
                                       -0.10425    0.00000    0.43873
multipole    59   58   54               0.09275
                                       -0.01264    0.00000   -0.07572
                                        0.00128
                                        0.00000   -0.02196
                                        0.00991    0.00000    0.02068
multipole    59   58  246               0.11510
                                        0.00090    0.00000   -0.07548
                                       -0.00989
                                        0.00000   -0.01502
                                        0.00444    0.00000    0.02491
multipole    60   58   62              -0.11624
                                        0.39225    0.00000    0.24210
                                        0.33605
                                        0.00000   -0.65320
                                       -0.03333    0.00000    0.31715
multipole    60   58  250              -0.14420
                                        0.42355    0.00000    0.25235
                                        0.34755
                                        0.00000   -0.69761
                                       -0.08434    0.00000    0.35006
multipole    61   60   58               0.09217
                                       -0.00152    0.00000   -0.07154
                                       -0.00810
                                        0.00000   -0.00700
                                        0.00227    0.00000    0.01510
multipole    61   60  250               0.12121
                                       -0.00270    0.00000   -0.06030
                                       -0.00918
                                        0.00000   -0.01098
                                        0.00194    0.00000    0.02016
multipole    62   53   60              -0.02016
                                        0.15944    0.00000    0.38838
                                       -0.01606
                                        0.00000   -0.54997
                                       -0.05844    0.00000    0.56603
multipole    63   62   53               0.04828
                                       -0.02837    0.00000   -0.10489
                                       -0.01200
                                        0.00000    0.00934
                                       -0.02136    0.00000    0.00266
multipole    64   66    8              -0.01895
                                        0.36956    0.00000    0.01114
                                        0.41183
                                        0.00000   -0.66411
                                       -0.32852    0.00000    0.25228
multipole    65   64   66               0.06839
                                        0.02787    0.00000   -0.13883
                                       -0.00869
                                        0.00000    0.08416
                                        0.09373    0.00000   -0.07547
multipole    66   64   67              -0.06275
                                       -0.01515    0.00000    0.11717
                                        0.10484
                                        0.00000   -0.26909
                                        0.00249    0.00000    0.16425
multipole    67   66   69               0.00890
                                        0.18546    0.00000    0.15071
                                        0.47473
                                        0.00000   -0.42840
                                        0.28711    0.00000   -0.04633
multipole    68   67   66               0.02818
                                       -0.01325    0.00000   -0.14859
                                        0.07601
                                        0.00000    0.09693
                                        0.01121    0.00000   -0.17294
multipole    69   67   71              -0.05402
                                       -0.00945    0.00000    0.02922
                                       -0.00276
                                        0.00000   -0.13432
                                       -0.13875    0.00000    0.13708
multipole    70   69   67               0.03565
                                        0.00481    0.00000   -0.15153
                                        0.05398
                                        0.00000    0.03814
                                        0.00344    0.00000   -0.09212
multipole    71   69   69              -0.05826
                                       -0.00098    0.00000    0.01245
                                       -0.03242
                                        0.00000   -0.17444
                                       -0.15165    0.00000    0.20686
multipole    72   71   69               0.03588
                                        0.00392    0.00000   -0.14928
                                        0.04809
                                        0.00000    0.01292
                                        0.01455    0.00000   -0.06101
multipole    73   75    8              -0.08206
                                        0.35542    0.00000    0.06495
                                        0.41791
                                        0.00000   -0.63807
                                       -0.16042    0.00000    0.22016
multipole    74   73   75               0.09740
                                        0.02115    0.00000   -0.06112
                                        0.00978
                                        0.00000   -0.01888
                                        0.05469    0.00000    0.00910
multipole    75   73   76              -0.04596
                                        0.07761    0.00000    0.13512
                                        0.00091
                                        0.00000   -0.42529
                                       -0.06469    0.00000    0.42438
multipole    76   75   78               0.05037
                                        0.23670    0.00000    0.14269
                                        0.58628
                                        0.00000   -0.49067
                                        0.35910    0.00000   -0.09561
multipole    77   76   75               0.01064
                                       -0.00997    0.00000   -0.17138
                                        0.10326
                                        0.00000    0.09710
                                        0.00429    0.00000   -0.20036
multipole    78   76   80              -0.12462
                                       -0.10481    0.00000   -0.00347
                                        0.00581
                                        0.00000   -0.19007
                                       -0.11755    0.00000    0.18426
multipole    79   78   76               0.01162
                                        0.02013    0.00000   -0.18305
                                        0.05115
                                        0.00000    0.05109
                                       -0.00250    0.00000   -0.10224
multipole    80   81   78               0.34249
                                       -0.01127    0.00000    0.41324
                                       -0.24130
                                        0.00000   -0.40041
                                        0.28837    0.00000    0.64171
multipole    81   80   82              -0.46444
                                        0.19999    0.00000    0.00411
                                        0.31111
                                        0.00000   -0.30294
                                       -0.24184    0.00000   -0.00817
multipole    82   81   80               0.22927
                                       -0.06046    0.00000   -0.00959
                                       -0.06728
                                        0.00000   -0.09125
                                        0.00623    0.00000    0.15853
multipole    83    8   85              -0.14811
                                        0.11344    0.00000    0.39909
                                        0.03628
                                        0.00000   -0.47377
                                        0.02261    0.00000    0.43749
multipole    84   83   84               0.08044
                                        0.01404    0.00000   -0.09182
                                        0.04405
                                        0.00000    0.01752
                                        0.03456    0.00000   -0.06157
multipole    85   83   86              -0.21500
                                        0.00000    0.00000    0.19889
                                        0.43753
                                        0.00000   -0.84736
                                        0.00000    0.00000    0.40983
multipole    86   85   88              -0.04459
                                        0.32216    0.00000    0.13839
                                        0.73596
                                        0.00000   -0.60409
                                        0.25285    0.00000   -0.13187
multipole    87   86   85               0.01849
                                       -0.02121    0.00000   -0.10542
                                        0.08078
                                        0.00000    0.10479
                                       -0.00935    0.00000   -0.18557
multipole    88   86   90              -0.15802
                                        0.03729    0.00000    0.15665
                                        0.59432
                                        0.00000   -0.78857
                                        0.29227    0.00000    0.19425
multipole    89   88   90              -0.03234
                                        0.03781    0.00000   -0.15021
                                        0.16274
                                        0.00000    0.11972
                                        0.03565    0.00000   -0.28246
multipole    90   91   88               0.62054
                                        0.00000    0.00000    0.43281
                                        0.41363
                                        0.00000   -0.34255
                                        0.00000    0.00000   -0.07108
multipole    91   90   88              -0.91150
                                        0.00000    0.00000   -0.26161
                                       -0.27372
                                        0.00000    0.34305
                                        0.00000    0.00000   -0.06933
multipole    92    8   94              -0.16392
                                       -0.01358    0.00000    0.40504
                                       -0.28121
                                        0.00000   -0.40534
                                        0.19195    0.00000    0.68655
multipole    93   92   94               0.09307
                                        0.02678    0.00000   -0.03143
                                        0.01097
                                        0.00000   -0.00954
                                        0.00302    0.00000   -0.00143
multipole    94   95   97              -0.10518
                                       -0.33769    0.00000   -0.13606
                                        0.08389
                                        0.00000   -0.32705
                                        0.64420    0.00000    0.24316
multipole    95   98   94               0.06363
                                        0.00315    0.00000    0.45577
                                       -0.13664
                                        0.00000   -0.45223
                                        0.50170    0.00000    0.58887
multipole    96   95   98               0.02858
                                       -0.00357    0.00000   -0.19861
                                        0.04841
                                        0.00000    0.04990
                                       -0.01000    0.00000   -0.09831
multipole    97   94  101               0.00670
                                        0.26019    0.00000   -0.05143
                                        0.25420
                                        0.00000   -0.02804
                                       -0.10934    0.00000   -0.22616
multipole    98   95  100              -0.04014
                                        0.12242    0.00000    0.33257
                                        0.47182
                                        0.00000   -0.95073
                                        1.00232    0.00000    0.47891
multipole    99   98   95               0.08943
                                        0.00257    0.00000   -0.22473
                                        0.04808
                                        0.00000    0.07642
                                       -0.00228    0.00000   -0.12450
multipole   100   98  103               0.27213
                                       -0.01020    0.00000   -0.04090
                                       -0.56550
                                        0.00000   -0.84235
                                        0.01760    0.00000    1.40785
multipole   101  105   97              -0.21794
                                       -0.35298    0.00000    0.10109
                                       -0.40485
                                        0.00000    0.29036
                                        0.37638    0.00000    0.11449
multipole   102  101  105               0.00801
                                       -0.00224    0.00000   -0.18002
                                        0.06080
                                        0.00000    0.00560
                                       -0.00836    0.00000   -0.06640
multipole   103  107  100              -0.11761
                                       -0.14109    0.00000   -0.03991
                                       -0.10545
                                        0.00000    0.00849
                                        0.00884    0.00000    0.09696
multipole   104  103  107               0.00440
                                        0.00483    0.00000   -0.18511
                                        0.04514
                                        0.00000    0.03804
                                        0.00203    0.00000   -0.08318
multipole   105  101  107               0.10201
                                        0.39384    0.00000    0.16841
                                        0.80520
                                        0.00000   -0.74064
                                        0.63994    0.00000   -0.06456
multipole   106  105  101               0.00775
                                        0.00480    0.00000   -0.17770
                                        0.05191
                                        0.00000    0.02589
                                        0.00432    0.00000   -0.07780
multipole   107  105  103              -0.05764
                                       -0.04918    0.00000    0.00068
                                        0.03545
                                        0.00000   -0.17480
                                       -0.16395    0.00000    0.13935
multipole   108  107  105               0.00377
                                       -0.00056    0.00000   -0.18221
                                        0.03345
                                        0.00000    0.00061
                                       -0.01344    0.00000   -0.03406
multipole   109    8  111              -0.04139
                                        0.26299    0.00000    0.34265
                                       -0.03104
                                        0.00000   -0.66907
                                       -0.12227    0.00000    0.70011
multipole   110  109  111               0.12549
                                        0.00988    0.00000   -0.08472
                                       -0.00787
                                        0.00000   -0.01467
                                        0.00364    0.00000    0.02254
multipole   111  109  112               0.11571
                                        0.11091    0.00000    0.20553
                                        0.09544
                                        0.00000   -0.36654
                                       -0.23493    0.00000    0.27110
multipole   112  111  116              -0.06925
                                        0.09513    0.00000    0.18944
                                        0.51323
                                        0.00000   -0.62541
                                        0.37771    0.00000    0.11218
multipole   113  112  116               0.21415
                                        0.05363    0.00000   -0.13189
                                        0.01617
                                        0.00000    0.05352
                                       -0.01202    0.00000   -0.06969
multipole   114  111  118               0.01888
                                        0.16232    0.00000   -0.27102
                                        0.61022
                                        0.00000   -0.20124
                                       -0.21377    0.00000   -0.40898
multipole   115  114  118               0.06585
                                       -0.00990    0.00000   -0.23803
                                        0.03073
                                        0.00000    0.02508
                                       -0.00187    0.00000   -0.05581
multipole   116  112  118               0.36202
                                        0.26903    0.00000    0.11759
                                        0.06815
                                        0.00000   -0.21124
                                       -0.30196    0.00000    0.14309
multipole   117  116  118               0.08951
                                       -0.00197    0.00000   -0.23328
                                        0.03690
                                        0.00000    0.02486
                                       -0.00452    0.00000   -0.06176
multipole   118  114  116              -0.07427
                                       -0.05556    0.00000    0.07966
                                        0.34564
                                        0.00000   -0.66163
                                        0.31368    0.00000    0.31599
multipole   119  118  116               0.13793
                                       -0.00888    0.00000   -0.25043
                                        0.03808
                                        0.00000    0.02080
                                       -0.00306    0.00000   -0.05888
multipole   120    8  122              -0.07944
                                        0.17672    0.00000    0.30763
                                       -0.03832
                                        0.00000   -0.44609
                                       -0.06557    0.00000    0.48441
multipole   121  120  122               0.08230
                                        0.02308    0.00000   -0.08228
                                       -0.02794
                                        0.00000   -0.01021
                                       -0.00367    0.00000    0.03815
multipole   122  120  123               0.02915
                                        0.31598    0.00000    0.18435
                                        0.34260
                                        0.00000   -0.59879
                                       -0.18441    0.00000    0.25619
multipole   123  122  127              -0.20791
                                        0.39981    0.00000    0.32325
                                        0.06377
                                        0.00000   -0.53895
                                        0.03531    0.00000    0.47518
multipole   124  123  127               0.22642
                                        0.02304    0.00000   -0.11797
                                       -0.16063
                                        0.00000   -0.09414
                                       -0.05024    0.00000    0.25477
multipole   125  122  129               0.02645
                                        0.22620    0.00000   -0.16529
                                        0.33999
                                        0.00000   -0.44311
                                       -0.21659    0.00000    0.10312
multipole   126  125  129               0.05039
                                        0.02238    0.00000   -0.15563
                                        0.06418
                                        0.00000   -0.03197
                                       -0.06839    0.00000   -0.03221
multipole   127  123  129               0.27710
                                        0.29162    0.00000    0.20834
                                       -0.08914
                                        0.00000   -0.52843
                                       -0.39844    0.00000    0.61757
multipole   128  127  129               0.07110
                                       -0.02202    0.00000   -0.17142
                                        0.20449
                                        0.00000   -0.02865
                                        0.00605    0.00000   -0.17584
multipole   129  125  127              -0.48774
                                        0.22946    0.00000    0.26151
                                        0.03809
                                        0.00000   -0.11680
                                       -0.10207    0.00000    0.07871
multipole   130    8  132              -0.07191
                                        0.28159    0.00000    0.28143
                                        0.31037
                                        0.00000   -0.69057
                                        0.12423    0.00000    0.38020
multipole   131  130  132               0.09317
                                        0.00776    0.00000   -0.05959
                                       -0.00489
                                        0.00000   -0.01510
                                       -0.03160    0.00000    0.01999
multipole   132  130  133               0.21765
                                        0.29985    0.00000    0.02736
                                        0.07615
                                        0.00000   -0.68598
                                        0.04724    0.00000    0.60983
multipole   133  132  136              -0.58085
                                        0.22726    0.00000    0.17315
                                       -0.01899
                                        0.00000    0.04259
                                       -0.10366    0.00000   -0.02360
multipole   134  132  138              -0.05319
                                        0.24583    0.00000   -0.18287
                                        0.72454
                                        0.00000   -0.35866
                                       -0.27504    0.00000   -0.36588
multipole   135  134  138               0.03309
                                       -0.01543    0.00000   -0.18397
                                        0.06413
                                        0.00000    0.01079
                                        0.00873    0.00000   -0.07492
multipole   136  133  138               0.31901
                                        0.20503    0.00000    0.21136
                                        0.19503
                                        0.00000   -0.33727
                                       -0.42894    0.00000    0.14224
multipole   137  136  138               0.03395
                                       -0.03428    0.00000   -0.19515
                                        0.05553
                                        0.00000    0.03619
                                       -0.01089    0.00000   -0.09172
multipole   138  134  136              -0.11867
                                       -0.00875    0.00000    0.10083
                                        0.20131
                                        0.00000   -0.72000
                                        0.25215    0.00000    0.51869
multipole   139  138  136               0.10470
                                        0.00835    0.00000   -0.20453
                                        0.03062
                                        0.00000    0.01424
                                        0.02385    0.00000   -0.04486
multipole   140    8  142              -0.33040
                                       -0.11155    0.00000    0.33205
                                       -0.61968
                                        0.00000   -0.26472
                                       -0.14505    0.00000    0.88440
multipole   141  140  142               0.04893
                                        0.05143    0.00000   -0.06648
                                        0.28508
                                        0.00000    0.01019
                                        0.01023    0.00000   -0.29527
multipole   142 -143 -143               1.01644
                                        0.00000    0.00000    0.08388
                                        0.38943
                                        0.00000   -0.40574
                                       -0.48759    0.00000    0.01631
multipole   143  142  140              -0.85689
                                       -0.12334    0.00000   -0.17900
                                       -0.30556
                                        0.00000    0.15089
                                       -0.25593    0.00000    0.15467
multipole   144    8  146              -0.09907
                                        0.28314    0.00000    0.21299
                                       -0.02365
                                        0.00000   -0.44590
                                       -0.11454    0.00000    0.46955
multipole   145  144  146               0.09104
                                       -0.00783    0.00000   -0.03880
                                        0.00300
                                        0.00000   -0.02251
                                        0.00366    0.00000    0.01951
multipole   146  147  148               0.80267
                                        0.20023    0.00000    0.07448
                                        0.19047
                                        0.00000   -0.27645
                                       -0.23208    0.00000    0.08598
multipole   147  146  148              -0.61184
                                       -0.02970    0.00000   -0.14127
                                       -0.46989
                                        0.00000    0.30054
                                       -0.03964    0.00000    0.16935
multipole   148  146  149              -0.44451
                                        0.25436    0.00000   -0.00470
                                        0.30396
                                        0.00000   -0.42103
                                       -0.22422    0.00000    0.11707
multipole   149  148  146               0.24079
                                       -0.02916    0.00000   -0.07474
                                       -0.05892
                                        0.00000   -0.07642
                                       -0.01164    0.00000    0.13534
multipole   150    8  152              -0.15072
                                        0.21350    0.00000    0.26252
                                        0.05371
                                        0.00000   -0.51087
                                       -0.14685    0.00000    0.45716
multipole   151  150  152               0.09679
                                        0.03329    0.00000   -0.09671
                                        0.39142
                                        0.00000   -0.06880
                                        0.00874    0.00000   -0.32262
multipole   152  154  153               0.76960
                                        0.30627    0.00000   -0.09362
                                        0.21156
                                        0.00000   -0.39797
                                        0.03345    0.00000    0.18641
multipole   153  152  154              -0.72950
                                       -0.03688    0.00000   -0.16002
                                       -0.27527
                                        0.00000    0.26973
                                        0.01067    0.00000    0.00554
multipole   154  152  153              -0.38020
                                        0.09353    0.00000    0.22182
                                       -0.15418
                                        0.00000   -0.46630
                                        0.22562    0.00000    0.62048
multipole   155  154  152               0.18368
                                       -0.03978    0.00000   -0.31735
                                        0.10703
                                        0.00000    0.19471
                                       -0.10853    0.00000   -0.30174
multipole   156    8  158               0.00410
                                        0.19527    0.00000    0.18895
                                        0.21464
                                        0.00000   -0.87217
                                       -0.58720    0.00000    0.65753
multipole   157  156  158               0.04082
                                        0.05593    0.00000   -0.13609
                                        0.19339
                                        0.00000    0.00486
                                        0.13648    0.00000   -0.19825
multipole   158  156  160              -0.36014
                                       -0.21199    0.00000    0.25528
                                       -0.92519
                                        0.00000    0.11101
                                       -0.02016    0.00000    0.81418
multipole   159  158  160              -0.00356
                                        0.01435    0.00000   -0.03733
                                        0.30641
                                        0.00000   -0.10229
                                       -0.17820    0.00000   -0.20412
multipole   160 -161 -161               1.14596
                                        0.00000    0.00000   -0.08110
                                        0.47468
                                        0.00000   -0.53790
                                       -0.20865    0.00000    0.06322
multipole   161  160  161              -0.89716
                                        0.23089    0.00000   -0.27964
                                       -0.48791
                                        0.00000    0.28534
                                        0.25648    0.00000    0.20257
multipole   162    8  164              -0.07714
                                        0.26038    0.00000    0.20993
                                        0.22883
                                        0.00000   -0.64833
                                       -0.23553    0.00000    0.41950
multipole   163  162    8               0.09378
                                       -0.01574    0.00000   -0.05078
                                       -0.02530
                                        0.00000    0.00147
                                        0.02003    0.00000    0.02383
multipole   164  162  166              -0.20674
                                        0.26277    0.00000    0.16246
                                       -0.04934
                                        0.00000   -0.40226
                                       -0.12563    0.00000    0.45160
multipole   165  164  166               0.09104
                                       -0.00783    0.00000   -0.03880
                                        0.00300
                                        0.00000   -0.02251
                                        0.00366    0.00000    0.01951
multipole   166  167  168               0.80267
                                        0.20023    0.00000    0.07448
                                        0.19047
                                        0.00000   -0.27645
                                       -0.23208    0.00000    0.08598
multipole   167  166  168              -0.61184
                                       -0.02970    0.00000   -0.14127
                                       -0.46989
                                        0.00000    0.30054
                                       -0.03964    0.00000    0.16935
multipole   168  166  169              -0.44451
                                        0.25436    0.00000   -0.00470
                                        0.30396
                                        0.00000   -0.42103
                                       -0.22422    0.00000    0.11707
multipole   169  168  166               0.24079
                                       -0.02916    0.00000   -0.07474
                                       -0.05892
                                        0.00000   -0.07642
                                       -0.01164    0.00000    0.13534
multipole   170    8  172              -0.12108
                                        0.20829    0.00000    0.25236
                                        0.20153
                                        0.00000   -0.62121
                                       -0.31273    0.00000    0.41968
multipole   171  170    8               0.05947
                                       -0.00523    0.00000   -0.09278
                                       -0.00153
                                        0.00000    0.01003
                                        0.11637    0.00000   -0.00850
multipole   172  170  174              -0.14858
                                        0.36021    0.00000    0.30124
                                        0.02345
                                        0.00000   -0.56744
                                        0.02425    0.00000    0.54399
multipole   173  172  174               0.09679
                                        0.03329    0.00000   -0.09671
                                        0.39142
                                        0.00000   -0.06880
                                        0.00874    0.00000   -0.32262
multipole   174  176  175               0.76960
                                        0.30627    0.00000   -0.09362
                                        0.21156
                                        0.00000   -0.39797
                                        0.03345    0.00000    0.18641
multipole   175  174  176              -0.72950
                                       -0.03688    0.00000   -0.16002
                                       -0.27527
                                        0.00000    0.26973
                                        0.01067    0.00000    0.00554
multipole   176  174  175              -0.38020
                                        0.09353    0.00000    0.22182
                                       -0.15418
                                        0.00000   -0.46630
                                        0.22562    0.00000    0.62048
multipole   177  176  174               0.18368
                                       -0.03978    0.00000   -0.31735
                                        0.10703
                                        0.00000    0.19471
                                       -0.10853    0.00000   -0.30174
multipole   178    8  180              -0.02949
                                        0.25798    0.00000    0.20067
                                        0.18156
                                        0.00000   -0.53649
                                       -0.23437    0.00000    0.35493
multipole   179  178  180               0.06373
                                        0.02199    0.00000   -0.08918
                                       -0.00122
                                        0.00000    0.01893
                                        0.07446    0.00000   -0.01771
multipole   180  182  178              -0.07285
                                        0.10294    0.00000   -0.14760
                                        0.07610
                                        0.00000    0.00950
                                       -0.40971    0.00000   -0.08560
multipole   181  180  182               0.00251
                                        0.00920    0.00000   -0.06833
                                        0.06767
                                        0.00000   -0.04966
                                        0.05119    0.00000   -0.01801
multipole   182  180  183               0.06969
                                        0.45487    0.00000    0.40067
                                        1.23884
                                        0.00000   -2.84799
                                       -0.97916    0.00000    1.60915
multipole   183  182  180              -0.15553
                                        0.07637    0.00000    0.05437
                                       -0.24774
                                        0.00000    0.25322
                                        0.17760    0.00000   -0.00548
multipole   184  183  182               0.04194
                                        0.01008    0.00000   -0.10323
                                        0.07224
                                        0.00000   -0.02305
                                       -0.03128    0.00000   -0.04919
multipole   185    8  187               0.01417
                                        0.14321    0.00000    0.20704
                                        0.30355
                                        0.00000   -0.78336
                                       -0.49884    0.00000    0.47981
multipole   186  185  187               0.06168
                                        0.01034    0.00000   -0.06926
                                       -0.00481
                                        0.00000   -0.01041
                                        0.00120    0.00000    0.01522
multipole   187  189  185              -0.14658
                                        0.07407    0.00000    0.27751
                                       -0.00731
                                        0.00000   -0.45713
                                       -0.03370    0.00000    0.46444
multipole   188  187  188               0.07914
                                       -0.02214    0.00000   -0.05705
                                       -0.01403
                                        0.00000   -0.00903
                                       -0.01009    0.00000    0.02306
multipole   189  191  187              -0.12517
                                        0.10322    0.00000    0.30901
                                       -0.01151
                                        0.00000   -0.54904
                                       -0.16768    0.00000    0.56055
multipole   190  189  190               0.07947
                                       -0.01804    0.00000   -0.05617
                                       -0.00416
                                        0.00000   -0.02346
                                       -0.00980    0.00000    0.02762
multipole   191  193  189              -0.00637
                                        0.14897    0.00000    0.45848
                                       -0.16613
                                        0.00000   -0.75850
                                       -0.13391    0.00000    0.92463
multipole   192  191  192               0.10424
                                       -0.02167    0.00000   -0.06885
                                        0.00577
                                        0.00000   -0.00847
                                       -0.00310    0.00000    0.00270
multipole   193  191  194               0.10679
                                        0.00000    0.00000    0.12676
                                       -0.16979
                                        0.00000   -0.13104
                                        0.03239    0.00000    0.30083
multipole   194  193  191               0.19274
                                        0.03789    0.00000   -0.14079
                                        0.01248
                                        0.00000   -0.00338
                                        0.01511    0.00000   -0.00910
multipole   195    8  197               0.01417
                                        0.14321    0.00000    0.20704
                                        0.30355
                                        0.00000   -0.78336
                                       -0.49884    0.00000    0.47981
multipole   196  195  197               0.06168
                                        0.01034    0.00000   -0.06926
                                       -0.00481
                                        0.00000   -0.01041
                                        0.00120    0.00000    0.01522
multipole   197  195  199              -0.23796
                                        0.19414    0.00000    0.14744
                                        0.14341
                                        0.00000   -0.47693
                                       -0.11332    0.00000    0.33352
multipole   198  197  198               0.07914
                                       -0.02214    0.00000   -0.05705
                                       -0.01403
                                        0.00000   -0.00903
                                       -0.01009    0.00000    0.02306
multipole   199  197  201              -0.11624
                                        0.21269    0.00000    0.09089
                                        0.20210
                                        0.00000   -0.39596
                                       -0.20937    0.00000    0.19386
multipole   200  199  200               0.05672
                                       -0.01831    0.00000   -0.07935
                                        0.15924
                                        0.00000   -0.06424
                                        0.10917    0.00000   -0.09500
multipole   201  203  199               0.11242
                                        0.21133    0.00000    0.33886
                                        0.02196
                                        0.00000   -0.48911
                                       -0.25303    0.00000    0.46715
multipole   202  201  202               0.02390
                                        0.01872    0.00000   -0.12033
                                        0.09851
                                        0.00000    0.11826
                                        0.07069    0.00000   -0.21677
multipole   203  201 -204 -204         -0.30941
                                        0.33655    0.00000    0.15544
                                       -0.89694
                                        0.00000    0.57332
                                       -0.40985    0.00000    0.32362
multipole   204  203  201               0.08213
                                       -0.02480    0.00000   -0.10241
                                       -0.09247
                                        0.00000   -0.02510
                                        0.06165    0.00000    0.11757
multipole   205    8  207              -0.05810
                                        0.20447    0.00000    0.22675
                                        0.15418
                                        0.00000   -0.61290
                                       -0.20381    0.00000    0.45872
multipole   206  205  207               0.07332
                                        0.02865    0.00000   -0.07066
                                       -0.01727
                                        0.00000    0.05136
                                       -0.02048    0.00000   -0.03409
multipole   207  205  209              -0.12460
                                        0.34262    0.00000    0.10892
                                        0.29827
                                        0.00000   -0.61801
                                       -0.41083    0.00000    0.31974
multipole   208  207  208               0.10013
                                       -0.02406    0.00000   -0.04574
                                        0.04356
                                        0.00000    0.04278
                                        0.03604    0.00000   -0.08634
multipole   209  207  211              -0.00504
                                        0.31217    0.00000    0.12183
                                        0.63851
                                        0.00000   -0.60326
                                       -0.42746    0.00000   -0.03525
multipole   210  209  210               0.06386
                                        0.00521    0.00000   -0.12606
                                        0.06805
                                        0.00000    0.12031
                                        0.04448    0.00000   -0.18836
multipole   211  209  213              -0.26789
                                       -0.17032    0.00000    0.38423
                                        0.13132
                                        0.00000   -0.85952
                                        0.18957    0.00000    0.72820
multipole   212  211  213               0.14895
                                       -0.02053    0.00000   -0.19388
                                        0.07464
                                        0.00000    0.03688
                                        0.08593    0.00000   -0.11152
multipole   213 -214 -214               0.90680
                                        0.00412    0.00000    0.01818
                                       -0.11120
                                        0.00000    0.07010
                                       -0.02109    0.00000    0.04110
multipole   214  213  214              -0.30169
                                       -0.00168    0.00000   -0.24721
                                        0.43113
                                        0.00000   -0.69170
                                       -0.07379    0.00000    0.26057
multipole   215  214  213               0.14969
                                        0.01642    0.00000   -0.22002
                                        0.17410
                                        0.00000   -0.03308
                                       -0.02767    0.00000   -0.14102
multipole   216    8  218               0.01417
                                        0.14321    0.00000    0.20704
                                        0.30355
                                        0.00000   -0.78336
                                       -0.49884    0.00000    0.47981
multipole   217  216  218               0.06168
                                        0.01034    0.00000   -0.06926
                                       -0.00481
                                        0.00000   -0.01041
                                        0.00120    0.00000    0.01522
multipole   218  220  216              -0.12127
                                        0.10322    0.00000    0.30901
                                       -0.01151
                                        0.00000   -0.54904
                                       -0.16768    0.00000    0.56055
multipole   219  218  219               0.08337
                                       -0.01804    0.00000   -0.05617
                                       -0.00416
                                        0.00000   -0.02346
                                       -0.00980    0.00000    0.02762
multipole   220  222  218              -0.00637
                                        0.14897    0.00000    0.45848
                                       -0.16613
                                        0.00000   -0.75850
                                       -0.13391    0.00000    0.92463
multipole   221  220  221               0.10424
                                       -0.02167    0.00000   -0.06885
                                        0.00577
                                        0.00000   -0.00847
                                       -0.00310    0.00000    0.00270
multipole   222  220  223               0.10679
                                        0.00000    0.00000    0.12676
                                       -0.16979
                                        0.00000   -0.13104
                                        0.03239    0.00000    0.30083
multipole   223  222  220               0.19274
                                        0.03789    0.00000   -0.14079
                                        0.01248
                                        0.00000   -0.00338
                                        0.01511    0.00000   -0.00910
multipole   224  226  227              -0.19495
                                       -0.05933    0.00000    0.30647
                                       -0.12000
                                        0.00000   -0.18289
                                        0.06006    0.00000    0.30289
multipole   225  224  226               0.07797
                                       -0.00148    0.00000   -0.10232
                                        0.00077
                                        0.00000   -0.01358
                                        0.00508    0.00000    0.01281
multipole   226  227  224               0.70656
                                       -0.28625    0.00000    0.40485
                                        0.09631
                                        0.00000   -0.19283
                                        0.05482    0.00000    0.09652
multipole   227  226  224              -0.74615
                                        0.10832    0.00000   -0.15915
                                       -0.51576
                                        0.00000    0.23754
                                        0.12638    0.00000    0.27822
multipole   228 -229 -229              -0.25887
                                        0.00000    0.00000    0.11888
                                        0.60320
                                        0.00000   -0.68404
                                       -0.03938    0.00000    0.08084
multipole   229  228  229               0.12975
                                        0.00964    0.00000   -0.17930
                                        0.02173
                                        0.00000   -0.03357
                                        0.00745    0.00000    0.01184
multipole   230  232  231              -0.27516
                                        0.12868    0.00000    0.29428
                                        0.13167
                                        0.00000   -0.77946
                                       -0.26698    0.00000    0.64779
multipole   231  230  232               0.12524
                                        0.04469    0.00000   -0.11589
                                        0.03867
                                        0.00000   -0.05683
                                        0.02734    0.00000    0.01816
multipole   232  230  231              -0.00902
                                        0.04962    0.00000    0.26123
                                       -0.42853
                                        0.00000   -0.34055
                                        0.01113    0.00000    0.76908
multipole   233  232  230               0.05319
                                       -0.00200    0.00000   -0.11501
                                        0.00409
                                        0.00000   -0.00544
                                       -0.00819    0.00000    0.00135
multipole   234    2  235               0.11164
                                        0.00000    0.00000    0.13883
                                       -0.17000
                                        0.00000   -0.34475
                                       -0.01419    0.00000    0.51475
multipole   234    8  235               0.11164
                                        0.00000    0.00000    0.13883
                                       -0.17000
                                        0.00000   -0.34475
                                       -0.01419    0.00000    0.51475
multipole   234   33  235               0.11164
                                        0.00000    0.00000    0.13883
                                       -0.17000
                                        0.00000   -0.34475
                                       -0.01419    0.00000    0.51475
multipole   234   44  235               0.11164
                                        0.00000    0.00000    0.13883
                                       -0.17000
                                        0.00000   -0.34475
                                       -0.01419    0.00000    0.51475
multipole   235  234    2               0.21240
                                        0.00000    0.00000   -0.12490
                                        0.03622
                                        0.00000   -0.01437
                                        0.00000    0.00000   -0.02185
multipole   235  234    8               0.21240
                                        0.00000    0.00000   -0.12490
                                        0.03622
                                        0.00000   -0.01437
                                        0.00000    0.00000   -0.02185
multipole   235  234   33               0.21240
                                        0.00000    0.00000   -0.12490
                                        0.03622
                                        0.00000   -0.01437
                                        0.00000    0.00000   -0.02185
multipole   235  234   44               0.21240
                                        0.00000    0.00000   -0.12490
                                        0.03622
                                        0.00000   -0.01437
                                        0.00000    0.00000   -0.02185
multipole   236    2 -237 -237         -0.29203
                                        0.39162    0.00000    0.29820
                                       -0.82241
                                        0.00000    0.30190
                                       -0.26688    0.00000    0.52051
multipole   236    8 -237 -237         -0.29203
                                        0.39162    0.00000    0.29820
                                       -0.82241
                                        0.00000    0.30190
                                       -0.26688    0.00000    0.52051
multipole   236   33 -237 -237         -0.29203
                                        0.39162    0.00000    0.29820
                                       -0.82241
                                        0.00000    0.30190
                                       -0.26688    0.00000    0.52051
multipole   236   44 -237 -237         -0.29203
                                        0.39162    0.00000    0.29820
                                       -0.82241
                                        0.00000    0.30190
                                       -0.26688    0.00000    0.52051
multipole   237  236  237               0.09729
                                       -0.02365    0.00000   -0.07786
                                       -0.02419
                                        0.00000   -0.00850
                                       -0.00527    0.00000    0.03269
multipole   238 -239 -239               1.02669
                                        0.00000    0.00000   -0.06887
                                        0.36390
                                        0.00000   -0.45669
                                        0.00000    0.00000    0.09279
multipole   239  238  239              -0.90443
                                        0.19119    0.00000   -0.19259
                                       -0.45071
                                        0.00000    0.24406
                                        0.16925    0.00000    0.20665
multipole   240  241    2               0.90327
                                       -0.07798    0.00000    0.05629
                                        0.20073
                                        0.00000   -0.34953
                                        0.34032    0.00000    0.14880
multipole   240  241    8               0.90327
                                       -0.07798    0.00000    0.05629
                                        0.20073
                                        0.00000   -0.34953
                                        0.34032    0.00000    0.14880
multipole   240  241   33               0.90327
                                       -0.07798    0.00000    0.05629
                                        0.20073
                                        0.00000   -0.34953
                                        0.34032    0.00000    0.14880
multipole   240  241   44               0.90327
                                       -0.07798    0.00000    0.05629
                                        0.20073
                                        0.00000   -0.34953
                                        0.34032    0.00000    0.14880
multipole   241  240    2              -0.65062
                                       -0.01381    0.00000   -0.15899
                                       -0.50252
                                        0.00000    0.31170
                                       -0.01833    0.00000    0.19082
multipole   241  240    8              -0.65062
                                       -0.01381    0.00000   -0.15899
                                       -0.50252
                                        0.00000    0.31170
                                       -0.01833    0.00000    0.19082
multipole   241  240   33              -0.65062
                                       -0.01381    0.00000   -0.15899
                                       -0.50252
                                        0.00000    0.31170
                                       -0.01833    0.00000    0.19082
multipole   241  240   44              -0.65062
                                       -0.01381    0.00000   -0.15899
                                       -0.50252
                                        0.00000    0.31170
                                       -0.01833    0.00000    0.19082
multipole   242  240  243              -0.47859
                                        0.29403    0.00000   -0.07342
                                        0.32137
                                        0.00000   -0.37927
                                       -0.15981    0.00000    0.05790
multipole   243  242  240               0.24567
                                       -0.01982    0.00000   -0.07068
                                       -0.05831
                                        0.00000   -0.07908
                                       -0.01391    0.00000    0.13739
multipole   244  246  250               0.07219
                                        0.28913    0.00000    0.29472
                                        0.20132
                                        0.00000   -0.54286
                                        0.05155    0.00000    0.34154
multipole   245  244  245               0.23262
                                       -0.02789    0.00000   -0.04288
                                        0.00231
                                        0.00000    0.03311
                                       -0.02313    0.00000   -0.03542
multipole   246  244  247              -0.16428
                                        0.16276    0.20457    0.47894
                                       -0.28250
                                       -0.26022   -0.34943
                                        0.25272   -0.20303    0.63193
multipole   247  248  246               0.93900
                                        0.00000    0.00000    0.32359
                                        0.14171
                                        0.00000   -0.31370
                                        0.03825    0.00000    0.17199
multipole   248  247  246              -0.74794
                                        0.02444    0.00000   -0.13267
                                       -0.59982
                                        0.00000    0.24285
                                       -0.01926    0.00000    0.35697
multipole   249  246   58               0.12611
                                        0.01772    0.00000    0.00501
                                        0.02059
                                        0.00000   -0.01260
                                        0.01759    0.00000   -0.00799
multipole   250   60  244              -0.04567
                                        0.56406    0.00000    0.09733
                                        0.69818
                                        0.00000   -0.78665
                                       -0.18468    0.00000    0.08847
multipole   251  250  244               0.10559
                                       -0.01503    0.00000   -0.07122
                                        0.00434
                                        0.00000   -0.00248
                                       -0.01523    0.00000   -0.00186
multipole   252  256  253              -0.12218
                                        0.03811    0.00000   -0.08600
                                        0.62317
                                        0.00000   -1.19258
                                        0.19520    0.00000    0.56941
multipole   253  257  252               0.10618
                                        0.14960    0.00000   -0.12837
                                        0.37561
                                        0.00000   -1.08479
                                       -0.08751    0.00000    0.70918
multipole   254  255  260               0.03294
                                       -0.03102    0.00000    0.00884
                                        0.54936
                                        0.00000   -1.16758
                                       -0.21224    0.00000    0.61822
multipole   255  256  254              -0.29610
                                        0.61528    0.00000    0.42732
                                        0.23662
                                        0.00000   -0.71274
                                       -0.59516    0.00000    0.47612
multipole   256  255  252               0.12091
                                        0.29466    0.00000    0.04441
                                        0.57178
                                        0.00000   -0.97127
                                        0.05984    0.00000    0.39949
multipole   257  258  253              -0.28556
                                        0.65052    0.00000    0.32181
                                        0.12041
                                        0.00000   -0.70422
                                       -0.73445    0.00000    0.58381
multipole   258  259  257               0.09440
                                        0.17177    0.00000    0.08338
                                        0.42911
                                        0.00000   -0.89289
                                       -0.05831    0.00000    0.46378
multipole   259  260  258              -0.30504
                                        0.51018    0.00000    0.44518
                                       -0.10277
                                        0.00000   -0.67553
                                       -0.76206    0.00000    0.77830
multipole   260  259  262               0.11701
                                       -0.02847    0.00000   -0.01015
                                        0.48527
                                        0.00000   -0.91170
                                        0.00027    0.00000    0.42643
multipole   261  258  259               0.10987
                                        0.00260    0.00000    0.16138
                                       -0.00401
                                        0.00000   -0.14100
                                       -0.00062    0.00000    0.14501
multipole   262  260  263              -0.28195
                                        0.00000    0.00000    0.28691
                                        0.77307
                                        0.00000   -1.54614
                                        0.00000    0.00000    0.77307
multipole   263  262  260               0.23408
                                        0.03256    0.00000    0.10841
                                        0.00094
                                        0.00000   -0.15824
                                       -0.00749    0.00000    0.15730
multipole   264  262  260               0.23408
                                        0.03256    0.00000    0.10841
                                        0.00094
                                        0.00000   -0.15824
                                       -0.00749    0.00000    0.15730
multipole   265  256  252               0.12346
                                        0.00882    0.00000    0.15889
                                       -0.01175
                                        0.00000   -0.14419
                                        0.01352    0.00000    0.15594
multipole   266  267  271              -0.12896
                                       -0.11355    0.00000    0.02174
                                        0.67152
                                        0.00000   -1.21177
                                       -0.10266    0.00000    0.54025
multipole   267  272  268               0.25555
                                       -0.14070    0.00000   -0.03554
                                        0.26985
                                       -0.00001   -0.69302
                                       -0.03330    0.00000    0.42317
multipole   268  267  269              -0.29612
                                        0.53921    0.00000    0.28660
                                       -0.04511
                                        0.00000   -0.75164
                                       -0.89326    0.00000    0.79675
multipole   269  268  273               0.10206
                                        0.01957    0.00000    0.12801
                                        0.47115
                                        0.00000   -0.89630
                                       -0.01741    0.00000    0.42515
multipole   270  269  271              -0.08445
                                        0.15647    0.00000    0.19000
                                        0.70078
                                        0.00000   -1.36350
                                        0.01622    0.00000    0.66272
multipole   271  266  270               0.09191
                                        0.09270    0.00000    0.29758
                                        0.55799
                                        0.00000   -1.06685
                                       -0.02963    0.00000    0.50886
multipole   272  267  266              -0.42963
                                       -0.05223    0.00000    0.54613
                                       -0.69717
                                        0.00000   -0.34383
                                        0.07116    0.00000    1.04100
multipole   273  269  274              -0.28291
                                        0.00000    0.00000    0.25147
                                        0.76777
                                        0.00000   -1.53554
                                        0.00000    0.00000    0.76777
multipole   274  273  269               0.22172
                                        0.03599    0.00000    0.11263
                                       -0.00271
                                        0.00000   -0.15749
                                        0.00206    0.00000    0.16020
multipole   275  273  269               0.22172
                                        0.03599    0.00000    0.11263
                                       -0.00271
                                        0.00000   -0.15749
                                        0.00206    0.00000    0.16020
multipole   276  270  269               0.09969
                                        0.02298    0.00000    0.17496
                                        0.00319
                                        0.00000   -0.16978
                                       -0.00323    0.00000    0.16659
multipole   277  271  266               0.11152
                                        0.02437    0.00000    0.17240
                                       -0.00098
                                        0.00000   -0.14128
                                        0.00098    0.00000    0.14226
multipole   278  282  279              -0.12123
                                        0.03277    0.00000   -0.10629
                                        0.63111
                                        0.00000   -1.19809
                                        0.19068    0.00000    0.56698
multipole   279  283  278               0.11988
                                        0.19633    0.00000   -0.06061
                                        0.38997
                                        0.00000   -1.12316
                                       -0.07428    0.00000    0.73319
multipole   280  281  286               0.05939
                                       -0.10783    0.00000    0.02921
                                        0.63397
                                        0.00000   -1.23333
                                       -0.17725    0.00000    0.59936
multipole   281  282  280              -0.25427
                                        0.59171    0.00000    0.39016
                                        0.15889
                                        0.00000   -0.73445
                                       -0.53511    0.00000    0.57556
multipole   282  281  278               0.05900
                                        0.29666    0.00000    0.03459
                                        0.59303
                                        0.00000   -1.00768
                                        0.05948    0.00000    0.41465
multipole   283  284  279              -0.32183
                                        0.57617    0.00000    0.41136
                                        0.04364
                                        0.00000   -0.79668
                                       -0.81270    0.00000    0.75304
multipole   284  283  285               0.16650
                                        0.04683    0.00000    0.10382
                                        0.42221
                                        0.00000   -0.84366
                                        0.03151    0.00000    0.42145
multipole   285  286  284              -0.20681
                                        0.13302    0.00000    0.01206
                                        0.66907
                                        0.00000   -1.32924
                                       -0.20370    0.00000    0.66017
multipole   286  291  285               0.22596
                                        0.01495    0.00000   -0.07785
                                        0.18997
                                        0.00000   -0.72984
                                        0.02836    0.00000    0.53987
multipole   287  285  286               0.25827
                                       -0.01369    0.00000    0.11644
                                        0.02819
                                        0.00000   -0.12664
                                       -0.01016    0.00000    0.09845
multipole   288  284  289              -0.30237
                                        0.00000    0.00000    0.28852
                                        0.63383
                                        0.00000   -1.56322
                                        0.00000    0.00000    0.92939
multipole   289  288  284               0.22815
                                        0.03988    0.00000    0.11016
                                       -0.00150
                                        0.00000   -0.16140
                                        0.00075    0.00000    0.16290
multipole   290  288  284               0.22815
                                        0.03988    0.00000    0.11016
                                       -0.00150
                                        0.00000   -0.16140
                                        0.00075    0.00000    0.16290
multipole   291  286  285              -0.37776
                                       -0.06443    0.00000    0.49534
                                       -0.70985
                                        0.00000   -0.26340
                                        0.02536    0.00000    0.97325
multipole   292  282  278               0.12107
                                        0.01058    0.00000    0.15550
                                       -0.00871
                                        0.00000   -0.14972
                                        0.01430    0.00000    0.15843
multipole   293  294  298              -0.15031
                                       -0.09046    0.00000    0.02457
                                        0.65601
                                        0.00000   -1.24652
                                       -0.08497    0.00000    0.59051
multipole   294  299  293               0.25814
                                        0.18207    0.00000   -0.10742
                                        0.22241
                                        0.00000   -0.69573
                                        0.00586    0.00000    0.47332
multipole   295  294  296              -0.18494
                                        0.09040    0.00000    0.07592
                                        0.52488
                                        0.00000   -1.31753
                                       -0.14409    0.00000    0.79265
multipole   296  301  295               0.20468
                                       -0.03331    0.00000   -0.08396
                                        0.22917
                                        0.00000   -0.73017
                                       -0.00765    0.00000    0.50100
multipole   297  296  298              -0.10776
                                       -0.07708    0.00000    0.02024
                                        0.69315
                                        0.00000   -1.22595
                                       -0.07168    0.00000    0.53280
multipole   298  293  297               0.02014
                                        0.13147    0.00000    0.23798
                                        0.52729
                                        0.00000   -1.10293
                                       -0.13608    0.00000    0.57564
multipole   299  294  293              -0.42656
                                       -0.00821    0.00000    0.52363
                                       -0.76229
                                        0.00000   -0.32575
                                        0.04661    0.00000    1.08804
multipole   300  295  294               0.27344
                                        0.00655    0.00000    0.12419
                                        0.02392
                                        0.00000   -0.12278
                                       -0.00027    0.00000    0.09886
multipole   301  296  295              -0.40427
                                        0.01291    0.00000    0.51762
                                       -0.81344
                                        0.00000   -0.24421
                                       -0.00636    0.00000    1.05765
multipole   302  297  303              -0.09928
                                        0.00000    0.00000    0.16142
                                       -0.10106
                                        0.00000   -0.10106
                                        0.00000    0.00000    0.20212
multipole   303  302  297               0.12786
                                        0.04661    0.00000    0.13652
                                       -0.04143
                                        0.00000   -0.10340
                                       -0.01205    0.00000    0.14483
multipole   304  298  293               0.11524
                                        0.01748    0.00000    0.18372
                                        0.01572
                                        0.00000   -0.13911
                                       -0.00351    0.00000    0.12339
multipole   305  306  310              -0.11970
                                       -0.12748    0.00000    0.03261
                                        0.65308
                                        0.00000   -1.23647
                                       -0.08490    0.00000    0.58339
multipole   306  311  305               0.26026
                                        0.18047    0.00000   -0.06071
                                        0.22206
                                        0.00000   -0.68694
                                        0.00805    0.00000    0.46488
multipole   307  306  308              -0.18804
                                        0.05643    0.00000    0.09035
                                        0.51668
                                        0.00000   -1.31595
                                       -0.14138    0.00000    0.79927
multipole   308  313  307               0.20160
                                        0.08304    0.00000   -0.05600
                                        0.14871
                                        0.00000   -0.69528
                                       -0.00421    0.00000    0.54657
multipole   309  308  310              -0.05028
                                        0.13971    0.00000    0.11658
                                        0.72742
                                        0.00000   -1.30088
                                       -0.08699    0.00000    0.57346
multipole   310  305  309               0.07568
                                        0.05068    0.00000    0.30269
                                        0.54514
                                        0.00000   -1.07260
                                       -0.06180    0.00000    0.52746
multipole   311  306  305              -0.42057
                                       -0.00798    0.00000    0.50266
                                       -0.76279
                                        0.00000   -0.31846
                                        0.04824    0.00000    1.08125
multipole   312  307  306               0.27376
                                        0.00919    0.00000    0.09970
                                        0.02355
                                        0.00000   -0.12300
                                       -0.00028    0.00000    0.09945
multipole   313  308  307              -0.38720
                                       -0.00599    0.00000    0.48268
                                       -0.77753
                                        0.00000   -0.22144
                                        0.03766    0.00000    0.99897
multipole   314  309  308               0.12060
                                        0.01488    0.00000    0.14584
                                       -0.00132
                                        0.00000   -0.16042
                                       -0.01362    0.00000    0.16174
multipole   315  310  305               0.11599
                                        0.02971    0.00000    0.15040
                                       -0.00005
                                        0.00000   -0.14202
                                        0.00241    0.00000    0.14207
multipole   316  378  317              -0.52467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   317  320  318               0.05049
                                        0.00000    0.00000    0.33253
                                       -0.07256
                                        0.00000   -0.07256
                                        0.00000    0.00000    0.14512
multipole   318  317  319               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   319  317  318               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   320  325  321               0.10423
                                       -0.13285    0.00000    0.29667
                                       -0.05793
                                        0.00000    0.00086
                                        0.08206    0.00000    0.05707
multipole   321  320  322               0.13028
                                        0.01734    0.00000    0.19825
                                       -0.05326
                                        0.00000   -0.01234
                                       -0.00361    0.00000    0.06560
multipole   322  323  320              -0.40197
                                        0.54028    0.00000    0.40904
                                        0.35989
                                        0.00000   -1.06741
                                       -0.40034    0.00000    0.70752
multipole   323  324  327               0.06316
                                        0.28383    0.00000   -0.13756
                                        0.02849
                                        0.00000    0.17299
                                        0.01391    0.00000   -0.20148
multipole   324  323  322               0.18443
                                        0.01626    0.00000    0.20540
                                       -0.04301
                                        0.00000   -0.01489
                                       -0.01787    0.00000    0.05790
multipole   325  327  320               0.10143
                                       -0.37871    0.00000   -0.13798
                                        0.13330
                                        0.00000   -0.04778
                                        0.10936    0.00000   -0.08552
multipole   326  325  327               0.11227
                                       -0.01614    0.00000    0.20173
                                       -0.05953
                                        0.00000   -0.00856
                                        0.00915    0.00000    0.06809
multipole   327  329  328               0.06213
                                       -0.32405    0.00000   -0.06050
                                       -0.05803
                                        0.00000   -0.15345
                                        0.14580    0.00000    0.21148
multipole   328  327  329               0.11711
                                       -0.00447    0.00000    0.19801
                                       -0.00750
                                        0.00000   -0.04433
                                       -0.00421    0.00000    0.05183
multipole   329  327  330              -0.47891
                                        0.13592    0.00000    0.42081
                                        0.35793
                                        0.00000   -1.07684
                                       -0.39656    0.00000    0.71891
multipole   330  329  327               0.32469
                                        0.02934    0.00000    0.13804
                                        0.00130
                                        0.00000   -0.09712
                                       -0.01165    0.00000    0.09582
multipole   331  378  325              -0.53467
                                        0.21061    0.00000    0.49486
                                        0.30847
                                        0.00000   -1.03109
                                       -0.35505    0.00000    0.72262
multipole   332  378  333              -0.52467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   333  336  334               0.05049
                                        0.00000    0.00000    0.33253
                                       -0.07256
                                        0.00000   -0.07256
                                        0.00000    0.00000    0.14512
multipole   334  333  335               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   335  333  334               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   336  341  337               0.10423
                                       -0.13285    0.00000    0.29667
                                       -0.05793
                                        0.00000    0.00086
                                        0.08206    0.00000    0.05707
multipole   337  336  338               0.13028
                                        0.01734    0.00000    0.19825
                                       -0.05326
                                        0.00000   -0.01234
                                       -0.00361    0.00000    0.06560
multipole   338  339  336              -0.40197
                                        0.54028    0.00000    0.40904
                                        0.35989
                                        0.00000   -1.06741
                                       -0.40034    0.00000    0.70752
multipole   339  340  343               0.06316
                                        0.28383    0.00000   -0.13756
                                        0.02849
                                        0.00000    0.17299
                                        0.01391    0.00000   -0.20148
multipole   340  339  338               0.18443
                                        0.01626    0.00000    0.20540
                                       -0.04301
                                        0.00000   -0.01489
                                       -0.01787    0.00000    0.05790
multipole   341  343  336               0.10143
                                       -0.37871    0.00000   -0.13798
                                        0.13330
                                        0.00000   -0.04778
                                        0.10936    0.00000   -0.08552
multipole   342  341  343               0.11227
                                       -0.01614    0.00000    0.20173
                                       -0.05953
                                        0.00000   -0.00856
                                        0.00915    0.00000    0.06809
multipole   343  345  344               0.06213
                                       -0.32405    0.00000   -0.06050
                                       -0.05803
                                        0.00000   -0.15345
                                        0.14580    0.00000    0.21148
multipole   344  343  345               0.11711
                                       -0.00447    0.00000    0.19801
                                       -0.00750
                                        0.00000   -0.04433
                                       -0.00421    0.00000    0.05183
multipole   345  343  346              -0.47891
                                        0.13592    0.00000    0.42081
                                        0.35793
                                        0.00000   -1.07684
                                       -0.39656    0.00000    0.71891
multipole   346  345  343               0.32469
                                        0.02934    0.00000    0.13804
                                        0.00130
                                        0.00000   -0.09712
                                       -0.01165    0.00000    0.09582
multipole   347  378  341              -0.53467
                                        0.21061    0.00000    0.49486
                                        0.30847
                                        0.00000   -1.03109
                                       -0.35505    0.00000    0.72262
multipole   348  390  349              -0.52467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   349  352  350               0.00960
                                        0.00000    0.00000    0.32394
                                       -0.07147
                                        0.00000   -0.07147
                                        0.00000    0.00000    0.14294
multipole   350  349  351               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   351  349  350               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   352  353  357               0.15826
                                        0.24623    0.00000   -0.21242
                                        0.08205
                                        0.00000   -0.00618
                                        0.03696    0.00000   -0.07587
multipole   353  352  354               0.12800
                                        0.02154    0.00000    0.20007
                                       -0.05590
                                        0.00000   -0.00935
                                       -0.00576    0.00000    0.06525
multipole   354  355  352              -0.38842
                                        0.55727    0.00000    0.37834
                                        0.35493
                                        0.00000   -1.07262
                                       -0.43151    0.00000    0.71769
multipole   355  354  359               0.06720
                                        0.26362    0.00000    0.03922
                                        0.05443
                                        0.00000   -0.09570
                                        0.15343    0.00000    0.04127
multipole   356  355  354               0.12287
                                        0.02353    0.00000    0.19270
                                       -0.05515
                                        0.00000   -0.01305
                                       -0.02241    0.00000    0.06820
multipole   357  352  359               0.07060
                                        0.28362    0.00000    0.21969
                                        0.09901
                                        0.00000    0.02642
                                        0.14299    0.00000   -0.12543
multipole   358  357  352               0.10297
                                       -0.00352    0.00000    0.21211
                                       -0.04895
                                        0.00000   -0.01013
                                       -0.01963    0.00000    0.05908
multipole   359  357  355              -0.10232
                                        0.30155    0.00000    0.23708
                                        0.03425
                                        0.00000   -0.14123
                                        0.16905    0.00000    0.10698
multipole   360  359  357               0.10225
                                        0.01188    0.00000    0.17915
                                       -0.03150
                                        0.00000   -0.06341
                                        0.00371    0.00000    0.09491
multipole   361  359  357               0.09833
                                        0.02571    0.00000    0.16920
                                       -0.03368
                                        0.00000   -0.08428
                                        0.00819    0.00000    0.11796
multipole   362  390  357              -0.53467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   363  390  364              -0.52467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   364  367  365               0.00960
                                        0.00000    0.00000    0.32394
                                       -0.07147
                                        0.00000   -0.07147
                                        0.00000    0.00000    0.14294
multipole   365  364  366               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   366  364  365               0.07556
                                        0.03873    0.00000    0.14751
                                       -0.08294
                                        0.00000   -0.01783
                                       -0.01217    0.00000    0.10077
multipole   367  368  372               0.15826
                                        0.24623    0.00000   -0.21242
                                        0.08205
                                        0.00000   -0.00618
                                        0.03696    0.00000   -0.07587
multipole   368  367  369               0.12800
                                        0.02154    0.00000    0.20007
                                       -0.05590
                                        0.00000   -0.00935
                                       -0.00576    0.00000    0.06525
multipole   369  370  367              -0.38842
                                        0.55727    0.00000    0.37834
                                        0.35493
                                        0.00000   -1.07262
                                       -0.43151    0.00000    0.71769
multipole   370  369  374               0.06720
                                        0.26362    0.00000    0.03922
                                        0.05443
                                        0.00000   -0.09570
                                        0.15343    0.00000    0.04127
multipole   371  370  369               0.12287
                                        0.02353    0.00000    0.19270
                                       -0.05515
                                        0.00000   -0.01305
                                       -0.02241    0.00000    0.06820
multipole   372  367  374               0.07060
                                        0.28362    0.00000    0.21969
                                        0.09901
                                        0.00000    0.02642
                                        0.14299    0.00000   -0.12543
multipole   373  372  367               0.10297
                                       -0.00352    0.00000    0.21211
                                       -0.04895
                                        0.00000   -0.01013
                                       -0.01963    0.00000    0.05908
multipole   374  372  370              -0.10232
                                        0.30155    0.00000    0.23708
                                        0.03425
                                        0.00000   -0.14123
                                        0.16905    0.00000    0.10698
multipole   375  374  372               0.10225
                                        0.01188    0.00000    0.17915
                                       -0.03150
                                        0.00000   -0.06341
                                        0.00371    0.00000    0.09491
multipole   376  374  372               0.09833
                                        0.02571    0.00000    0.16920
                                       -0.03368
                                        0.00000   -0.08428
                                        0.00819    0.00000    0.11796
multipole   377  390  372              -0.53467
                                        0.48068    0.00000   -0.09996
                                        0.36295
                                        0.00000   -0.87560
                                       -0.49890    0.00000    0.51265
multipole   378  379 -379               0.90070
                                        0.00000    0.00000   -0.38892
                                        0.04278
                                        0.00000    0.04278
                                        0.00000    0.00000   -0.08556
multipole   379  378  379              -0.62196
                                       -0.02485    0.00000    0.23676
                                       -0.53745
                                        0.00000   -0.44509
                                       -0.09945    0.00000    0.98254
multipole   380  317  381              -0.53491
                                        0.20945    0.00000    0.45595
                                        0.31894
                                        0.00000   -0.99741
                                       -0.33409    0.00000    0.67847
multipole   380  333  381              -0.53491
                                        0.20945    0.00000    0.45595
                                        0.31894
                                        0.00000   -0.99741
                                       -0.33409    0.00000    0.67847
multipole   381  380  333               0.34636
                                        0.05168    0.00000    0.21326
                                       -0.04514
                                        0.00000   -0.08116
                                       -0.01807    0.00000    0.12630
multipole   381  380  317               0.34636
                                        0.05168    0.00000    0.21326
                                       -0.04514
                                        0.00000   -0.08116
                                       -0.01807    0.00000    0.12630
multipole   382  383  317              -0.58166
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   382  383  333              -0.58166
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   383  382  384               1.02369
                                        0.00000    0.00000   -0.21311
                                       -0.08100
                                        0.00000   -0.08100
                                        0.00000    0.00000    0.16200
multipole   384  383  382              -0.87686
                                       -0.08747    0.00000    0.03991
                                       -0.45917
                                        0.00000   -0.64191
                                        0.17008    0.00000    1.10108
multipole   385  325  386              -0.50819
                                        0.18120    0.00000    0.42418
                                        0.28893
                                        0.00000   -1.01628
                                       -0.48824    0.00000    0.72735
multipole   385  341  386              -0.50819
                                        0.18120    0.00000    0.42418
                                        0.28893
                                        0.00000   -1.01628
                                       -0.48824    0.00000    0.72735
multipole   386  385  325               0.29418
                                        0.02971    0.00000    0.13453
                                       -0.01165
                                        0.00000   -0.09373
                                        0.01341    0.00000    0.10538
multipole   386  385  341               0.29418
                                        0.02971    0.00000    0.13453
                                       -0.01165
                                        0.00000   -0.09373
                                        0.01341    0.00000    0.10538
multipole   387  388  325              -0.60712
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   387  388  341              -0.60712
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   388  387  389               1.02369
                                        0.00000    0.00000   -0.21311
                                       -0.08100
                                        0.00000   -0.08100
                                        0.00000    0.00000    0.16200
multipole   389  388  387              -0.87686
                                       -0.08747    0.00000    0.03991
                                       -0.45917
                                        0.00000   -0.64191
                                        0.17008    0.00000    1.10108
multipole   390 -391 -391               0.90070
                                        0.00000    0.00000   -0.38892
                                        0.04278
                                        0.00000    0.04278
                                        0.00000    0.00000   -0.08556
multipole   391  390  391              -0.62196
                                       -0.02485    0.00000    0.23676
                                       -0.53745
                                        0.00000   -0.44509
                                       -0.09945    0.00000    0.98254
multipole   392  349  393              -0.53491
                                        0.20945    0.00000    0.45595
                                        0.31894
                                        0.00000   -0.99741
                                       -0.33409    0.00000    0.67847
multipole   392  364  393              -0.53491
                                        0.20945    0.00000    0.45595
                                        0.31894
                                        0.00000   -0.99741
                                       -0.33409    0.00000    0.67847
multipole   393  392  349               0.34636
                                        0.05168    0.00000    0.21326
                                       -0.04514
                                        0.00000   -0.08116
                                       -0.01807    0.00000    0.12630
multipole   393  392  364               0.34636
                                        0.05168    0.00000    0.21326
                                       -0.04514
                                        0.00000   -0.08116
                                       -0.01807    0.00000    0.12630
multipole   394  395  349              -0.58166
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   394  395  364              -0.58166
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   395  394  396               1.02369
                                        0.00000    0.00000   -0.21311
                                       -0.08100
                                        0.00000   -0.08100
                                        0.00000    0.00000    0.16200
multipole   396  395  394              -0.87686
                                       -0.08747    0.00000    0.03991
                                       -0.45917
                                        0.00000   -0.64191
                                        0.17008    0.00000    1.10108
multipole   397  357  398              -0.50819
                                        0.18120    0.00000    0.42418
                                        0.28893
                                        0.00000   -1.01628
                                       -0.48824    0.00000    0.72735
multipole   397  372  398              -0.50819
                                        0.18120    0.00000    0.42418
                                        0.28893
                                        0.00000   -1.01628
                                       -0.48824    0.00000    0.72735
multipole   398  397  357               0.29418
                                        0.02971    0.00000    0.13453
                                       -0.01165
                                        0.00000   -0.09373
                                        0.01341    0.00000    0.10538
multipole   398  397  372               0.29418
                                        0.02971    0.00000    0.13453
                                       -0.01165
                                        0.00000   -0.09373
                                        0.01341    0.00000    0.10538
multipole   399  400  357              -0.60712
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   399  400  372              -0.60712
                                        0.26215    0.00000    0.04328
                                        0.24279
                                        0.00000   -0.44387
                                       -0.22260    0.00000    0.20108
multipole   400  399  401               1.02369
                                        0.00000    0.00000   -0.21311
                                       -0.08100
                                        0.00000   -0.08100
                                        0.00000    0.00000    0.16200
multipole   401  400  399              -0.87686
                                       -0.08747    0.00000    0.03991
                                       -0.45917
                                        0.00000   -0.64191
                                        0.17008    0.00000    1.10108
multipole   402 -403 -403              -0.51966
                                        0.00000    0.00000    0.14279
                                        0.37928
                                        0.00000   -0.41809
                                        0.00000    0.00000    0.03881
multipole   403  402  403               0.25983
                                       -0.03859    0.00000   -0.05818
                                       -0.03673
                                        0.00000   -0.10739
                                       -0.00203    0.00000    0.14412
multipole   404    0    0               1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   405    0    0               1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   406    0    0               1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   407    0    0               1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   408    0    0               1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   409    0    0               2.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   410    0    0               2.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   411    0    0               2.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   412    0    0               2.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   413    0    0              -1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   414    0    0              -1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   415    0    0              -1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000
multipole   416    0    0              -1.00000
                                        0.00000    0.00000    0.00000
                                        0.00000
                                        0.00000    0.00000
                                        0.00000    0.00000    0.00000


      ########################################
      ##                                    ##
      ##  Dipole Polarizability Parameters  ##
      ##                                    ##
      ########################################


polarize      1          1.0730     0.3900      3    4    9   55  226  247
polarize      2          1.3340     0.3900      6
polarize      3          1.3340     0.3900      1    5    7   53  228  230
polarize      4          0.4960     0.3900      1
polarize      5          0.8370     0.3900      3
polarize      6          0.4960     0.3900      2
polarize      7          1.0730     0.3900      3    9   10   55  226  247
polarize      8          1.3340     0.3900     12
polarize      9          1.3340     0.3900      1    7   11   53  228  230
polarize     10          0.4960     0.3900      7
polarize     11          0.8370     0.3900      9
polarize     12          0.4960     0.3900      8   33   44
polarize     13          1.3340     0.3900     14
polarize     14          0.4960     0.3900     13
polarize     15          1.3340     0.3900     16
polarize     16          0.4960     0.3900     15
polarize     17          1.3340     0.3900     18
polarize     18          0.4960     0.3900     17
polarize     19          1.3340     0.3900     20
polarize     20          0.4960     0.3900     19
polarize     21          1.3340     0.3900     22
polarize     22          0.4960     0.3900     21
polarize     23          1.3340     0.3900     24
polarize     24          0.4960     0.3900     23
polarize     25          1.3340     0.3900     26
polarize     26          0.4960     0.3900     25
polarize     27          1.3340     0.3900     28
polarize     28          0.4960     0.3900     27
polarize     29          1.3340     0.3900     30
polarize     30          0.4960     0.3900     29
polarize     31          1.3340     0.3900     32
polarize     32          0.4960     0.3900     31
polarize     33          1.3340     0.3900     12
polarize     34          1.3340     0.3900     35   36
polarize     35          0.4960     0.3900     34
polarize     36          0.8340     0.3900     34   37
polarize     37          0.4960     0.3900     36
polarize     38          1.3340     0.3900     39   42
polarize     39          0.4960     0.3900     38
polarize     40          1.3340     0.3900     41
polarize     41          0.4960     0.3900     40
polarize     42          0.8340     0.3900     38   43
polarize     43          0.4960     0.3900     42
polarize     44          1.3340     0.3900     12
polarize     45          1.3340     0.3900     46   47   49
polarize     46          0.4960     0.3900     45
polarize     47          3.3000     0.3900     45   48
polarize     48          0.4960     0.3900     47
polarize     49          3.3000     0.3900     45   49
polarize     50          1.3340     0.3900     51   52
polarize     51          0.4960     0.3900     50
polarize     52          3.3000     0.3900     50
polarize     53          1.0730     0.3900      3    9   55   62  226  247
polarize     54          1.3340     0.3900     57
polarize     55          1.3340     0.3900      1    7   53   56  228  230
polarize     56          0.8370     0.3900     55
polarize     57          0.4960     0.3900     54
polarize     58          1.3340     0.3900     59
polarize     59          0.4960     0.3900     58
polarize     60          1.3340     0.3900     61
polarize     61          0.4960     0.3900     60
polarize     62          1.3340     0.3900     53   63
polarize     63          0.4960     0.3900     62
polarize     64          1.3340     0.3900     65
polarize     65          0.4960     0.3900     64
polarize     66          1.7500     0.3900     67
polarize     67          1.7500     0.3900     66   68   69
polarize     68          0.6960     0.3900     67
polarize     69          1.7500     0.3900     67   70   71
polarize     70          0.6960     0.3900     69
polarize     71          1.7500     0.3900     69   72
polarize     72          0.6960     0.3900     71
polarize     73          1.3340     0.3900     74
polarize     74          0.4960     0.3900     73
polarize     75          1.7500     0.3900     76
polarize     76          1.7500     0.3900     75   77   78
polarize     77          0.6960     0.3900     76
polarize     78          1.7500     0.3900     76   79   80
polarize     79          0.6960     0.3900     78
polarize     80          1.7500     0.3900     78   81
polarize     81          0.8730     0.3900     80   82
polarize     82          0.4960     0.3900     81
polarize     83          1.3340     0.3900     84
polarize     84          0.4960     0.3900     83
polarize     85          1.7500     0.3900     86
polarize     86          1.7500     0.3900     85   87   88
polarize     87          0.6960     0.3900     86
polarize     88          1.7500     0.3900     86   89   90
polarize     89          0.6960     0.3900     88
polarize     90          1.7500     0.3900     88   91
polarize     91          0.8370     0.3900     90
polarize     92          1.3340     0.3900     93
polarize     93          0.4960     0.3900     92
polarize     94          1.7500     0.3900     95   97
polarize     95          1.7500     0.3900     94   96   98
polarize     96          0.6960     0.3900     95
polarize     97          1.7500     0.3900     94  100  101
polarize     98          1.0730     0.3900     95   99  100
polarize     99          0.4960     0.3900     98
polarize    100          1.7500     0.3900     97   98  103
polarize    101          1.7500     0.3900     97  102  105
polarize    102          0.6960     0.3900    101
polarize    103          1.7500     0.3900    100  104  107
polarize    104          0.6960     0.3900    103
polarize    105          1.7500     0.3900    101  106  107
polarize    106          0.6960     0.3900    105
polarize    107          1.7500     0.3900    103  105  108
polarize    108          0.6960     0.3900    107
polarize    109          1.3340     0.3900    110
polarize    110          0.4960     0.3900    109
polarize    111          1.7500     0.3900    112  114
polarize    112          1.0730     0.3900    111  113  116
polarize    113          0.4960     0.3900    112
polarize    114          1.7500     0.3900    111  115  118
polarize    115          0.6960     0.3900    114
polarize    116          1.7500     0.3900    112  117  118
polarize    117          0.6960     0.3900    116
polarize    118          1.0730     0.3900    114  116  119
polarize    119          0.4960     0.3900    118
polarize    120          1.3340     0.3900    121
polarize    121          0.4960     0.3900    120
polarize    122          1.7500     0.3900    123  125
polarize    123          1.0730     0.3900    122  124  127
polarize    124          0.4960     0.3900    123
polarize    125          1.7500     0.3900    122  126  129
polarize    126          0.6960     0.3900    125
polarize    127          1.7500     0.3900    123  128  129
polarize    128          0.6960     0.3900    127
polarize    129          1.0730     0.3900    125  127
polarize    130          1.3340     0.3900    131
polarize    131          0.4960     0.3900    130
polarize    132          1.7500     0.3900    133  134
polarize    133          1.0730     0.3900    132  136
polarize    134          1.7500     0.3900    132  135  138
polarize    135          0.6960     0.3900    134
polarize    136          1.7500     0.3900    133  137  138
polarize    137          0.6960     0.3900    136
polarize    138          1.0730     0.3900    134  136  139
polarize    139          0.4960     0.3900    138
polarize    140          1.3340     0.3900    141
polarize    141          0.4960     0.3900    140
polarize    142          1.3340     0.3900    143
polarize    143          0.8370     0.3900    142
polarize    144          1.3340     0.3900    145
polarize    145          0.4960     0.3900    144
polarize    146          1.3340     0.3900    147  148
polarize    147          0.8370     0.3900    146
polarize    148          0.8370     0.3900    146  149
polarize    149          0.4960     0.3900    148
polarize    150          1.3340     0.3900    151
polarize    151          0.4960     0.3900    150
polarize    152          1.3340     0.3900    153  154
polarize    153          0.8340     0.3900    152
polarize    154          1.0730     0.3900    152  155
polarize    155          0.4960     0.3900    154
polarize    156          1.3340     0.3900    157
polarize    157          0.4960     0.3900    156
polarize    158          1.3340     0.3900    159
polarize    159          0.4960     0.3900    158
polarize    160          1.3340     0.3900    161
polarize    161          0.8370     0.3900    160
polarize    162          1.3340     0.3900    163
polarize    163          0.4960     0.3900    162
polarize    164          1.3340     0.3900    165
polarize    165          0.4960     0.3900    164
polarize    166          1.3340     0.3900    167  168
polarize    167          0.8370     0.3900    166
polarize    168          0.8370     0.3900    166  169
polarize    169          0.4960     0.3900    168
polarize    170          1.3340     0.3900    171
polarize    171          0.4960     0.3900    170
polarize    172          1.3340     0.3900    173
polarize    173          0.4960     0.3900    172
polarize    174          1.3340     0.3900    175  176
polarize    175          0.8340     0.3900    174
polarize    176          1.0730     0.3900    174  177
polarize    177          0.4960     0.3900    176
polarize    178          1.3340     0.3900    179
polarize    179          0.4960     0.3900    178
polarize    180          1.3340     0.3900    181  182
polarize    181          0.4960     0.3900    180
polarize    182          3.3000     0.3900    180  183
polarize    183          1.3340     0.3900    182  184
polarize    184          0.4960     0.3900    183
polarize    185          1.3340     0.3900    186
polarize    186          0.4960     0.3900    185
polarize    187          1.3340     0.3900    188
polarize    188          0.4960     0.3900    187
polarize    189          1.3340     0.3900    190
polarize    190          0.4960     0.3900    189
polarize    191          1.3340     0.3900    192
polarize    192          0.4960     0.3900    191
polarize    193          1.0730     0.3900    194
polarize    195          1.3340     0.3900    196
polarize    196          0.4960     0.3900    195
polarize    197          1.3340     0.3900    198
polarize    198          0.4960     0.3900    197
polarize    194          0.4960     0.3900    193
polarize    199          1.3340     0.3900    200
polarize    200          0.4960     0.3900    199
polarize    201          1.3340     0.3900    202  203
polarize    202          0.4960     0.3900    201
polarize    203          1.0730     0.3900    201  204
polarize    204          0.4960     0.3900    203
polarize    205          1.3340     0.3900    206
polarize    206          0.4960     0.3900    205
polarize    207          1.3340     0.3900    208
polarize    208          0.4960     0.3900    207
polarize    209          1.3340     0.3900    210  211
polarize    210          0.4960     0.3900    209
polarize    211          1.0730     0.3900    209  212  213
polarize    212          0.4960     0.3900    211
polarize    213          1.3340     0.3900    211  214
polarize    214          1.0730     0.3900    213  215
polarize    215          0.4960     0.3900    214
polarize    216          1.3340     0.3900    217
polarize    217          0.4960     0.3900    216
polarize    218          1.3340     0.3900    219
polarize    219          0.4960     0.3900    218
polarize    220          1.3340     0.3900    221
polarize    221          0.4960     0.3900    220
polarize    222          1.0730     0.3900    223
polarize    223          0.4960     0.3900    222
polarize    224          1.3340     0.3900    225
polarize    225          0.4960     0.3900    224
polarize    226          1.3340     0.3900      1    7   53  227
polarize    227          0.8370     0.3900    226
polarize    228          1.0730     0.3900      3    9   55  229  247
polarize    229          0.4960     0.3900    228
polarize    230          1.0730     0.3900      3    9   55  231  247
polarize    231          0.4960     0.3900    230
polarize    232          1.3340     0.3900    233
polarize    233          0.4960     0.3900    232
polarize    234          1.0730     0.3900    235
polarize    235          0.4960     0.3900    234
polarize    236          1.0730     0.3900    237
polarize    237          0.4960     0.3900    236
polarize    238          1.3340     0.3900    239
polarize    239          0.8370     0.3900    238
polarize    240          1.3340     0.3900    241  242
polarize    241          0.8370     0.3900    240
polarize    242          0.8370     0.3900    240  243
polarize    243          0.4960     0.3900    242
polarize    244          1.0730     0.3900    245
polarize    245          0.4960     0.3900    244
polarize    246          1.3340     0.3900    249
polarize    247          1.3340     0.3900      1    7   53  228  230  248
polarize    248          0.8370     0.3900    247
polarize    249          0.4960     0.3900    246
polarize    250          1.3340     0.3900    251
polarize    251          0.4960     0.3900    250
polarize    252          1.0730     0.3900    253  256
polarize    253          1.7500     0.3900    252  254  257
polarize    254          1.7500     0.3900    253  255  260
polarize    255          1.0730     0.3900    254  256
polarize    256          1.7500     0.3900    252  255  265
polarize    257          1.0730     0.3900    253  258
polarize    258          1.7500     0.3900    257  259  261
polarize    259          1.0730     0.3900    258  260
polarize    260          1.7500     0.3900    254  259
polarize    261          0.6960     0.3900    258
polarize    262          1.0730     0.3900    263  264
polarize    263          0.4960     0.3900    262
polarize    264          0.4960     0.3900    262
polarize    265          0.6960     0.3900    256
polarize    266          1.0730     0.3900    267  271
polarize    267          1.7500     0.3900    266  268  272
polarize    268          1.0730     0.3900    267  269
polarize    269          1.7500     0.3900    268  270
polarize    270          1.7500     0.3900    269  271  276
polarize    271          1.7500     0.3900    266  270  277
polarize    272          0.8370     0.3900    267
polarize    273          1.0730     0.3900    274  275
polarize    274          0.4960     0.3900    273
polarize    275          0.4960     0.3900    273
polarize    276          0.6960     0.3900    270
polarize    277          0.6960     0.3900    271
polarize    278          1.0730     0.3900    279  282
polarize    279          1.7500     0.3900    278  280  283
polarize    280          1.7500     0.3900    279  281  286
polarize    281          1.0730     0.3900    280  282
polarize    282          1.7500     0.3900    278  281  292
polarize    283          1.0730     0.3900    279  284
polarize    284          1.7500     0.3900    283  285
polarize    285          1.0730     0.3900    284  286  287
polarize    286          1.7500     0.3900    280  285  291
polarize    287          0.6960     0.3900    285
polarize    288          1.0730     0.3900    289  290
polarize    289          0.4960     0.3900    288
polarize    290          0.4960     0.3900    288
polarize    291          0.8370     0.3900    286
polarize    292          0.6960     0.3900    282
polarize    293          1.0730     0.3900    294  298
polarize    294          1.7500     0.3900    293  295  299
polarize    295          1.0730     0.3900    294  296  300
polarize    296          1.7500     0.3900    295  297  301
polarize    297          1.7500     0.3900    296  298
polarize    298          1.7500     0.3900    293  297  304
polarize    299          0.8370     0.3900    294
polarize    300          0.6960     0.3900    295
polarize    301          0.8370     0.3900    296
polarize    302          1.3340     0.3900    303
polarize    303          0.4960     0.3900    302
polarize    304          0.6960     0.3900    298
polarize    305          1.0730     0.3900    306  310
polarize    306          1.7500     0.3900    305  307  311
polarize    307          1.0730     0.3900    306  308  312
polarize    308          1.7500     0.3900    307  309  313
polarize    309          1.7500     0.3900    308  310  314
polarize    310          1.7500     0.3900    305  309  315
polarize    311          0.8370     0.3900    306
polarize    312          0.4960     0.3900    307
polarize    313          0.8370     0.3900    308
polarize    314          0.6960     0.3900    309
polarize    315          0.6960     0.3900    310
polarize    316          0.8370     0.3900    378
polarize    317          1.3340     0.3900    318  319
polarize    318          0.4960     0.3900    317
polarize    319          0.4960     0.3900    317
polarize    320          1.3340     0.3900    321
polarize    321          0.4960     0.3900    320
polarize    322          0.8370     0.3900
polarize    323          1.3340     0.3900    324
polarize    324          0.4960     0.3900    323
polarize    325          1.3340     0.3900    326
polarize    326          0.4960     0.3900    325
polarize    327          1.3340     0.3900    328  329  330
polarize    328          0.4960     0.3900    327
polarize    329          1.3340     0.3900    327  330
polarize    330          0.4960     0.3900    329
polarize    331          0.8370     0.3900    378
polarize    332          0.8370     0.3900    378
polarize    333          1.3340     0.3900    334  335
polarize    334          0.4960     0.3900    333
polarize    335          0.4960     0.3900    333
polarize    336          1.3340     0.3900    337
polarize    337          0.4960     0.3900    336
polarize    338          0.8370     0.3900
polarize    339          1.3340     0.3900    340
polarize    340          0.4960     0.3900    339
polarize    341          1.3340     0.3900    342
polarize    342          0.4960     0.3900    341
polarize    343          1.3340     0.3900    344  345  346
polarize    344          0.4960     0.3900    343
polarize    345          1.3340     0.3900    343  346
polarize    346          0.4960     0.3900    345
polarize    347          0.8370     0.3900    378
polarize    348          0.8370     0.3900    390
polarize    349          1.3340     0.3900    350  351
polarize    350          0.4960     0.3900    349
polarize    351          0.4960     0.3900    349
polarize    352          1.3340     0.3900    353
polarize    353          0.4960     0.3900    352
polarize    354          0.8370     0.3900
polarize    355          1.3340     0.3900    356
polarize    356          0.4960     0.3900    355
polarize    357          1.3340     0.3900    358
polarize    358          0.4960     0.3900    357
polarize    359          1.3340     0.3900    360  361
polarize    360          0.4960     0.3900    359
polarize    361          0.4960     0.3900    359
polarize    362          0.8370     0.3900    390
polarize    363          0.8370     0.3900    390
polarize    364          1.3340     0.3900    365  366
polarize    365          0.4960     0.3900    364
polarize    366          0.4960     0.3900    364
polarize    367          1.3340     0.3900    368
polarize    368          0.4960     0.3900    367
polarize    369          0.8370     0.3900
polarize    370          1.3340     0.3900    371
polarize    371          0.4960     0.3900    370
polarize    372          1.3340     0.3900    373
polarize    373          0.4960     0.3900    372
polarize    374          1.3340     0.3900    375  376
polarize    375          0.4960     0.3900    374
polarize    376          0.4960     0.3900    374
polarize    377          0.8370     0.3900    390
polarize    378          1.8280     0.3900    316  331  332  347  379
polarize    379          0.8370     0.3900    378
polarize    380          0.8370     0.3900    381
polarize    381          0.4960     0.3900    380
polarize    382          0.8370     0.3900
polarize    383          1.8280     0.3900    384
polarize    384          0.8370     0.3900    383
polarize    385          0.8370     0.3900    386
polarize    386          0.4960     0.3900    385
polarize    387          0.8370     0.3900
polarize    388          1.8280     0.3900    389
polarize    389          0.8370     0.3900    388
polarize    390          1.8280     0.3900    348  362  363  377  391
polarize    391          0.8370     0.3900    390
polarize    392          0.8370     0.3900    393
polarize    393          0.4960     0.3900    392
polarize    394          0.8370     0.3900
polarize    395          1.8280     0.3900    396
polarize    396          0.8370     0.3900    395
polarize    397          0.8370     0.3900    398
polarize    398          0.4960     0.3900    397
polarize    399          0.8370     0.3900
polarize    400          1.8280     0.3900    401
polarize    401          0.8370     0.3900    400
polarize    402          0.8370     0.3900    403
polarize    403          0.4960     0.3900    402
polarize    404          0.0280     0.3900
polarize    405          0.1200     0.3900
polarize    406          0.7800     0.3900
polarize    407          1.3500     0.3900
polarize    408          2.2600     0.3900
polarize    409          0.0100     0.0650
polarize    410          0.0800     0.0952
polarize    411          0.5500     0.1585
polarize    412          0.2600     0.2096
polarize    413          1.3500     0.3900
polarize    414          4.0000     0.3900
polarize    415          5.6500     0.3900
polarize    416          7.2500     0.3900


      ########################################
      ##                                    ##
      ##  Biopolymer Atom Type Conversions  ##
      ##                                    ##
      ########################################


biotype       1    N       "Glycine"                           1
biotype       2    CA      "Glycine"                           2
biotype       3    C       "Glycine"                           3
biotype       4    HN      "Glycine"                           4
biotype       5    O       "Glycine"                           5
biotype       6    HA      "Glycine"                           6
biotype       7    N       "Alanine"                           7
biotype       8    CA      "Alanine"                           8
biotype       9    C       "Alanine"                           9
biotype      10    HN      "Alanine"                          10
biotype      11    O       "Alanine"                          11
biotype      12    HA      "Alanine"                          12
biotype      13    CB      "Alanine"                          13
biotype      14    HB      "Alanine"                          14
biotype      15    N       "Valine"                            7
biotype      16    CA      "Valine"                            8
biotype      17    C       "Valine"                            9
biotype      18    HN      "Valine"                           10
biotype      19    O       "Valine"                           11
biotype      20    HA      "Valine"                           12
biotype      21    CB      "Valine"                           15
biotype      22    HB      "Valine"                           16
biotype      23    CG1     "Valine"                           17
biotype      24    HG1     "Valine"                           18
biotype      25    CG2     "Valine"                           17
biotype      26    HG2     "Valine"                           18
biotype      27    N       "Leucine"                           7
biotype      28    CA      "Leucine"                           8
biotype      29    C       "Leucine"                           9
biotype      30    HN      "Leucine"                          10
biotype      31    O       "Leucine"                          11
biotype      32    HA      "Leucine"                          12
biotype      33    CB      "Leucine"                          19
biotype      34    HB      "Leucine"                          20
biotype      35    CG      "Leucine"                          21
biotype      36    HG      "Leucine"                          22
biotype      37    CD1     "Leucine"                          23
biotype      38    HD1     "Leucine"                          24
biotype      39    CD2     "Leucine"                          23
biotype      40    HD2     "Leucine"                          24
biotype      41    N       "Isoleucine"                        7
biotype      42    CA      "Isoleucine"                        8
biotype      43    C       "Isoleucine"                        9
biotype      44    HN      "Isoleucine"                       10
biotype      45    O       "Isoleucine"                       11
biotype      46    HA      "Isoleucine"                       12
biotype      47    CB      "Isoleucine"                       25
biotype      48    HB      "Isoleucine"                       26
biotype      49    CG1     "Isoleucine"                       29
biotype      50    HG1     "Isoleucine"                       30
biotype      51    CG2     "Isoleucine"                       27
biotype      52    HG2     "Isoleucine"                       28
biotype      53    CD      "Isoleucine"                       31
biotype      54    HD      "Isoleucine"                       32
biotype      55    N       "Serine"                            7
biotype      56    CA      "Serine"                           33
biotype      57    C       "Serine"                            9
biotype      58    HN      "Serine"                           10
biotype      59    O       "Serine"                           11
biotype      60    HA      "Serine"                           12
biotype      61    CB      "Serine"                           34
biotype      62    HB      "Serine"                           35
biotype      63    OG      "Serine"                           36
biotype      64    HG      "Serine"                           37
biotype      65    N       "Threonine"                         7
biotype      66    CA      "Threonine"                        33
biotype      67    C       "Threonine"                         9
biotype      68    HN      "Threonine"                        10
biotype      69    O       "Threonine"                        11
biotype      70    HA      "Threonine"                        12
biotype      71    CB      "Threonine"                        38
biotype      72    HB      "Threonine"                        39
biotype      73    OG1     "Threonine"                        42
biotype      74    HG1     "Threonine"                        43
biotype      75    CG2     "Threonine"                        40
biotype      76    HG2     "Threonine"                        41
biotype      77    N       "Cysteine (SH)"                     7
biotype      78    CA      "Cysteine (SH)"                    44
biotype      79    C       "Cysteine (SH)"                     9
biotype      80    HN      "Cysteine (SH)"                    10
biotype      81    O       "Cysteine (SH)"                    11
biotype      82    HA      "Cysteine (SH)"                    12
biotype      83    CB      "Cysteine (SH)"                    45
biotype      84    HB      "Cysteine (SH)"                    46
biotype      85    SG      "Cysteine (SH)"                    47
biotype      86    HG      "Cysteine (SH)"                    48
biotype      87    N       "Cystine (SS)"                      7
biotype      88    CA      "Cystine (SS)"                     44
biotype      89    C       "Cystine (SS)"                      9
biotype      90    HN      "Cystine (SS)"                     10
biotype      91    O       "Cystine (SS)"                     11
biotype      92    HA      "Cystine (SS)"                     12
biotype      93    CB      "Cystine (SS)"                     45
biotype      94    HB      "Cystine (SS)"                     46
biotype      95    SG      "Cystine (SS)"                     49
biotype      96    N       "Cysteine (S-)"                     7
biotype      97    CA      "Cysteine (S-)"                    44
biotype      98    C       "Cysteine (S-)"                     9
biotype      99    HN      "Cysteine (S-)"                    10
biotype     100    O       "Cysteine (S-)"                    11
biotype     101    HA      "Cysteine (S-)"                    12
biotype     102    CB      "Cysteine (S-)"                    50
biotype     103    HB      "Cysteine (S-)"                    51
biotype     104    SG      "Cysteine (S-)"                    52
biotype     105    N       "Proline"                          53
biotype     106    CA      "Proline"                          54
biotype     107    C       "Proline"                          55
biotype     108    O       "Proline"                          56
biotype     109    HA      "Proline"                          57
biotype     110    CB      "Proline"                          58
biotype     111    HB      "Proline"                          59
biotype     112    CG      "Proline"                          60
biotype     113    HG      "Proline"                          61
biotype     114    CD      "Proline"                          62
biotype     115    HD      "Proline"                          63
biotype     116    N       "Phenylalanine"                     7
biotype     117    CA      "Phenylalanine"                     8
biotype     118    C       "Phenylalanine"                     9
biotype     119    HN      "Phenylalanine"                    10
biotype     120    O       "Phenylalanine"                    11
biotype     121    HA      "Phenylalanine"                    12
biotype     122    CB      "Phenylalanine"                    64
biotype     123    HB      "Phenylalanine"                    65
biotype     124    CG      "Phenylalanine"                    66
biotype     125    CD      "Phenylalanine"                    67
biotype     126    HD      "Phenylalanine"                    68
biotype     127    CE      "Phenylalanine"                    69
biotype     128    HE      "Phenylalanine"                    70
biotype     129    CZ      "Phenylalanine"                    71
biotype     130    HZ      "Phenylalanine"                    72
biotype     131    N       "Tyrosine"                          7
biotype     132    CA      "Tyrosine"                          8
biotype     133    C       "Tyrosine"                          9
biotype     134    HN      "Tyrosine"                         10
biotype     135    O       "Tyrosine"                         11
biotype     136    HA      "Tyrosine"                         12
biotype     137    CB      "Tyrosine"                         73
biotype     138    HB      "Tyrosine"                         74
biotype     139    CG      "Tyrosine"                         75
biotype     140    CD      "Tyrosine"                         76
biotype     141    HD      "Tyrosine"                         77
biotype     142    CE      "Tyrosine"                         78
biotype     143    HE      "Tyrosine"                         79
biotype     144    CZ      "Tyrosine"                         80
biotype     145    OH      "Tyrosine"                         81
biotype     146    HH      "Tyrosine"                         82
biotype     147    N       "Tyrosine (O-)"                     7
biotype     148    CA      "Tyrosine (O-)"                     8
biotype     149    C       "Tyrosine (O-)"                     9
biotype     150    HN      "Tyrosine (O-)"                    10
biotype     151    O       "Tyrosine (O-)"                    11
biotype     152    HA      "Tyrosine (O-)"                    12
biotype     153    CB      "Tyrosine (O-)"                    83
biotype     154    HB      "Tyrosine (O-)"                    84
biotype     155    CG      "Tyrosine (O-)"                    85
biotype     156    CD      "Tyrosine (O-)"                    86
biotype     157    HD      "Tyrosine (O-)"                    87
biotype     158    CE      "Tyrosine (O-)"                    88
biotype     159    HE      "Tyrosine (O-)"                    89
biotype     160    CZ      "Tyrosine (O-)"                    90
biotype     161    OH      "Tyrosine (O-)"                    91
biotype     162    N       "Tryptophan"                        7
biotype     163    CA      "Tryptophan"                        8
biotype     164    C       "Tryptophan"                        9
biotype     165    HN      "Tryptophan"                       10
biotype     166    O       "Tryptophan"                       11
biotype     167    HA      "Tryptophan"                       12
biotype     168    CB      "Tryptophan"                       92
biotype     169    HB      "Tryptophan"                       93
biotype     170    CG      "Tryptophan"                       94
biotype     171    CD1     "Tryptophan"                       95
biotype     172    HD1     "Tryptophan"                       96
biotype     173    CD2     "Tryptophan"                       97
biotype     174    NE1     "Tryptophan"                       98
biotype     175    HE1     "Tryptophan"                       99
biotype     176    CE2     "Tryptophan"                      100
biotype     177    CE3     "Tryptophan"                      101
biotype     178    HE3     "Tryptophan"                      102
biotype     179    CZ2     "Tryptophan"                      103
biotype     180    HZ2     "Tryptophan"                      104
biotype     181    CZ3     "Tryptophan"                      105
biotype     182    HZ3     "Tryptophan"                      106
biotype     183    CH2     "Tryptophan"                      107
biotype     184    HH2     "Tryptophan"                      108
biotype     185    N       "Histidine (+)"                     7
biotype     186    CA      "Histidine (+)"                     8
biotype     187    C       "Histidine (+)"                     9
biotype     188    HN      "Histidine (+)"                    10
biotype     189    O       "Histidine (+)"                    11
biotype     190    HA      "Histidine (+)"                    12
biotype     191    CB      "Histidine (+)"                   109
biotype     192    HB      "Histidine (+)"                   110
biotype     193    CG      "Histidine (+)"                   111
biotype     194    ND1     "Histidine (+)"                   112
biotype     195    HD1     "Histidine (+)"                   113
biotype     196    CD2     "Histidine (+)"                   114
biotype     197    HD2     "Histidine (+)"                   115
biotype     198    CE1     "Histidine (+)"                   116
biotype     199    HE1     "Histidine (+)"                   117
biotype     200    NE2     "Histidine (+)"                   118
biotype     201    HE2     "Histidine (+)"                   119
biotype     202    N       "Histidine (HD)"                    7
biotype     203    CA      "Histidine (HD)"                    8
biotype     204    C       "Histidine (HD)"                    9
biotype     205    HN      "Histidine (HD)"                   10
biotype     206    O       "Histidine (HD)"                   11
biotype     207    HA      "Histidine (HD)"                   12
biotype     208    CB      "Histidine (HD)"                  120
biotype     209    HB      "Histidine (HD)"                  121
biotype     210    CG      "Histidine (HD)"                  122
biotype     211    ND1     "Histidine (HD)"                  123
biotype     212    HD1     "Histidine (HD)"                  124
biotype     213    CD2     "Histidine (HD)"                  125
biotype     214    HD2     "Histidine (HD)"                  126
biotype     215    CE1     "Histidine (HD)"                  127
biotype     216    HE1     "Histidine (HD)"                  128
biotype     217    NE2     "Histidine (HD)"                  129
biotype     218    N       "Histidine (HE)"                    7
biotype     219    CA      "Histidine (HE)"                    8
biotype     220    C       "Histidine (HE)"                    9
biotype     221    HN      "Histidine (HE)"                   10
biotype     222    O       "Histidine (HE)"                   11
biotype     223    HA      "Histidine (HE)"                   12
biotype     224    CB      "Histidine (HE)"                  130
biotype     225    HB      "Histidine (HE)"                  131
biotype     226    CG      "Histidine (HE)"                  132
biotype     227    ND1     "Histidine (HE)"                  133
biotype     228    CD2     "Histidine (HE)"                  134
biotype     229    HD2     "Histidine (HE)"                  135
biotype     230    CE1     "Histidine (HE)"                  136
biotype     231    HE1     "Histidine (HE)"                  137
biotype     232    NE2     "Histidine (HE)"                  138
biotype     233    HE2     "Histidine (HE)"                  139
biotype     234    N       "Aspartic Acid"                     7
biotype     235    CA      "Aspartic Acid"                     8
biotype     236    C       "Aspartic Acid"                     9
biotype     237    HN      "Aspartic Acid"                    10
biotype     238    O       "Aspartic Acid"                    11
biotype     239    HA      "Aspartic Acid"                    12
biotype     240    CB      "Aspartic Acid"                   140
biotype     241    HB      "Aspartic Acid"                   141
biotype     242    CG      "Aspartic Acid"                   142
biotype     243    OD      "Aspartic Acid"                   143
biotype     244    N       "Aspartic Acid (COOH)"              7
biotype     245    CA      "Aspartic Acid (COOH)"              8
biotype     246    C       "Aspartic Acid (COOH)"              9
biotype     247    HN      "Aspartic Acid (COOH)"             10
biotype     248    O       "Aspartic Acid (COOH)"             11
biotype     249    HA      "Aspartic Acid (COOH)"             12
biotype     250    CB      "Aspartic Acid (COOH)"            144
biotype     251    HB      "Aspartic Acid (COOH)"            145
biotype     252    CG      "Aspartic Acid (COOH)"            146
biotype     253    OD1     "Aspartic Acid (COOH)"            147
biotype     254    OD2     "Aspartic Acid (COOH)"            148
biotype     255    HD2     "Aspartic Acid (COOH)"            149
biotype     256    N       "Asparagine"                        7
biotype     257    CA      "Asparagine"                        8
biotype     258    C       "Asparagine"                        9
biotype     259    HN      "Asparagine"                       10
biotype     260    O       "Asparagine"                       11
biotype     261    HA      "Asparagine"                       12
biotype     262    CB      "Asparagine"                      150
biotype     263    HB      "Asparagine"                      151
biotype     264    CG      "Asparagine"                      152
biotype     265    OD1     "Asparagine"                      153
biotype     266    ND2     "Asparagine"                      154
biotype     267    HD2     "Asparagine"                      155
biotype     268    N       "Glutamic Acid"                     7
biotype     269    CA      "Glutamic Acid"                     8
biotype     270    C       "Glutamic Acid"                     9
biotype     271    HN      "Glutamic Acid"                    10
biotype     272    O       "Glutamic Acid"                    11
biotype     273    HA      "Glutamic Acid"                    12
biotype     274    CB      "Glutamic Acid"                   156
biotype     275    HB      "Glutamic Acid"                   157
biotype     276    CG      "Glutamic Acid"                   158
biotype     277    HG      "Glutamic Acid"                   159
biotype     278    CD      "Glutamic Acid"                   160
biotype     279    OE      "Glutamic Acid"                   161
biotype     280    N       "Glutamic Acid (COOH)"              7
biotype     281    CA      "Glutamic Acid (COOH)"              8
biotype     282    C       "Glutamic Acid (COOH)"              9
biotype     283    HN      "Glutamic Acid (COOH)"             10
biotype     284    O       "Glutamic Acid (COOH)"             11
biotype     285    HA      "Glutamic Acid (COOH)"             12
biotype     286    CB      "Glutamic Acid (COOH)"            162
biotype     287    HB      "Glutamic Acid (COOH)"            163
biotype     288    CG      "Glutamic Acid (COOH)"            164
biotype     289    HG      "Glutamic Acid (COOH)"            165
biotype     290    CD      "Glutamic Acid (COOH)"            166
biotype     291    OE1     "Glutamic Acid (COOH)"            167
biotype     292    OE2     "Glutamic Acid (COOH)"            168
biotype     293    HE2     "Glutamic Acid (COOH)"            169
biotype     294    N       "Glutamine"                         7
biotype     295    CA      "Glutamine"                         8
biotype     296    C       "Glutamine"                         9
biotype     297    HN      "Glutamine"                        10
biotype     298    O       "Glutamine"                        11
biotype     299    HA      "Glutamine"                        12
biotype     300    CB      "Glutamine"                       170
biotype     301    HB      "Glutamine"                       171
biotype     302    CG      "Glutamine"                       172
biotype     303    HG      "Glutamine"                       173
biotype     304    CD      "Glutamine"                       174
biotype     305    OE1     "Glutamine"                       175
biotype     306    NE2     "Glutamine"                       176
biotype     307    HE2     "Glutamine"                       177
biotype     308    N       "Methionine"                        7
biotype     309    CA      "Methionine"                        8
biotype     310    C       "Methionine"                        9
biotype     311    HN      "Methionine"                       10
biotype     312    O       "Methionine"                       11
biotype     313    HA      "Methionine"                       12
biotype     314    CB      "Methionine"                      178
biotype     315    HB      "Methionine"                      179
biotype     316    CG      "Methionine"                      180
biotype     317    HG      "Methionine"                      181
biotype     318    SD      "Methionine"                      182
biotype     319    CE      "Methionine"                      183
biotype     320    HE      "Methionine"                      184
biotype     321    N       "Lysine"                            7
biotype     322    CA      "Lysine"                            8
biotype     323    C       "Lysine"                            9
biotype     324    HN      "Lysine"                           10
biotype     325    O       "Lysine"                           11
biotype     326    HA      "Lysine"                           12
biotype     327    CB      "Lysine"                          185
biotype     328    HB      "Lysine"                          186
biotype     329    CG      "Lysine"                          187
biotype     330    HG      "Lysine"                          188
biotype     331    CD      "Lysine"                          189
biotype     332    HD      "Lysine"                          190
biotype     333    CE      "Lysine"                          191
biotype     334    HE      "Lysine"                          192
biotype     335    NZ      "Lysine"                          193
biotype     336    HZ      "Lysine"                          194
biotype     337    N       "Lysine (NH2)"                      7
biotype     338    CA      "Lysine (NH2)"                      8
biotype     339    C       "Lysine (NH2)"                      9
biotype     340    HN      "Lysine (NH2)"                     10
biotype     341    O       "Lysine (NH2)"                     11
biotype     342    HA      "Lysine (NH2)"                     12
biotype     343    CB      "Lysine (NH2)"                    195
biotype     344    HB      "Lysine (NH2)"                    196
biotype     345    CG      "Lysine (NH2)"                    197
biotype     346    HG      "Lysine (NH2)"                    198
biotype     347    CD      "Lysine (NH2)"                    199
biotype     348    HD      "Lysine (NH2)"                    200
biotype     349    CE      "Lysine (NH2)"                    201
biotype     350    HE      "Lysine (NH2)"                    202
biotype     351    NZ      "Lysine (NH2)"                    203
biotype     352    HZ      "Lysine (NH2)"                    204
biotype     353    N       "Arginine"                          7
biotype     354    CA      "Arginine"                          8
biotype     355    C       "Arginine"                          9
biotype     356    HN      "Arginine"                         10
biotype     357    O       "Arginine"                         11
biotype     358    HA      "Arginine"                         12
biotype     359    CB      "Arginine"                        205
biotype     360    HB      "Arginine"                        206
biotype     361    CG      "Arginine"                        207
biotype     362    HG      "Arginine"                        208
biotype     363    CD      "Arginine"                        209
biotype     364    HD      "Arginine"                        210
biotype     365    NE      "Arginine"                        211
biotype     366    HE      "Arginine"                        212
biotype     367    CZ      "Arginine"                        213
biotype     368    NH      "Arginine"                        214
biotype     369    HH      "Arginine"                        215
biotype     370    N       "Ornithine"                         7
biotype     371    CA      "Ornithine"                         8
biotype     372    C       "Ornithine"                         9
biotype     373    HN      "Ornithine"                        10
biotype     374    O       "Ornithine"                        11
biotype     375    HA      "Ornithine"                        12
biotype     376    CB      "Ornithine"                       216
biotype     377    HB      "Ornithine"                       217
biotype     378    CG      "Ornithine"                       218
biotype     379    HG      "Ornithine"                       219
biotype     380    CD      "Ornithine"                       220
biotype     381    HD      "Ornithine"                       221
biotype     382    NE      "Ornithine"                       222
biotype     383    HE      "Ornithine"                       223
biotype     384    N       "MethylAlanine (AIB)"              -1
biotype     385    CA      "MethylAlanine (AIB)"              -1
biotype     386    C       "MethylAlanine (AIB)"              -1
biotype     387    HN      "MethylAlanine (AIB)"              -1
biotype     388    O       "MethylAlanine (AIB)"              -1
biotype     389    CB      "MethylAlanine (AIB)"              -1
biotype     390    HB      "MethylAlanine (AIB)"              -1
biotype     391    N       "Pyroglutamic Acid"                -1
biotype     392    CA      "Pyroglutamic Acid"                -1
biotype     393    C       "Pyroglutamic Acid"                -1
biotype     394    HN      "Pyroglutamic Acid"                -1
biotype     395    O       "Pyroglutamic Acid"                -1
biotype     396    HA      "Pyroglutamic Acid"                -1
biotype     397    CB      "Pyroglutamic Acid"                -1
biotype     398    HB      "Pyroglutamic Acid"                -1
biotype     399    CG      "Pyroglutamic Acid"                -1
biotype     400    HG      "Pyroglutamic Acid"                -1
biotype     401    CD      "Pyroglutamic Acid"                -1
biotype     402    OE      "Pyroglutamic Acid"                -1
biotype     403    N       "N-Terminal GLY"                  234
biotype     404    CA      "N-Terminal GLY"                    2
biotype     405    C       "N-Terminal GLY"                    3
biotype     406    HN      "N-Terminal GLY"                  235
biotype     407    O       "N-Terminal GLY"                    5
biotype     408    HA      "N-Terminal GLY"                    6
biotype     409    N       "N-Terminal ALA"                  234
biotype     410    CA      "N-Terminal ALA"                    8
biotype     411    C       "N-Terminal ALA"                    9
biotype     412    HN      "N-Terminal ALA"                  235
biotype     413    O       "N-Terminal ALA"                   11
biotype     414    HA      "N-Terminal ALA"                   12
biotype     415    N       "N-Terminal VAL"                  234
biotype     416    CA      "N-Terminal VAL"                    8
biotype     417    C       "N-Terminal VAL"                    9
biotype     418    HN      "N-Terminal VAL"                  235
biotype     419    O       "N-Terminal VAL"                   11
biotype     420    HA      "N-Terminal VAL"                   12
biotype     421    N       "N-Terminal LEU"                  234
biotype     422    CA      "N-Terminal LEU"                    8
biotype     423    C       "N-Terminal LEU"                    9
biotype     424    HN      "N-Terminal LEU"                  235
biotype     425    O       "N-Terminal LEU"                   11
biotype     426    HA      "N-Terminal LEU"                   12
biotype     427    N       "N-Terminal ILE"                  234
biotype     428    CA      "N-Terminal ILE"                    8
biotype     429    C       "N-Terminal ILE"                    9
biotype     430    HN      "N-Terminal ILE"                  235
biotype     431    O       "N-Terminal ILE"                   11
biotype     432    HA      "N-Terminal ILE"                   12
biotype     433    N       "N-Terminal SER"                  234
biotype     434    CA      "N-Terminal SER"                   33
biotype     435    C       "N-Terminal SER"                    9
biotype     436    HN      "N-Terminal SER"                  235
biotype     437    O       "N-Terminal SER"                   11
biotype     438    HA      "N-Terminal SER"                   12
biotype     439    N       "N-Terminal THR"                  234
biotype     440    CA      "N-Terminal THR"                   33
biotype     441    C       "N-Terminal THR"                    9
biotype     442    HN      "N-Terminal THR"                  235
biotype     443    O       "N-Terminal THR"                   11
biotype     444    HA      "N-Terminal THR"                   12
biotype     445    N       "N-Terminal CYS (SH)"             234
biotype     446    CA      "N-Terminal CYS (SH)"              44
biotype     447    C       "N-Terminal CYS (SH)"               9
biotype     448    HN      "N-Terminal CYS (SH)"             235
biotype     449    O       "N-Terminal CYS (SH)"              11
biotype     450    HA      "N-Terminal CYS (SH)"              12
biotype     451    N       "N-Terminal CYX (SS)"             234
biotype     452    CA      "N-Terminal CYX (SS)"              44
biotype     453    C       "N-Terminal CYX (SS)"               9
biotype     454    HN      "N-Terminal CYX (SS)"             235
biotype     455    O       "N-Terminal CYX (SS)"              11
biotype     456    HA      "N-Terminal CYX (SS)"              12
biotype     457    N       "N-Terminal CYD (S-)"             234
biotype     458    CA      "N-Terminal CYD (S-)"              44
biotype     459    C       "N-Terminal CYD (S-)"               9
biotype     460    HN      "N-Terminal CYD (S-)"             235
biotype     461    O       "N-Terminal CYD (S-)"              11
biotype     462    HA      "N-Terminal CYD (S-)"              12
biotype     463    N       "N-Terminal PRO"                  244
biotype     464    CA      "N-Terminal PRO"                  246
biotype     465    C       "N-Terminal PRO"                  247
biotype     466    HN      "N-Terminal PRO"                  245
biotype     467    O       "N-Terminal PRO"                  248
biotype     468    HA      "N-Terminal PRO"                  249
biotype     469    CD      "N-Terminal PRO"                  250
biotype     470    HD      "N-Terminal PRO"                  251
biotype     471    N       "N-Terminal PHE"                  234
biotype     472    CA      "N-Terminal PHE"                    8
biotype     473    C       "N-Terminal PHE"                    9
biotype     474    HN      "N-Terminal PHE"                  235
biotype     475    O       "N-Terminal PHE"                   11
biotype     476    HA      "N-Terminal PHE"                   12
biotype     477    N       "N-Terminal TYR"                  234
biotype     478    CA      "N-Terminal TYR"                    8
biotype     479    C       "N-Terminal TYR"                    9
biotype     480    HN      "N-Terminal TYR"                  235
biotype     481    O       "N-Terminal TYR"                   11
biotype     482    HA      "N-Terminal TYR"                   12
biotype     483    N       "N-Terminal TYD (O-)"             234
biotype     484    CA      "N-Terminal TYD (O-)"               8
biotype     485    C       "N-Terminal TYD (O-)"               9
biotype     486    HN      "N-Terminal TYD (O-)"             235
biotype     487    O       "N-Terminal TYD (O-)"              11
biotype     488    HA      "N-Terminal TYD (O-)"              12
biotype     489    N       "N-Terminal TRP"                  234
biotype     490    CA      "N-Terminal TRP"                    8
biotype     491    C       "N-Terminal TRP"                    9
biotype     492    HN      "N-Terminal TRP"                  235
biotype     493    O       "N-Terminal TRP"                   11
biotype     494    HA      "N-Terminal TRP"                   12
biotype     495    N       "N-Terminal HIS (+)"              234
biotype     496    CA      "N-Terminal HIS (+)"                8
biotype     497    C       "N-Terminal HIS (+)"                9
biotype     498    HN      "N-Terminal HIS (+)"              235
biotype     499    O       "N-Terminal HIS (+)"               11
biotype     500    HA      "N-Terminal HIS (+)"               12
biotype     501    N       "N-Terminal HIS (HD)"             234
biotype     502    CA      "N-Terminal HIS (HD)"               8
biotype     503    C       "N-Terminal HIS (HD)"               9
biotype     504    HN      "N-Terminal HIS (HD)"             235
biotype     505    O       "N-Terminal HIS (HD)"              11
biotype     506    HA      "N-Terminal HIS (HD)"              12
biotype     507    N       "N-Terminal HIS (HE)"             234
biotype     508    CA      "N-Terminal HIS (HE)"               8
biotype     509    C       "N-Terminal HIS (HE)"               9
biotype     510    HN      "N-Terminal HIS (HE)"             235
biotype     511    O       "N-Terminal HIS (HE)"              11
biotype     512    HA      "N-Terminal HIS (HE)"              12
biotype     513    N       "N-Terminal ASP"                  234
biotype     514    CA      "N-Terminal ASP"                    8
biotype     515    C       "N-Terminal ASP"                    9
biotype     516    HN      "N-Terminal ASP"                  235
biotype     517    O       "N-Terminal ASP"                   11
biotype     518    HA      "N-Terminal ASP"                   12
biotype     519    N       "N-Terminal ASH (COOH)"           234
biotype     520    CA      "N-Terminal ASH (COOH)"             8
biotype     521    C       "N-Terminal ASH (COOH)"             9
biotype     522    HN      "N-Terminal ASH (COOH)"           235
biotype     523    O       "N-Terminal ASH (COOH)"            11
biotype     524    HA      "N-Terminal ASH (COOH)"            12
biotype     525    N       "N-Terminal ASN"                  234
biotype     526    CA      "N-Terminal ASN"                    8
biotype     527    C       "N-Terminal ASN"                    9
biotype     528    HN      "N-Terminal ASN"                  235
biotype     529    O       "N-Terminal ASN"                   11
biotype     530    HA      "N-Terminal ASN"                   12
biotype     531    N       "N-Terminal GLU"                  234
biotype     532    CA      "N-Terminal GLU"                    8
biotype     533    C       "N-Terminal GLU"                    9
biotype     534    HN      "N-Terminal GLU"                  235
biotype     535    O       "N-Terminal GLU"                   11
biotype     536    HA      "N-Terminal GLU"                   12
biotype     537    N       "N-Terminal GLH (COOH)"           234
biotype     538    CA      "N-Terminal GLH (COOH)"             8
biotype     539    C       "N-Terminal GLH (COOH)"             9
biotype     540    HN      "N-Terminal GLH (COOH)"           235
biotype     541    O       "N-Terminal GLH (COOH)"            11
biotype     542    HA      "N-Terminal GLH (COOH)"            12
biotype     543    N       "N-Terminal GLN"                  234
biotype     544    CA      "N-Terminal GLN"                    8
biotype     545    C       "N-Terminal GLN"                    9
biotype     546    HN      "N-Terminal GLN"                  235
biotype     547    O       "N-Terminal GLN"                   11
biotype     548    HA      "N-Terminal GLN"                   12
biotype     549    N       "N-Terminal MET"                  234
biotype     550    CA      "N-Terminal MET"                    8
biotype     551    C       "N-Terminal MET"                    9
biotype     552    HN      "N-Terminal MET"                  235
biotype     553    O       "N-Terminal MET"                   11
biotype     554    HA      "N-Terminal MET"                   12
biotype     555    N       "N-Terminal LYS"                  234
biotype     556    CA      "N-Terminal LYS"                    8
biotype     557    C       "N-Terminal LYS"                    9
biotype     558    HN      "N-Terminal LYS"                  235
biotype     559    O       "N-Terminal LYS"                   11
biotype     560    HA      "N-Terminal LYS"                   12
biotype     561    N       "N-Terminal LYD (NH2)"            234
biotype     562    CA      "N-Terminal LYD (NH2)"              8
biotype     563    C       "N-Terminal LYD (NH2)"              9
biotype     564    HN      "N-Terminal LYD (NH2)"            235
biotype     565    O       "N-Terminal LYD (NH2)"             11
biotype     566    HA      "N-Terminal LYD (NH2)"             12
biotype     567    N       "N-Terminal ARG"                  234
biotype     568    CA      "N-Terminal ARG"                    8
biotype     569    C       "N-Terminal ARG"                    9
biotype     570    HN      "N-Terminal ARG"                  235
biotype     571    O       "N-Terminal ARG"                   11
biotype     572    HA      "N-Terminal ARG"                   12
biotype     573    N       "N-Terminal ORN"                  234
biotype     574    CA      "N-Terminal ORN"                    8
biotype     575    C       "N-Terminal ORN"                    9
biotype     576    HN      "N-Terminal ORN"                  235
biotype     577    O       "N-Terminal ORN"                   11
biotype     578    HA      "N-Terminal ORN"                   12
biotype     579    N       "N-Terminal AIB"                   -1
biotype     580    CA      "N-Terminal AIB"                   -1
biotype     581    C       "N-Terminal AIB"                   -1
biotype     582    HN      "N-Terminal AIB"                   -1
biotype     583    O       "N-Terminal AIB"                   -1
biotype     584    N       "C-Terminal GLY"                    1
biotype     585    CA      "C-Terminal GLY"                    2
biotype     586    C       "C-Terminal GLY"                  238
biotype     587    HN      "C-Terminal GLY"                    4
biotype     588    OXT     "C-Terminal GLY"                  239
biotype     589    HA      "C-Terminal GLY"                    6
biotype     590    N       "C-Terminal ALA"                    7
biotype     591    CA      "C-Terminal ALA"                    8
biotype     592    C       "C-Terminal ALA"                  238
biotype     593    HN      "C-Terminal ALA"                   10
biotype     594    OXT     "C-Terminal ALA"                  239
biotype     595    HA      "C-Terminal ALA"                   12
biotype     596    N       "C-Terminal VAL"                    7
biotype     597    CA      "C-Terminal VAL"                    8
biotype     598    C       "C-Terminal VAL"                  238
biotype     599    HN      "C-Terminal VAL"                   10
biotype     600    OXT     "C-Terminal VAL"                  239
biotype     601    HA      "C-Terminal VAL"                   12
biotype     602    N       "C-Terminal LEU"                    7
biotype     603    CA      "C-Terminal LEU"                    8
biotype     604    C       "C-Terminal LEU"                  238
biotype     605    HN      "C-Terminal LEU"                   10
biotype     606    OXT     "C-Terminal LEU"                  239
biotype     607    HA      "C-Terminal LEU"                   12
biotype     608    N       "C-Terminal ILE"                    7
biotype     609    CA      "C-Terminal ILE"                    8
biotype     610    C       "C-Terminal ILE"                  238
biotype     611    HN      "C-Terminal ILE"                   10
biotype     612    OXT     "C-Terminal ILE"                  239
biotype     613    HA      "C-Terminal ILE"                   12
biotype     614    N       "C-Terminal SER"                    7
biotype     615    CA      "C-Terminal SER"                   33
biotype     616    C       "C-Terminal SER"                  238
biotype     617    HN      "C-Terminal SER"                   10
biotype     618    OXT     "C-Terminal SER"                  239
biotype     619    HA      "C-Terminal SER"                   12
biotype     620    N       "C-Terminal THR"                    7
biotype     621    CA      "C-Terminal THR"                   33
biotype     622    C       "C-Terminal THR"                  238
biotype     623    HN      "C-Terminal THR"                   10
biotype     624    OXT     "C-Terminal THR"                  239
biotype     625    HA      "C-Terminal THR"                   12
biotype     626    N       "C-Terminal CYS (SH)"               7
biotype     627    CA      "C-Terminal CYS (SH)"              44
biotype     628    C       "C-Terminal CYS (SH)"             238
biotype     629    HN      "C-Terminal CYS (SH)"              10
biotype     630    OXT     "C-Terminal CYS (SH)"             239
biotype     631    HA      "C-Terminal CYS (SH)"              12
biotype     632    N       "C-Terminal CYX (SS)"               7
biotype     633    CA      "C-Terminal CYX (SS)"              44
biotype     634    C       "C-Terminal CYX (SS)"             238
biotype     635    HN      "C-Terminal CYX (SS)"              10
biotype     636    OXT     "C-Terminal CYX (SS)"             239
biotype     637    HA      "C-Terminal CYX (SS)"              12
biotype     638    N       "C-Terminal CYD (S-)"               7
biotype     639    CA      "C-Terminal CYD (S-)"              44
biotype     640    C       "C-Terminal CYD (S-)"             238
biotype     641    HN      "C-Terminal CYD (S-)"              10
biotype     642    OXT     "C-Terminal CYD (S-)"             239
biotype     643    HA      "C-Terminal CYD (S-)"              12
biotype     644    N       "C-Terminal PRO"                   53
biotype     645    CA      "C-Terminal PRO"                   54
biotype     646    C       "C-Terminal PRO"                  238
biotype     647    OXT     "C-Terminal PRO"                  239
biotype     648    HA      "C-Terminal PRO"                   57
biotype     649    N       "C-Terminal PHE"                    7
biotype     650    CA      "C-Terminal PHE"                    8
biotype     651    C       "C-Terminal PHE"                  238
biotype     652    HN      "C-Terminal PHE"                   10
biotype     653    OXT     "C-Terminal PHE"                  239
biotype     654    HA      "C-Terminal PHE"                   12
biotype     655    N       "C-Terminal TYR"                    7
biotype     656    CA      "C-Terminal TYR"                    8
biotype     657    C       "C-Terminal TYR"                  238
biotype     658    HN      "C-Terminal TYR"                   10
biotype     659    OXT     "C-Terminal TYR"                  239
biotype     660    HA      "C-Terminal TYR"                   12
biotype     661    N       "C-Terminal TYD (O-)"               7
biotype     662    CA      "C-Terminal TYD (O-)"               8
biotype     663    C       "C-Terminal TYD (O-)"             238
biotype     664    HN      "C-Terminal TYD (O-)"              10
biotype     665    OXT     "C-Terminal TYD (O-)"             239
biotype     666    HA      "C-Terminal TYD (O-)"              12
biotype     667    N       "C-Terminal TRP"                    7
biotype     668    CA      "C-Terminal TRP"                    8
biotype     669    C       "C-Terminal TRP"                  238
biotype     670    HN      "C-Terminal TRP"                   10
biotype     671    OXT     "C-Terminal TRP"                  239
biotype     672    HA      "C-Terminal TRP"                   12
biotype     673    N       "C-Terminal HIS (+)"                7
biotype     674    CA      "C-Terminal HIS (+)"                8
biotype     675    C       "C-Terminal HIS (+)"              238
biotype     676    HN      "C-Terminal HIS (+)"               10
biotype     677    OXT     "C-Terminal HIS (+)"              239
biotype     678    HA      "C-Terminal HIS (+)"               12
biotype     679    N       "C-Terminal HIS (HD)"               7
biotype     680    CA      "C-Terminal HIS (HD)"               8
biotype     681    C       "C-Terminal HIS (HD)"             238
biotype     682    HN      "C-Terminal HIS (HD)"              10
biotype     683    OXT     "C-Terminal HIS (HD)"             239
biotype     684    HA      "C-Terminal HIS (HD)"              12
biotype     685    N       "C-Terminal HIS (HE)"               7
biotype     686    CA      "C-Terminal HIS (HE)"               8
biotype     687    C       "C-Terminal HIS (HE)"             238
biotype     688    HN      "C-Terminal HIS (HE)"              10
biotype     689    OXT     "C-Terminal HIS (HE)"             239
biotype     690    HA      "C-Terminal HIS (HE)"              12
biotype     691    N       "C-Terminal ASP"                    7
biotype     692    CA      "C-Terminal ASP"                    8
biotype     693    C       "C-Terminal ASP"                  238
biotype     694    HN      "C-Terminal ASP"                   10
biotype     695    OXT     "C-Terminal ASP"                  239
biotype     696    HA      "C-Terminal ASP"                   12
biotype     697    N       "C-Terminal ASH (COOH)"             7
biotype     698    CA      "C-Terminal ASH (COOH)"             8
biotype     699    C       "C-Terminal ASH (COOH)"           238
biotype     700    HN      "C-Terminal ASH (COOH)"            10
biotype     701    OXT     "C-Terminal ASH (COOH)"           239
biotype     702    HA      "C-Terminal ASH (COOH)"            12
biotype     703    N       "C-Terminal ASN"                    7
biotype     704    CA      "C-Terminal ASN"                    8
biotype     705    C       "C-Terminal ASN"                  238
biotype     706    HN      "C-Terminal ASN"                   10
biotype     707    OXT     "C-Terminal ASN"                  239
biotype     708    HA      "C-Terminal ASN"                   12
biotype     709    N       "C-Terminal GLU"                    7
biotype     710    CA      "C-Terminal GLU"                    8
biotype     711    C       "C-Terminal GLU"                  238
biotype     712    HN      "C-Terminal GLU"                   10
biotype     713    OXT     "C-Terminal GLU"                  239
biotype     714    HA      "C-Terminal GLU"                   12
biotype     715    N       "C-Terminal GLH (COOH)"             7
biotype     716    CA      "C-Terminal GLH (COOH)"             8
biotype     717    C       "C-Terminal GLH (COOH)"           238
biotype     718    HN      "C-Terminal GLH (COOH)"            10
biotype     719    OXT     "C-Terminal GLH (COOH)"           239
biotype     720    HA      "C-Terminal GLH (COOH)"            12
biotype     721    N       "C-Terminal GLN"                    7
biotype     722    CA      "C-Terminal GLN"                    8
biotype     723    C       "C-Terminal GLN"                  238
biotype     724    HN      "C-Terminal GLN"                   10
biotype     725    OXT     "C-Terminal GLN"                  239
biotype     726    HA      "C-Terminal GLN"                   12
biotype     727    N       "C-Terminal MET"                    7
biotype     728    CA      "C-Terminal MET"                    8
biotype     729    C       "C-Terminal MET"                  238
biotype     730    HN      "C-Terminal MET"                   10
biotype     731    OXT     "C-Terminal MET"                  239
biotype     732    HA      "C-Terminal MET"                   12
biotype     733    N       "C-Terminal LYS"                    7
biotype     734    CA      "C-Terminal LYS"                    8
biotype     735    C       "C-Terminal LYS"                  238
biotype     736    HN      "C-Terminal LYS"                   10
biotype     737    OXT     "C-Terminal LYS"                  239
biotype     738    HA      "C-Terminal LYS"                   12
biotype     739    N       "C-Terminal LYD (NH2)"              7
biotype     740    CA      "C-Terminal LYD (NH2)"              8
biotype     741    C       "C-Terminal LYD (NH2)"            238
biotype     742    HN      "C-Terminal LYD (NH2)"             10
biotype     743    OXT     "C-Terminal LYD (NH2)"            239
biotype     744    HA      "C-Terminal LYD (NH2)"             12
biotype     745    N       "C-Terminal ARG"                    7
biotype     746    CA      "C-Terminal ARG"                    8
biotype     747    C       "C-Terminal ARG"                  238
biotype     748    HN      "C-Terminal ARG"                   10
biotype     749    OXT     "C-Terminal ARG"                  239
biotype     750    HA      "C-Terminal ARG"                   12
biotype     751    N       "C-Terminal ORN"                    7
biotype     752    CA      "C-Terminal ORN"                    8
biotype     753    C       "C-Terminal ORN"                  238
biotype     754    HN      "C-Terminal ORN"                   10
biotype     755    OXT     "C-Terminal ORN"                  239
biotype     756    HA      "C-Terminal ORN"                   12
biotype     757    N       "C-Terminal AIB"                   -1
biotype     758    CA      "C-Terminal AIB"                   -1
biotype     759    C       "C-Terminal AIB"                   -1
biotype     760    HN      "C-Terminal AIB"                   -1
biotype     761    OXT     "C-Terminal AIB"                   -1
biotype     762    N       "Deprotonated N-Terminus"         236
biotype     763    H       "Deprotonated N-Terminus"         237
biotype     764    C       "Formyl N-Terminus"                -1
biotype     765    H       "Formyl N-Terminus"                -1
biotype     766    O       "Formyl N-Terminus"                -1
biotype     767    CH3     "Acetyl N-Terminus"               224
biotype     768    H       "Acetyl N-Terminus"               225
biotype     769    C       "Acetyl N-Terminus"               226
biotype     770    O       "Acetyl N-Terminus"               227
biotype     771    C       "Protonated C-Terminus"           240
biotype     772    O       "Protonated C-Terminus"           241
biotype     773    OH      "Protonated C-Terminus"           242
biotype     774    HO      "Protonated C-Terminus"           243
biotype     775    N       "Amide C-Terminus"                228
biotype     776    HN      "Amide C-Terminus"                229
biotype     777    N       "N-MeAmide C-Terminus"            230
biotype     778    HN      "N-MeAmide C-Terminus"            231
biotype     779    CH3     "N-MeAmide C-Terminus"            232
biotype     780    H       "N-MeAmide C-Terminus"            233
biotype    1001    O5*     "Adenosine"                       332
biotype    1002    C5*     "Adenosine"                       333
biotype    1003    H5*1    "Adenosine"                       334
biotype    1004    H5*2    "Adenosine"                       335
biotype    1005    C4*     "Adenosine"                       336
biotype    1006    H4*     "Adenosine"                       337
biotype    1007    O4*     "Adenosine"                       338
biotype    1008    C1*     "Adenosine"                       339
biotype    1009    H1*     "Adenosine"                       340
biotype    1010    C3*     "Adenosine"                       341
biotype    1011    H3*     "Adenosine"                       342
biotype    1012    C2*     "Adenosine"                       343
biotype    1013    H2*     "Adenosine"                       344
biotype    1014    O2*     "Adenosine"                       345
biotype    1015    HO*     "Adenosine"                       346
biotype    1016    O3*     "Adenosine"                       347
biotype    1017    N9      "Adenosine"                       252
biotype    1018    C4      "Adenosine"                       253
biotype    1019    C5      "Adenosine"                       254
biotype    1020    N7      "Adenosine"                       255
biotype    1021    C8      "Adenosine"                       256
biotype    1022    N3      "Adenosine"                       257
biotype    1023    C2      "Adenosine"                       258
biotype    1024    N1      "Adenosine"                       259
biotype    1025    C6      "Adenosine"                       260
biotype    1026    H2      "Adenosine"                       261
biotype    1027    N6      "Adenosine"                       262
biotype    1028    H61     "Adenosine"                       263
biotype    1029    H62     "Adenosine"                       264
biotype    1030    H8      "Adenosine"                       265
biotype    1031    O5*     "Guanosine"                       332
biotype    1032    C5*     "Guanosine"                       333
biotype    1033    H5*1    "Guanosine"                       334
biotype    1034    H5*2    "Guanosine"                       335
biotype    1035    C4*     "Guanosine"                       336
biotype    1036    H4*     "Guanosine"                       337
biotype    1037    O4*     "Guanosine"                       338
biotype    1038    C1*     "Guanosine"                       339
biotype    1039    H1*     "Guanosine"                       340
biotype    1040    C3*     "Guanosine"                       341
biotype    1041    H3*     "Guanosine"                       342
biotype    1042    C2*     "Guanosine"                       343
biotype    1043    H2*     "Guanosine"                       344
biotype    1044    O2*     "Guanosine"                       345
biotype    1045    HO*     "Guanosine"                       346
biotype    1046    O3*     "Guanosine"                       347
biotype    1047    N9      "Guanosine"                       278
biotype    1048    C4      "Guanosine"                       279
biotype    1049    C5      "Guanosine"                       280
biotype    1050    N7      "Guanosine"                       281
biotype    1051    C8      "Guanosine"                       282
biotype    1052    N3      "Guanosine"                       283
biotype    1053    C2      "Guanosine"                       284
biotype    1054    N1      "Guanosine"                       285
biotype    1055    C6      "Guanosine"                       286
biotype    1056    H1      "Guanosine"                       287
biotype    1057    N2      "Guanosine"                       288
biotype    1058    H21     "Guanosine"                       289
biotype    1059    H22     "Guanosine"                       290
biotype    1060    O6      "Guanosine"                       291
biotype    1061    H8      "Guanosine"                       292
biotype    1062    O5*     "Cytidine"                        316
biotype    1063    C5*     "Cytidine"                        317
biotype    1064    H5*1    "Cytidine"                        318
biotype    1065    H5*2    "Cytidine"                        319
biotype    1066    C4*     "Cytidine"                        320
biotype    1067    H4*     "Cytidine"                        321
biotype    1068    O4*     "Cytidine"                        322
biotype    1069    C1*     "Cytidine"                        323
biotype    1070    H1*     "Cytidine"                        324
biotype    1071    C3*     "Cytidine"                        325
biotype    1072    H3*     "Cytidine"                        326
biotype    1073    C2*     "Cytidine"                        327
biotype    1074    H2*     "Cytidine"                        328
biotype    1075    O2*     "Cytidine"                        329
biotype    1076    HO*     "Cytidine"                        330
biotype    1077    O3*     "Cytidine"                        331
biotype    1078    N1      "Cytidine"                        266
biotype    1079    C2      "Cytidine"                        267
biotype    1080    N3      "Cytidine"                        268
biotype    1081    C4      "Cytidine"                        269
biotype    1082    C5      "Cytidine"                        270
biotype    1083    C6      "Cytidine"                        271
biotype    1084    O2      "Cytidine"                        272
biotype    1085    N4      "Cytidine"                        273
biotype    1086    H41     "Cytidine"                        274
biotype    1087    H42     "Cytidine"                        275
biotype    1088    H5      "Cytidine"                        276
biotype    1089    H6      "Cytidine"                        277
biotype    1090    O5*     "Uridine"                         316
biotype    1091    C5*     "Uridine"                         317
biotype    1092    H5*1    "Uridine"                         318
biotype    1093    H5*2    "Uridine"                         319
biotype    1094    C4*     "Uridine"                         320
biotype    1095    H4*     "Uridine"                         321
biotype    1096    O4*     "Uridine"                         322
biotype    1097    C1*     "Uridine"                         323
biotype    1098    H1*     "Uridine"                         324
biotype    1099    C3*     "Uridine"                         325
biotype    1100    H3*     "Uridine"                         326
biotype    1101    C2*     "Uridine"                         327
biotype    1102    H2*     "Uridine"                         328
biotype    1103    O2*     "Uridine"                         329
biotype    1104    HO*     "Uridine"                         330
biotype    1105    O3*     "Uridine"                         331
biotype    1106    N1      "Uridine"                         305
biotype    1107    C2      "Uridine"                         306
biotype    1108    N3      "Uridine"                         307
biotype    1109    C4      "Uridine"                         308
biotype    1110    C5      "Uridine"                         309
biotype    1111    C6      "Uridine"                         310
biotype    1112    O2      "Uridine"                         311
biotype    1113    H3      "Uridine"                         312
biotype    1114    O4      "Uridine"                         313
biotype    1115    H5      "Uridine"                         314
biotype    1116    H6      "Uridine"                         315
biotype    1117    O5*     "Deoxyadenosine"                  363
biotype    1118    C5*     "Deoxyadenosine"                  364
biotype    1119    H5*1    "Deoxyadenosine"                  365
biotype    1120    H5*2    "Deoxyadenosine"                  366
biotype    1121    C4*     "Deoxyadenosine"                  367
biotype    1122    H4*     "Deoxyadenosine"                  368
biotype    1123    O4*     "Deoxyadenosine"                  369
biotype    1124    C1*     "Deoxyadenosine"                  370
biotype    1125    H1*     "Deoxyadenosine"                  371
biotype    1126    C3*     "Deoxyadenosine"                  372
biotype    1127    H3*     "Deoxyadenosine"                  373
biotype    1128    C2*     "Deoxyadenosine"                  374
biotype    1129    H2*1    "Deoxyadenosine"                  375
biotype    1130    H2*2    "Deoxyadenosine"                  376
biotype    1131    O3*     "Deoxyadenosine"                  377
biotype    1132    N9      "Deoxyadenosine"                  252
biotype    1133    C4      "Deoxyadenosine"                  253
biotype    1134    C5      "Deoxyadenosine"                  254
biotype    1135    N7      "Deoxyadenosine"                  255
biotype    1136    C8      "Deoxyadenosine"                  256
biotype    1137    N3      "Deoxyadenosine"                  257
biotype    1138    C2      "Deoxyadenosine"                  258
biotype    1139    N1      "Deoxyadenosine"                  259
biotype    1140    C6      "Deoxyadenosine"                  260
biotype    1141    H2      "Deoxyadenosine"                  261
biotype    1142    N6      "Deoxyadenosine"                  262
biotype    1143    H61     "Deoxyadenosine"                  263
biotype    1144    H62     "Deoxyadenosine"                  264
biotype    1145    H8      "Deoxyadenosine"                  265
biotype    1146    O5*     "Deoxyguanosine"                  363
biotype    1147    C5*     "Deoxyguanosine"                  364
biotype    1148    H5*1    "Deoxyguanosine"                  365
biotype    1149    H5*2    "Deoxyguanosine"                  366
biotype    1150    C4*     "Deoxyguanosine"                  367
biotype    1151    H4*     "Deoxyguanosine"                  368
biotype    1152    O4*     "Deoxyguanosine"                  369
biotype    1153    C1*     "Deoxyguanosine"                  370
biotype    1154    H1*     "Deoxyguanosine"                  371
biotype    1155    C3*     "Deoxyguanosine"                  372
biotype    1156    H3*     "Deoxyguanosine"                  373
biotype    1157    C2*     "Deoxyguanosine"                  374
biotype    1158    H2*1    "Deoxyguanosine"                  375
biotype    1159    H2*2    "Deoxyguanosine"                  376
biotype    1160    O3*     "Deoxyguanosine"                  377
biotype    1161    N9      "Deoxyguanosine"                  278
biotype    1162    C4      "Deoxyguanosine"                  279
biotype    1163    C5      "Deoxyguanosine"                  280
biotype    1164    N7      "Deoxyguanosine"                  281
biotype    1165    C8      "Deoxyguanosine"                  282
biotype    1166    N3      "Deoxyguanosine"                  283
biotype    1167    C2      "Deoxyguanosine"                  284
biotype    1168    N1      "Deoxyguanosine"                  285
biotype    1169    C6      "Deoxyguanosine"                  286
biotype    1170    H1      "Deoxyguanosine"                  287
biotype    1171    N2      "Deoxyguanosine"                  288
biotype    1172    H21     "Deoxyguanosine"                  289
biotype    1173    H22     "Deoxyguanosine"                  290
biotype    1174    O6      "Deoxyguanosine"                  291
biotype    1175    H8      "Deoxyguanosine"                  292
biotype    1176    O5*     "Deoxycytidine"                   348
biotype    1177    C5*     "Deoxycytidine"                   349
biotype    1178    H5*1    "Deoxycytidine"                   350
biotype    1179    H5*2    "Deoxycytidine"                   351
biotype    1180    C4*     "Deoxycytidine"                   352
biotype    1181    H4*     "Deoxycytidine"                   353
biotype    1182    O4*     "Deoxycytidine"                   354
biotype    1183    C1*     "Deoxycytidine"                   355
biotype    1184    H1*     "Deoxycytidine"                   356
biotype    1185    C3*     "Deoxycytidine"                   357
biotype    1186    H3*     "Deoxycytidine"                   358
biotype    1187    C2*     "Deoxycytidine"                   359
biotype    1188    H2*1    "Deoxycytidine"                   360
biotype    1189    H2*2    "Deoxycytidine"                   361
biotype    1190    O3*     "Deoxycytidine"                   362
biotype    1191    N1      "Deoxycytidine"                   266
biotype    1192    C2      "Deoxycytidine"                   267
biotype    1193    N3      "Deoxycytidine"                   268
biotype    1194    C4      "Deoxycytidine"                   269
biotype    1195    C5      "Deoxycytidine"                   270
biotype    1196    C6      "Deoxycytidine"                   271
biotype    1197    O2      "Deoxycytidine"                   272
biotype    1198    N4      "Deoxycytidine"                   273
biotype    1199    H41     "Deoxycytidine"                   274
biotype    1200    H42     "Deoxycytidine"                   275
biotype    1201    H5      "Deoxycytidine"                   276
biotype    1202    H6      "Deoxycytidine"                   277
biotype    1203    O5*     "Deoxythymidine"                  348
biotype    1204    C5*     "Deoxythymidine"                  349
biotype    1205    H5*1    "Deoxythymidine"                  350
biotype    1206    H5*2    "Deoxythymidine"                  351
biotype    1207    C4*     "Deoxythymidine"                  352
biotype    1208    H4*     "Deoxythymidine"                  353
biotype    1209    O4*     "Deoxythymidine"                  354
biotype    1210    C1*     "Deoxythymidine"                  355
biotype    1211    H1*     "Deoxythymidine"                  356
biotype    1212    C3*     "Deoxythymidine"                  357
biotype    1213    H3*     "Deoxythymidine"                  358
biotype    1214    C2*     "Deoxythymidine"                  359
biotype    1215    H2*1    "Deoxythymidine"                  360
biotype    1216    H2*2    "Deoxythymidine"                  361
biotype    1217    O3*     "Deoxythymidine"                  362
biotype    1218    N1      "Deoxythymidine"                  293
biotype    1219    C2      "Deoxythymidine"                  294
biotype    1220    N3      "Deoxythymidine"                  295
biotype    1221    C4      "Deoxythymidine"                  296
biotype    1222    C5      "Deoxythymidine"                  297
biotype    1223    C6      "Deoxythymidine"                  298
biotype    1224    O2      "Deoxythymidine"                  299
biotype    1225    H3      "Deoxythymidine"                  300
biotype    1226    O4      "Deoxythymidine"                  301
biotype    1227    C7      "Deoxythymidine"                  302
biotype    1228    H7      "Deoxythymidine"                  303
biotype    1229    H6      "Deoxythymidine"                  304
biotype    1230    P       "Phosphodiester RNA"              378
biotype    1231    OP      "Phosphodiester RNA"              379
biotype    1232    O5*     "5'-Hydroxyl RNA"                 380
biotype    1233    H5T     "5'-Hydroxyl RNA"                 381
biotype    1234    O5*     "5'-Monophosphate OS RNA"         382
biotype    1235    P       "5'-Monophosphate P RNA"          383
biotype    1236    OP      "5'-Monophosphate OP RNA"         384
biotype    1237    O3*     "3'-Hydroxyl RNA"                 385
biotype    1238    H3T     "3'-Hydroxyl RNA"                 386
biotype    1239    O3*     "3'-Monophosphate OS RNA"         387
biotype    1240    P       "3'-Monophosphate P RNA"          388
biotype    1241    OP      "3'-Monophosphate OP RNA"         389
biotype    1242    P       "Phosphodiester DNA"              390
biotype    1243    OP      "Phosphodiester DNA"              391
biotype    1244    O5*     "5'-Hydroxyl DNA"                 392
biotype    1245    H5T     "5'-Hydroxyl DNA"                 393
biotype    1246    O5*     "5'-Monophosphate OS DNA"         394
biotype    1247    P       "5'-Monophosphate P DNA"          395
biotype    1248    OP      "5'-Monophosphate OP DNA"         396
biotype    1249    O3*     "3'-Hydroxyl DNA"                 397
biotype    1250    H3T     "3'-Hydroxyl DNA"                 398
biotype    1251    O3*     "3'-Monophosphate OS DNA"         399
biotype    1252    P       "3'-Monophosphate P DNA"          400
biotype    1253    OP      "3'-Monophosphate OP DNA"         401
biotype    2001    O       "Water"                           402
biotype    2002    H       "Water"                           403
biotype    2003    LI      "Lithium Ion"                     404
biotype    2004    NA      "Sodium Ion"                      405
biotype    2005    K       "Potassium Ion"                   406
biotype    2006    RB      "Rubidium Ion"                    407
biotype    2007    CS      "Cesium Ion"                      408
biotype    2008    MG      "Magnesium Ion"                   410
biotype    2009    CA      "Calcium Ion"                     411
biotype    2012    F       "Fluoride Ion"                    413
biotype    2013    CL      "Chloride Ion"                    414
biotype    2014    BR      "Bromide Ion"                     415
biotype    2015    I       "Iodide Ion"                      416
)**";
}
