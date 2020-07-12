cmake_minimum_required(VERSION 3.1.0)
project(SymbolicLogic VERSION 0.1.0)


include(CTest)
enable_testing()

include_directories(src)

set(HEADERS
    src/logic.h
)

set (SOURCES
    src/main.cpp
    src/logic.cpp
)

add_executable(SymbolicLogic ${HEADERS} ${SOURCES})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_EXPORT_COMPILE_COMMANDS)

include(CPack)
