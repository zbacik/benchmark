# Default constructor
Compile flags: g++ -O2 -std=c++17 benchmark_default.cpp -o benchmark_default -lbenchmark

Running ./benchmark_default
Run on (12 X 4400 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x6)
  L1 Instruction 32 KiB (x6)
  L2 Unified 1280 KiB (x6)
  L3 Unified 12288 KiB (x1)
Load Average: 1.12, 1.17, 1.07
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
***WARNING*** Library was built as DEBUG. Timings may be affected.
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
BM_Copy      27881119 ns     27878764 ns           25



# Custom constructor
Compile flags: g++ -O2 -std=c++17 benchmark_custom.cpp -o benchmark_custom -lbenchmark

Running ./benchmark_custom
Run on (12 X 4400 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x6)
  L1 Instruction 32 KiB (x6)
  L2 Unified 1280 KiB (x6)
  L3 Unified 12288 KiB (x1)
Load Average: 0.89, 1.13, 1.05
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
***WARNING*** Library was built as DEBUG. Timings may be affected.
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
BM_Copy      45382595 ns     45380286 ns           16
