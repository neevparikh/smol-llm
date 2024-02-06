#!/usr/bin/env bash

mkdir -p build/release
export CXX=/opt/homebrew/opt/llvm/bin/clang++ 

cmake -DCMAKE_BUILD_TYPE=Release -S . -B build/release
cmake --build build/release

build/release/smol-llm
