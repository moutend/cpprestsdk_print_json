#!/bin/bash

echo "Edit 'path_to_cmake' before run this script."
echo "e.g. path_to_cmake=/home/yourname/github.com/microsoft/vcpkg/scripts/buildsystems/vcpkg.cmake"

path_to_cmake=__replace_me__
cmake -DCMAKE_TOOLCHAIN_FILE=/$path_to_cmake ..
