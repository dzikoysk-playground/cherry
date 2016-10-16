cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(Tests)
FILE(GLOB_RECURSE sources "src/*.h" "src/*.cc" "tests/*.h" "tests/*.cc")
FOREACH (item ${sources})
    IF (${item} MATCHES "src/main.cc")
        LIST(REMOVE_ITEM sources ${item})
    ENDIF (${item} MATCHES "src/main.cc")
ENDFOREACH (item)
MESSAGE(STATUS "${sources}")
add_executable(Tests ${sources})

project(Cherry)
file(GLOB_RECURSE sources "src/*.h" "src/*.cc")
add_executable(Cherry ${sources})

target_link_libraries(Cherry pthread)