# QuickLib
Header-only C++ library with useful data structures and utilities for low-latency applications.

# Readiness
Some of the library is production-ready; some is not. Here is a table with the latest completion estimates:


| Directory / File                              | Completion Estimate | Production-Ready?              | Basis                                                                                                         |
| --------------------------------------------- | ------------------- | ------------------------------ | ------------------------------------------------------------------------------------------------------------- |
| **[SpinMutex][1]**                            | 85%                 | **Beta**                      | Production worthy, but barely. Still needs ISA-specific handling. |
| **[ThreadPool][2]**                            | 85%                 | **Alpha**     |                Technically ready, but can be made significantly more performant.    |                                   
| **[UniquePtr][3]**                                    | 95%                  | **Yes**                      | Ready to go.                                                             |
| **[SPSCQueue][4]**                                 | 60%                  | **Alpha**                      | Only use this queue to play around. Still needs a few optimizations.                       |
| **[memory/][5]**                                  | 85%                 | **Beta**                      | Some of these might be faster than glibc, some might be slower. There is a lot of potential for speedups through vectorization and other optimizations. Use at your own risk while I add different code paths for different sizes.                                             |

[1]: https://github.com/xbazzi/quicklib/tree/master/include/quick/thread/SpinMutex.hpp "quicklib/include/quick at master · xbazzi/quicklib · GitHub"
[2]: https://github.com/xbazzi/quicklib/tree/master/include/quick/thread/ThreadPool.hpp "quicklib/examples at master · xbazzi/quicklib · GitHub"
[3]: https://github.com/xbazzi/quicklib/tree/master/include/quick/handle/UniquePtr.hpp "quicklib/tests at master · xbazzi/quicklib · GitHub"
[4]: https://github.com/xbazzi/quicklib/tree/master/include/quick/structs/SPSCQueue.hh "GitHub - xbazzi/quicklib: Low-latency library"
[5]: https://github.com/xbazzi/quicklib/tree/master/include/quick/memory/ "GitHub - xbazzi/quicklib: Low-latency library"

