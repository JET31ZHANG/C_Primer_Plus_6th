# 字符串和字符串函数

## 概要

- 函数：gets()、gets_s()、puts()、fputs()、strcat()、strncat()、strcmp()、strncmp()、strcpy、strncpy()、sprintf()、strchr();
- 创建并使用字符串；
- 使用 C 库中的字符和字符串函数，并创建自定义的字符串函数；
- 使用命令行参数。

## 内容

### 标识字符串和字符串 I/O

[程序清单 11.1 strings1.c ](../source_code/Chapter_11/strings1.c)

#### 在程序中定义字符串

1. 字符串字面量

[程序清单 11.2 strptr.c ](../source_code/Chapter_11/strptr.c)

2. 字符串数组和初始化

3. 数组和指针

[程序清单 11.3 addresses.c ](../source_code/Chapter_11/addresses.c)

4. 数组和指针的区别

5. 字符串数组

[程序清单 11.4 arrchar.c ](../source_code/Chapter_11/arrchar.c)

#### 指针和字符串

[程序清单 11.5 p_and_s.c ](../source_code/Chapter_11/p_and_s.c)

### 字符串输入

#### 分配空间
#### 不幸的 gets()

[程序清单 11.6 getsputs.c ](../source_code/Chapter_11/getsputs.c)

#### gets() 替代品

1. fgets()

[程序清单 11.7 fgets1.c ](../source_code/Chapter_11/fgets1.c)

[程序清单 11.8 fgets2_.c ](../source_code/Chapter_11/fgets2_.c)

[程序清单 11.9 fgets3.c ](../source_code/Chapter_11/fgets3.c)

2. gets_s()

3. s_gets()

[程序清单 11.10 ](../source_code/Chapter_11/s_gets().c)

#### scanf() 函数

[程序清单 11.11 scan_str.c ](../source_code/Chapter_11/scan_str.c)

### 字符串输出

#### puts()

[程序清单 11.12 put_out.c ](../source_code/Chapter_11/put_out.c)

[程序清单 11.13 nono.c ](../source_code/Chapter_11/nono.c)

#### fputs()
#### printf()

### 自定义输入、输出函数

[程序清单 11.14 put1.c ](../source_code/Chapter_11/put1.c)

[程序清单 11.15 put2.c ](../source_code/Chapter_11/put2.c)

[程序清单 11.16 put_put.c ](../source_code/Chapter_11/put_put.c)

### 字符串函数

#### strlen()

[程序清单 11.17 test_fit.c ](../source_code/Chapter_11/test_fit.c)

#### strcat()

[程序清单 11.18 str_cat.c ](../source_code/Chapter_11/str_cat.c)

#### strncat()

[程序清单 11.19 join_chk.c ](../source_code/Chapter_11/join_chk.c)

#### strcmp()

[程序清单 11.20 nogo.c ](../source_code/Chapter_11/nogo.c)

[程序清单 11.21 compare.c ](../source_code/Chapter_11/compare.c)

1. strcmp() 的返回值

[程序清单 11.22 compback.c ](../source_code/Chapter_11/compback.c)

[程序清单 11.23 quit_chk.c ](../source_code/Chapter_11/quit_chk.c)

2. strncmp() 

[程序清单 11.24 starsrch.c ](../source_code/Chapter_11/starsrch.c)

#### strcpy() & strncpy()

[程序清单 11.25 copy1.c ](../source_code/Chapter_11/copy1.c)

1. strcpy() 的其他属性

[程序清单 11.26 copy2.c ](../source_code/Chapter_11/copy2.c)

2. 更谨慎的选择：strncpy()

[程序清单 11.27 copy3.c ](../source_code/Chapter_11/copy3.c)

#### sprintf()

[程序清单 11.28 format.c ](../source_code/Chapter_11/format.c)

#### 其他字符串函数


### 字符串示例：字符串排序

[程序清单 11.29 sort_str.c ](../source_code/Chapter_11/sort_str.c)

#### 排序指针而非字符串
#### 选择排序算法

### ctype.h 字符函数和字符串

[程序清单 11.30 mod_str.c ](../source_code/Chapter_11/mod_str.c)

### 命令行参数

[程序清单 11.31 repeat.c ](../source_code/Chapter_11/repeat.c)

#### 集成环境中的命令行参数
#### Mac 中的命令行参数

### 把字符串转换为数字

[程序清单 11.32 hello.c ](../source_code/Chapter_11/hello.c)

[程序清单 11.33 strcnvt.c ](../source_code/Chapter_11/strcnvt.c)

## 关键概念

## 小结