cmake_minimum_required(VERSION 3.0.0)
project(project_euler VERSION 0.1.0 DESCRIPTION "Project Euler Solutions in c++")

#system includes
include(CPack)
include(GNUInstallDirs)
include(doxygen.cmake)
include(boost.cmake)
include(BoostTestHelpers.cmake)
include(CTest)

#user includes
include (problem_0001_lib.cmake)

set(CPACK_PROJECT_NAME          ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION       ${PROJECT_VERSION}) 
set(CMAKE_CXX_STANDARD 14)

enable_testing()

include_directories(
        ${PROJECT_SOURCE_DIR}/inc
)

add_executable(problem_0001            src/main_0001.cpp)

TARGET_LINK_LIBRARIES( problem_0001  ${Boost_LIBRARIES} problem_0001_lib)

add_boost_test(src/test_0001.cpp problem_0001_lib)