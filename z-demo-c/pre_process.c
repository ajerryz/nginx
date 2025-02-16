//
// Created by zhangning on 2024/8/16.
//
#include "stdio.h"

#ifndef APP_NAME
#define APP_NAME    "demo-pre-process"


#endif


int main(void) {
    printf("hello,pre-process\n");
#ifdef APP_NAME
    printf("定义了宏 APP_NAME=%s\n", APP_NAME);
#endif
}

/**
* output:
 * hello,pre-process
 * 定义了宏 APP_NAME=demo-pre-process
*/