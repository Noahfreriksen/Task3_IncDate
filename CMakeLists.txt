cmake_minimum_required(VERSION 3.12)
project(IncDate)

set(CMAKE_CXX_STANDARD 14)

add_executable(IncDate main.cpp lib/date.cpp lib/date.h)

add_subdirectory(./lib/googletest)
add_executable(tests ./tests/main_tests.cpp tests/date_tests.cpp)
target_include_directories(tests PUBLIC ./lib/googletest/include)
target_link_libraries(tests gtest gtest_main)
