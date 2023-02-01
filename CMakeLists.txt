cmake_minimum_required(VERSION 3.16.0)
project(gtest_project VERSION 0.1.0)
set(CMAKE_CXX_STANDARD, 17)
add_subdirectory(src/framework)
add_subdirectory(UnitTests)

add_executable(gtest_project main.cpp)
target_link_libraries(gtest_project framework)

