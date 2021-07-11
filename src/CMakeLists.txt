cmake_minimum_required(VERSION 3.0.0)
project(problem1 VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(
        ${PROJECT_SOURCE_DIR}/inc
)

add_executable(problem_0001            src/main_0001.cpp src/problem_0001.cpp)
add_executable(unittest_0001           src/test_0001.cpp src/problem_0001.cpp)
add_test(problem_0001 unittest_0001    src/problem_0001.cpp)

set(CPACK_PROJECT_NAME          ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION       ${PROJECT_VERSION}) 
include(CPack)

# boost 
find_package(Boost REQUIRED COMPONENTS system program_options filesystem)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)

include_directories(... ${Boost_INCLUDE_DIR})
link_directories(... ${Boost_LIBRARY_DIR})

TARGET_LINK_LIBRARIES( problem_0001  ${Boost_LIBRARIES} )
TARGET_LINK_LIBRARIES( unittest_0001 ${Boost_LIBRARIES} )

# Doxygen

find_package(Doxygen REQUIRED)

# set input and output files
set(DOXYGEN_IN  ${CMAKE_CURRENT_SOURCE_DIR}/doxy/Doxyfile.in)
set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile.out)

# request to configure the file
configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)    

# Note: do not put "ALL" - this builds docs together with application EVERY TIME!
add_custom_target( 
        docs
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM 
)