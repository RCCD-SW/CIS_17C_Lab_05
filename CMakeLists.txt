cmake_minimum_required(VERSION 3.10)
project(Lab5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(queues_test google_test/queues_test.cpp)
target_link_libraries(queues_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(queues queues.cpp)
