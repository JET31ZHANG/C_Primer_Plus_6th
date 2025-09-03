# C 预处理器和 C 库

## 概要

- 预处理命令：#define、#include、#ifdef、#else、#endif、#ifndef、#if、#elif、#line、#error、#pragma；
- 关键字：_Generic、_Noreturn、_Static_assert；
- 函数/宏：sqrt()、atan()、atan2()、exit()、atexit()、assert()、memcpy()、memmove()、va_start()、va_arg()、va_copy()、va_end()；
- C 预处理器的其他功能；
- 通用选择表达式；
- 内联函数；
- C 库概述和一些特殊用途的方便函数。

## 内容

### 翻译程序的第一步

### 明示常量：#define

[程序清单 16.1 preproc.c ](../source_code/Chapter_16/preproc.c)

#### 记号
#### 重定义常量

### 在 #define 中使用参数

[程序清单 16.2 mac_arg.c ](../source_code/Chapter_16/mac_arg.c)

#### 用宏参数创建字符串：#运算符

[程序清单 16.3 subst.c ](../source_code/Chapter_16/subst.c)

#### 预处理器黏合剂：##运算符

[程序清单 16.4 glue.c ](../source_code/Chapter_16/glue.c)

#### 变参宏：...和__VA_ARGS__

[程序清单 16.5 variadic.c ](../source_code/Chapter_16/variadic.c)

### 宏和函数的选择

#### 文件包含：#include

[程序清单 16.6 names_st.h ](../source_code/Chapter_16/names_st.h)

[程序清单 16.7 names_st.c ](../source_code/Chapter_16/names_st.c)

[程序清单 16.8 useheader.c ](../source_code/Chapter_16/useheader.c)

#### 头文件示例
#### 使用头文件

### 其他指令

#### #undef 指令
#### 从 C 预处理器角度看已定义
#### 条件编译

1. #ifdef、#else 和 #endif 指令

[程序清单 16.9 ifdef.c ](../source_code/Chapter_16/ifdef.c)

2. #ifndef 指令

[程序清单 16.10 names.h ](../source_code/Chapter_16/names.h)

[程序清单 16.11 doubincl.c ](../source_code/Chapter_16/doubincl.c)

3. #if 和 #elif 指令


#### 预定义宏

[程序清单 16.12 predef.c ](../source_code/Chapter_16/predef.c)

#### #line 和 #error
#### #pragma
#### 泛型选择（C11）

[程序清单 16.13 mytype.c ](../source_code/Chapter_16/mytype.c)

### 内联函数

### _Noreturn 函数

### C 库

#### 访问 C 库
#### 使用库描述

### 数学库


#### 三角问题

[程序清单 16.14 rect_pol.c ](../source_code/Chapter_16/rect_pol.c)

#### 类型变体

[程序清单 16.15 generic.c ](../source_code/Chapter_16/generic.c)

#### tgmath.h 库

### 通用工具库

#### exit() 和 atexit()

[程序清单 16.16 byebye.c ](../source_code/Chapter_16/byebye.c)

#### qsort()

[程序清单 16.17 qsorter.c ](../source_code/Chapter_16/qsorter.c)

### 断言库

#### assert 的用法

[程序清单 16.18 asssert.c ](../source_code/Chapter_16/asssert.c)

#### _Static_assert（C11）

[程序清单 16.19 statasrt.c ](../source_code/Chapter_16/statasrt.c)

### string.h 库中的 memcpy() 和 memmove()

[程序清单 16.20 mems.c ](../source_code/Chapter_16/mems.c)

### 可变参数：stdarg.h

[程序清单 16.21 varargs.c ](../source_code/Chapter_16/varargs.c)

## 关键概念

C 标准：
- 描述 C 语言；
- 描述组成 C 语言的软件包、C 预处理器、C 标准库。

C 预处理器：
- 控制编译过程；
- 列出要替换的内容；
- 指出要编译的代码行；
- 其他行为。


C 标准库：扩展了 C 语言的作用范围。

## 小结

C 语言重要的附件：
- C预处理器：遵循预处理器命令，在编译源代码前调整源代码；
- C 库：提供许多有助于完成任务的函数，包括输入、输出、文件处理、内存管理、排序和搜索、数学运算、字符串处理等。
