cmake_minimum_required(VERSION 3.0.0)
project(problem1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(problem1 main.cpp problem1.cpp)
add_executable(unittest test.cpp problem1.cpp)
add_test(problem1 unittest problem1.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)