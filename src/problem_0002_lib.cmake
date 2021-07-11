add_library(problem_0002_lib            SHARED        src/problem_0002.cpp)
set_target_properties(problem_0002_lib  PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(problem_0002_lib  PROPERTIES PUBLIC_HEADER inc/problem_0002.h)
set_target_properties(problem_0002_lib  PROPERTIES SOVERSION 1)

configure_file(problem_0002_lib.in problem_0002_lib.pc @ONLY)
install(TARGETS problem_0002_lib
    LIBRARY             DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER       DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/problem_0002_lib.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)