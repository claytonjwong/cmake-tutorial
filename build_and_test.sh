#!/usr/bin/env bash
set -Eexo pipefail

BUILD_DIR=cmake-build-debug

function createBuildDir() {
    rm -r $BUILD_DIR
    mkdir -p $BUILD_DIR
}

function buildAndTest() {
    cd $BUILD_DIR
    cmake ../ -DUSE_MYMATH=OFF
    cd ../
    cmake --build $BUILD_DIR --target Tutorial -- -j 16
    cd $BUILD_DIR
    ctest -VV
}

createBuildDir
buildAndTest
