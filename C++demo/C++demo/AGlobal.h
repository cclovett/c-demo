//
//  AGlobal.h
//  C++demo
//
//  Created by Cc on 2017/2/9.
//  Copyright © 2017年 Cc. All rights reserved.
//

#ifndef AGlobal_h
#define AGlobal_h

#include <iostream>

typedef int (*entrance_fun) (int, const char*[]);

extern entrance_fun my_entrance;

#define  xxs(a) int main_##a(int argc, const char *argv[]);my_entrance  = main_##a;

#endif /* AGlobal_h */
