cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(Tests)
FILE(GLOB_RECURSE sources src/*.cpp tests/*.cpp)
FOREACH (item ${sources})
    IF (${item} MATCHES "src/main.cpp")
        LIST(REMOVE_ITEM sources ${item})
    ENDIF (${item} MATCHES "src/main.cpp")
ENDFOREACH (item)
MESSAGE(STATUS "${sources}")
add_executable(Tests ${sources})

project(Cherry)
file(GLOB_RECURSE sources src/*.cpp)
add_executable(Cherry ${sources})

target_link_libraries(Cherry pthread)