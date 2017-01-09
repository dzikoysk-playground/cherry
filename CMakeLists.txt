cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(Tests)
FILE(GLOB_RECURSE SOURCES "src/*.h" "src/*.cc" "tests/*.h" "tests/*.cc")
FOREACH (ITEM ${SOURCES})
    IF (${ITEM} MATCHES "src/main.cc")
        LIST(REMOVE_ITEM SOURCES ${ITEM})
    ENDIF (${ITEM} MATCHES "src/main.cc")
ENDFOREACH (ITEM)
MESSAGE(STATUS "${SOURCES}")
add_executable(Tests ${SOURCES})

project(Cherry)
file(GLOB_RECURSE SOURCES "src/*.h" "src/*.cc")
add_executable(Cherry ${SOURCES})

target_link_libraries(Cherry pthread)