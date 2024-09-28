#include <benchmark/benchmark.h>
#include "func.hpp"

static void BM_TestFunction(benchmark::State& state) {
    for (auto _ : state) {
        // Вызов тестируемой функции
        my_add(1,19);
    }
}

// Регистрация бенчмарка
BENCHMARK(BM_TestFunction);

BENCHMARK_MAIN();