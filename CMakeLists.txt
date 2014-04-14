cmake_minimum_required(VERSION 2.8)
project(Bejeweled)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/dist)

set(CMAKE_CXX_FLAGS "-Wall -g -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__FILENAME__='\"$(subst ${CMAKE_SOURCE_DIR}/,,$(abspath $<))\"'")

add_subdirectory(src)
  
install(DIRECTORY resources DESTINATION .)
