cmake_minimum_required(VERSION 2.6)
project(Bejeweled)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
find_package(SDL2)

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
add_subdirectory(src)
