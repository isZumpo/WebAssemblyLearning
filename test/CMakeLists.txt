cmake_minimum_required(VERSION 3.8)
project(test)

include_directories(C:/Tools/emsdk/emscripten/1.37.22/system/include)
set(CMAKE_C_STANDARD 99)

add_executable(example src/example.c)