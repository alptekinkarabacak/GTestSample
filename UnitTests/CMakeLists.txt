cmake_minimum_required(VERSION 3.16.0)
project(unit_test VERSION 0.1.0)
set(CMAKE_CXX_STANDARD, 17)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/GoogleTest
                 ${CMAKE_BINARY_DIR}/GoogleTest)

include_directories(${CMAKE_BINARY_DIR}/GoogleTest/googletest/include)

add_executable(unit_test main.cpp ${CMAKE_SOURCE_DIR}/UnitTests/framework_test/framework_test.cpp)

target_link_libraries(unit_test framework gtest gtest_main)