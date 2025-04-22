#!/bin/bash


# ===
#   准备nginx环境
# ===
bash ./auto/configure \
  --prefix="$PWD/ajerryz_build" \
  --without-http_rewrite_module

echo "configure success"

make install

echo "make install success"

make clean

echo "make clean success"

echo "===> build successful!"