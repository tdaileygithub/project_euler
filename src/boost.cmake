#
# https://cmake.org/cmake/help/latest/module/FindBoost.html
# boost configuration
#
find_package(Boost REQUIRED COMPONENTS system unit_test_framework program_options filesystem)

set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS        OFF)  # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

include_directories(... ${Boost_INCLUDE_DIR})
link_directories(... ${Boost_LIBRARY_DIR})