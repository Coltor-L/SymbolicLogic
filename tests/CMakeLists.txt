set(UNIT_TEST_LIST
  Logic)

foreach(NAME IN LISTS UNIT_TEST_LIST)
  list(APPEND UNIT_TEST_SOURCE_LIST ${NAME}.test.cpp)
endforeach()

set(TARGET_NAME tests)

add_executable(${TARGET_NAME}
    Main.test.cpp
  ${UNIT_TEST_SOURCE_LIST})


set_property(TARGET ${TARGET_NAME} PROPERTY CXX_STANDARD 20)

target_link_libraries(${TARGET_NAME} ${UNIT_TEST_LIST})

include_directories(catch)
catch_discover_tests(${TARGET_NAME})
