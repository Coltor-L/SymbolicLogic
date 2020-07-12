cmake_minimum_required(VERSION 3.0.0)
project(SymbolicLogic VERSION 0.1.0)



include(CTest)
enable_testing()

add_executable(SymbolicLogic src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)
set(CMAKE_EXPORT_COMPILE_COMMANDS)

include(CPack)
