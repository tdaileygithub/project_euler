#
# https://vicrucann.github.io/tutorials/quick-cmake-doxygen/
# https://cmake.org/cmake/help/latest/module/FindDoxygen.html
# Doxygen
#
#REQUIRED COMPONENTS dot mscgen dia
#
find_package(Doxygen)

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