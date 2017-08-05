#!/bin/bash

make ARCH=arm64 distclean
rm -rf ../out
mkdir ../out
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- O=../out merge_hi3660_defconfig > build.log 2>&1
cat rules.txt >> ../out/.config
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- O=../out -j8 >> build.log 2>&1
