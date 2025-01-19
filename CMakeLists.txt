cmake_minimum_required(VERSION 3.30)
project(data-structures)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        stack_test
        tests/stack_test.cpp
        stack.h
)

target_link_libraries(
        stack_test
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(stack_test)
