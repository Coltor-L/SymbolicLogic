set(LOGIC_LIB Logic)
add_library( ${LOGIC_LIB} STATIC
             logic.h
             logic.cpp
)
set_property(TARGET ${LOGIC_LIB} PROPERTY CXX_STANDARD 20)
target_compile_options(${LOGIC_LIB} PRIVATE -Wall -Wextra -pedantic -Werror)



set(APP SymbolicLogic)
add_executable( ${APP}
                main.cpp
)
set_property(TARGET ${APP} PROPERTY CXX_STANDARD 20)
target_compile_options(${APP} PRIVATE -Wall -Wextra -pedantic -Werror)


target_link_libraries( ${APP}
                      ${LOGIC_LIB}
)
