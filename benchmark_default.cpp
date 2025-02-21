#include <benchmark/benchmark.h>
#include <array>


constexpr int N = 100000;

struct Object
{
  std::array<int, N> _array {};
};

Object test{};

// Simple function to benchmark
static void BM_Copy(benchmark::State& state)
{
  for (auto _ : state) {
      for(int i = 0; i < 5000; ++i)
      {
        Object out = test;
        benchmark::DoNotOptimize(out);
      }
  }
}

// Register the benchmark with a range of input sizes
BENCHMARK(BM_Copy);

BENCHMARK_MAIN();
