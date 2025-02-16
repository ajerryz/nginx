
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */

/**
 * #ifndef 预处理指令
 *
 * 下面的意思是：如果没有定义 _NGINX_H_INCLUDE_ 这个宏,
 * 则定义一些宏
 */

#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      1006003
#define NGINX_VERSION      "1.6.3"
#define NGINX_VER          "nginx/" NGINX_VERSION

#define NGINX_VAR          "NGINX"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
