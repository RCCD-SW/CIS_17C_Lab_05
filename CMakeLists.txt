cmake_minimum_required(VERSION 3.10)
project(Lab5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(sorting_test google_test/sorting_test.cpp sorting.cpp)
target_link_libraries(sorting_test GTest::gtest GTest::gtest_main)

add_executable(sorting_main main.cpp sorting.cpp)