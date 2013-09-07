#!/bin/bash

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

rm -rf build
mkdir build
cd build
cmake ..
make

cd ..
