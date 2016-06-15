cmake_minimum_required(VERSION 3.5)
project(src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/core/cherry.cpp src/core/cherry.h src/core/cherry_loader.cpp src/core/cherry_loader.h src/core/cherry_application.cpp src/core/cherry_application.h src/core/parser/parser.h src/core/work/executable.h src/lang/cherry_parser.cpp src/lang/cherry_parser.h src/core/parser/redact/divider.cpp src/core/parser/redact/divider.h)
add_executable(src ${SOURCE_FILES})