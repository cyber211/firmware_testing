#!/usr/bin/env bash

# Exit on error
set -e

# Create folder to store/build tools
mkdir tools

# Get CppUTest Framework
git clone https://github.com/cpputest/cpputest.git tools/cpputest
# Build latest (v3.8) release
cd tools/cpputest
git checkout tags/v3.8
./autogen.sh
.configure
make
cd -