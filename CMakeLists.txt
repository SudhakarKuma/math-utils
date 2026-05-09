cmake_minimum_required(VERSION 3.14)

project(MathUtils)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

include_directories(include)

add_library(
    mathlib
    src/math_utils.cpp
)

add_executable(
    unit_tests
    tests/test_maths.cpp
)

target_link_libraries(
    unit_tests
    mathlib
    gtest_main
)

enable_testing()

add_test(
    NAME unit_tests
    COMMAND unit_tests
)