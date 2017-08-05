#!/bin/bash

make ARCH=arm64 distclean
rm -rf ../out
mkdir ../out
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- O=../out fuzz_hi3360_defconfig > build.log 2>&1
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- O=../out -j8 >> build.log 2>&1
