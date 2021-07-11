# boost 
find_package(Boost REQUIRED COMPONENTS system unit_test_framework program_options filesystem)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED OFF)

include_directories(... ${Boost_INCLUDE_DIR})
link_directories(... ${Boost_LIBRARY_DIR})