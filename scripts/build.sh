#!/bin/bash

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

cd build
rm -rf ./*
cmake ..
make

cd ..
