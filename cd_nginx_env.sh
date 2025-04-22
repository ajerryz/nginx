#!/bin/bash

cd ./ajerryz_build
echo "cd ajerryz_build"

NGINX_HOME="$PWD/sbin"

PATH=$PATH:$NGINX_HOME
bash