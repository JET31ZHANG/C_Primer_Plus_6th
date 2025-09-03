# 字符串和格式化输入/输出

## 概要

- 函数：strlen()；
- 关键字：const；
- 字符串；
- 如何创建、存储字符串、
- 如何使用 strlen() 函数获取字符串的长度；
- 用 C 预处理器命令 #define 和 ANSI C 的 const 修饰符创建符号常量。

## 内容

### 示例程序
[程序清单 4.1 talkback.c ](../source_code/Chapter_04/talkback.c)



### 字符串简介

#### char 类型数组和 null 字符

#### 使用字符串

[程序清单 4.2 praise1.c ](../source_code/Chapter_04/praise1.c)

#### strlen() 函数

[程序清单 4.3 praise2.c ](../source_code/Chapter_04/praise2.c)

### 常量和 C 预处理器

[程序清单 4.4 pizza.c ](../source_code/Chapter_04/pizza.c)

#### const 限定符

#### 明示常量

[程序清单 4.5 defines.c ](../source_code/Chapter_04/defines.c)

#### 使用 prinf()

[程序清单 4.6 printout.c ](../source_code/Chapter_04/printout.c)

#### printf() 的转换说明修饰符

[程序清单 4.7 width.c ](../source_code/Chapter_04/width.c)

[程序清单 4.8 floats.c ](../source_code/Chapter_04/floats.c)

[程序清单 4.9 flags.c ](../source_code/Chapter_04/flags.c)

[程序清单 4.10 stringf.c ](../source_code/Chapter_04/stringf.c)

#### 转换说明的意义

[程序清单 4.11 intconv.c ](../source_code/Chapter_04/intconv.c)

[程序清单 4.12 floatcnv.c ](../source_code/Chapter_04/floatcnv.c)

[程序清单 4.13 prntval.c ](../source_code/Chapter_04/prntval.c)

[程序清单 4.14 longstrg.c ](../source_code/Chapter_04/longstrg.c)

#### 使用 scanf()

[程序清单 4.15 input.c ](../source_code/Chapter_04/input.c)

#### printf() 和 scanf() 的*修饰符

[程序清单 4.16 varwid.c ](../source_code/Chapter_04/varwid.c)

[程序清单 4.17 skip2.c ](../source_code/Chapter_04/skip2.c)

#### printf() 的用法提示

## 关键概念

C 语言使用 char 类型表示单个字符，用字符串表示字符序列。字符串常量是一种字符串形式，用双引号把字符括起来。可以把字符串存储在字符数组中。字符串，无论是表示成字符常量还是存储在字符数组中，都以空字符结尾。
最好用 #define 定义数值常量，用 const 声明只读变量。在程序中使用符号常量，提高程序的可读性和可维护性。
printf() 和 scanf() 都使用一种系统，在该系统中，第一个参数的转换说明必须与后续参数中的值匹配。对于 scanf() 要在变量名前加上地址运算符（&）。
空白字符（制表符、空格和换行符）在 scanf() 处理输入时起到关键的作用。除 %c 外，scanf() 在读取输入时会跳过非空白字符前的所有空白字符。然后一直读取字符，直到遇到空白字符或与正在读取字符不匹配的字符。

## 小结

字符串：一系列被视为一个存储单元的字符。在 C 语言中，字符串以空字符结尾。可以把字符串存储在字符数组中。
要确保有足够多的元素来存储整个字符串（包括空字符）。
字符串常量实用双引号括起来的字符序列。
strlen() 函数可用于获得字符串长度（末尾的空字符不计算在内）。
scanf() 函数中的转换说明是 %s 时，可读取一个单词。
C 预处理器位预处理器指令（以 # 符号开始）查找源代码程序，并在开始编译程序前处理它们。
#define 可创建明示常量，即代表常量的符号。limits.h 和 float.h 头文件用 #define 定义了一组表示整型和浮点型不同属性的符号常量。还可以使用 const 限定符创建定义后就不能修改的常量。
printf() 和 scanf() 对输入、输出提供多种支持。都使用格式字符串。