add_library(problem_0001_lib            SHARED        src/problem_0001.cpp)
set_target_properties(problem_0001_lib  PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(problem_0001_lib  PROPERTIES PUBLIC_HEADER inc/problem_0001.h)
set_target_properties(problem_0001_lib  PROPERTIES SOVERSION 1)

configure_file(problem_0001_lib.in problem_0001_lib.pc @ONLY)
install(TARGETS problem_0001_lib
    LIBRARY             DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER       DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/mylib.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)