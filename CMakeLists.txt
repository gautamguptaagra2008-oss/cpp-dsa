cmake_minimum_required(VERSION 3.14)
project(cpp_dsa CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(sorting_tests tests/sorting_test.cpp)
target_include_directories(sorting_tests PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(sorting_tests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(sorting_tests)