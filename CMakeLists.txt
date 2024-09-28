cmake_minimum_required(VERSION 3.14)
project(VegaProgramEngineering)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
add_executable(main main.cpp src/func.cpp)  # добавляет исполняемый файл, аналог -o main

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
  googlebenchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG v1.6.1
)
FetchContent_MakeAvailable(googlebenchmark)

enable_testing()

add_executable(tests test_add.cpp src/func.cpp)
target_link_libraries(tests gtest_main)


include(GoogleTest)
gtest_discover_tests(tests)

add_executable(benchmarks benchmark_add.cpp src/func.cpp)
target_link_libraries(benchmarks benchmark::benchmark)