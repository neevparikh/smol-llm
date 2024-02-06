#!/usr/bin/env bash

mkdir -p build/debug
export CXX=/opt/homebrew/opt/llvm/bin/clang++

cmake -DCMAKE_BUILD_TYPE=Debug -S . -B build/debug
cmake --build build/debug

build/debug/smol-llm
