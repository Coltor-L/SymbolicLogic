cmake_minimum_required(VERSION 3.1.0)
project(SymbolicLogic VERSION 0.1.0)


include_directories(src)
add_subdirectory(src)
add_subdirectory(tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS)
