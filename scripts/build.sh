#!/bin/bash

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

pushd build
cmake ..
make -j4
popd
