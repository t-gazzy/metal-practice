#!/bin/zsh

rm -rf ./build
cmake -B build -G Ninja
ninja -C build
