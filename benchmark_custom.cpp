#include <benchmark/benchmark.h>
#include <array>


constexpr int N = 100000;

struct Object
{
  Object(){}

  Object(const Object & in)
  {
    for(int i = 0; i < N/2; i++)
    {
        _array[i] = in._array[i];
    }

  }

  std::array<int, N> _array {};
};

Object test;
int var{};

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
