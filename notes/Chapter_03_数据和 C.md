# 数据和C

## 概要：

- 关键字：int、short、long、unsigned、char、float、double、_Bool、_Complex、_Imaginary；
- 运算符：sizeof()；
- 函数：scanf()；
- 整数类型和浮点数类型的区别；
- 如何书写整型和浮点型常数，如何声明这些类型的变量；
- 如何使用 printf() 和 scanf() 函数读写不同类型的值。

## 内容：

### 示例程序：

[程序清单 3.1 platinum.c ](../source_code/Chapter_03/platinum.c)

### 变量与常量数据

- 数据：承载信息的数字和字符。
- 常量（constant）：数据类型在程序运行之前已经设定好，在整个程序的运行过程中没有变化。
- 变量（variable）：数据类型在程序运行期间可能会改变或被赋值。

### 数据类型关键字

对变量，要在声明时指定其类型。

C 语言基本类型关键字
| 最初 K&R 给出的关键字 | C90 标准添加的关键字  | C99 标准添加的关键字 |
| :-----------------: | :------------------: | :----------------: |
| int | signed |_Bool|
| long | void | _Complex |
| short |  | _Imaginary |
| unsigned |||
| char |||
| float |||
| double |||

（关键字创建的类型按计算机存储方式可大致分为整数类型和浮点数类型。）

- int 关键字标示基本的整数类型，后3个关键字（long、short、unsigned）和 C90 新增的 signed 用于提供基本数据类型的变式；
- char 类型也可以表示较小的整数；
- float、double、long double 表示带小数点的数；
- _Bool 类型表示布尔值（true 或 false）；
- _Complex 和 _Imaginary 分别表示复数和虚数。

- 位（bit）：最小的存储单元。可存储 0 或 1（位用于设置“开”或“关”）。位是计算机内存的基本构建块。
- 字节（byte）：常用的计算机存储单位。1字节为8位，字节有256（2的8次方）种可能的0、1的组合。通过二进制编码，便可表示0~255的整数或一组字符。
- 字（word）：设计计算机时给定的自然存储单位。对于 8 位的微型计算机（最初的苹果机）1个字长只有8位，目前是64位。字长越大，数据转移越快，允许的内存访问更多。


#### 整数

- 整数是没有小数部分的数。
- 计算机以二进制数字存储整数。

#### 浮点数

- 浮点数与整数的存储方案不同：计算机把浮点数分成小数部分和指数部分来表示，且分开存储这两部分。在十进制下，可以把 7.0 写成 0.7E1(0.7是小数部分，E1是指数部分)。计算机在内部使用二进制和2的次幂进行存储，而不是10的幂。

- 整数类型与浮点数类型的区别：
    - 整数没有小数部分，浮点数有小数部分；
    - 浮点数可以表示的范围比整数大；
    - 对于一些算术运算，浮点数损失的精度更多；
    - 因为在任何区间内，都存在无穷多个实数，所以计算机的浮点数不能表示区间内所有的值。浮点数通常只是实际值的近似值（如，7.0 可被存储为浮点值 6.99999）。
    - 现在，浮点运算与整数运算速度相当。

### C 语言基本数据类型

#### int 类型

int 类型是有符号的整型，即 int 类型的值必须是整数（正整数、负整数、零）。其取值范围依计算机系统而异。一般，存储一个 int 要占用一个机器字长。ISO C 规定 int 的取值范围最小为 -32768 ~ 32767。系统一个特殊位的值表示有符号整数的正负号。

##### 声明 int 变量

##### 初始化变量

##### int 类型变量

##### 打印 int 值

[程序清单 3.2 print1.c ](../source_code/Chapter_03/print1.c)

##### 八进制和十六进制

##### 显示八进制和十六进制

[程序清单 3.3 bases.c ](../source_code/Chapter_03/bases.c)

#### 其他整数类型

```c
/* toobig.c -- 超出系统允许的最大 int 值 */

#include <stdio.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);
    
    return 0;
}

/* Output:
2147483647 -2147483648 -2147483647
4294967295 0 1
*/
```

##### 声明其他整数类型

##### 使用多种整数类型的原因

##### long 常量和 long long 常量

##### 打印 short、long、long long 和 unsigned 类型

[程序清单 3.4 print2.c ](../source_code/Chapter_03/print2.c)

#### char 类型

char 类型用于存储字符，但从技术层面看，char 是整数类型。（char 类型实际存储的是整数而不是字符，计算机使用数字编码来处理字符，即用特定的整数表示特定的字符。如 ASCII 码）
标准 ASCII 码的范围是 0 ~ 127，只需 7 位二进制数就可表示。通常，char 类型被定义为 8 位的存储单元。一般，C 语言会保证 char 类型足够大，以存储系统（实现 C 语言的系统）的基本字符集。
许多字符集都超过了 127，甚至多于 255。
C 语言把 1 字节定义为 char 类型占用的位（bit）数，因此无论是 16 位还是 32 位系统，都可以使用 char 类型。

##### 声明 char 类型变量

##### 字符常量和初始化

##### 非打印字符

##### 打印字符

[程序清单 3.5 charcode.c ](../source_code/Chapter_03/charcode.c)

#### _Bool 类型

[程序清单 3.6 altnames.c ](../source_code/Chapter_03/altnames.c)

#### 可移植类型：stdint.h 和 inttypes.h

#### float、double 和 long double

##### 声明浮点型变量

##### 浮点型常量

##### 打印浮点值

[程序清单 3.7 showf_pt.c ](../source_code/Chapter_03/showf_pt.c)

##### 浮点值的上溢和下溢

```c
/* floaterr.c -- 演示舍入错误 */
#include <stdio.h>

int main(void)
{
    float a,b;
    
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
    
    return 0;
}
```

#### 复数和虚数类型

#### 其他类型

**小结：基本数据类型**
- **关键字**：基本数据类型由 11 个关键字组成，int 、long、short、unsigned、char、float、double、signed、_Bool、_Complex、_Imaginary。

- **有符号整型**：用于表示正整数和负整数。
    - int：
    - short、short int：
    - long、long int：
    - long long 或 long long int：

    一般，long 类型占用的内存比 short 大，int 类型的宽度和 long 相同或和 short相同。

- **无符号整型**：只能用于表示零和正整数。无符号整型表示的正整数比有符号整型的大。
    - 无符号整型表示：unsigned int、unsigned long、unsigned short；
    - 单独的 unsigned 相当于 unsigned int。

- **字符类型**：可打印出来的符号。char 类型表示一个字符要占用 1 字节内存。1 字节通常是 8 位，如果要表示基本字符集，1 字节也可以是 16 位或更大。
    - char ：字符类型的关键字。有些编译器使用有符号（signed）的 char，有些使用无符号（unsigned）的。

- **布尔类型**
    - _Bool：

- **实浮点类型**
    - float
    - double
    - long double

- **复数和虚数浮点数**
    - float _Complex
    - double _Complex
    - long double _Complex
    - float _Imaginary
    - double _Imaginary
    - long double _Imaginary

**小结：如何声明简单变量**
1. 
2. 
3. 
4. 
5. 

#### 类型大小

[程序清单 3.8 typesize.c 程序](../source_code/Chapter_03/typesize.c)

### 使用数据类型

### 参数和陷阱

[程序清单 3.9 badcount.c 程序](../source_code/Chapter_03/badcount.c)

### 转义序列

[程序清单 3.10 escape.c 程序](../source_code/Chapter_03/escape.c)

## 关键概念：

- C 语言数值类型
- 浮点数和整数在本质上不同，存储方式和运算过程也有很大区别。
- C 语言允许编写混合数据类型的表达式，但会进行自动类型转换，以便在实际运算时统一使用一种类型。
- 计算机在内存中用数值编码来表示字符。美国最常用的是 ASCII 码。字符常量是计算机系统使用的数值编码的符号表示，它表示为单引号括起来的字符。

## 小结：

C 语言基本数据类型：
- 整数类型：通过为类型分配的存储量以及是否有符号，区分不同的整数类型；
    - 最小的整数类型 char：因实现不同，分为 unsigned char 和 signed char。通常用 char 类型表示小整数时才这样显式说明；
    - 其他整数类型 short、int、long 和 long long 类型（有符号）：C 规定后面的类型不能小于前面的类型；
    - 可以使用 unsigned 关键字创建无符号类型：unsinged short、unsinged int、unsinged long 和 unsinged long long；
    - 可以使用 signed 关键字创建有符号类型；
    - _Bool 类型是一种无符号类型，可存储 0 或 1，分别代表 false 和 true。
- 浮点数类型：
    - float、double、long double：后面的类型应大于等于前面的；
    - 某些实现可选择支持复数类型和虚数类型：通过关键字 _Complex 和 _Imaginary 与浮点的关键字组合。（如，double _Complex、float _Imaginary）。
- 整数可表示为：
    - 十进制；
    - 八进制：0前缀；
    - 十六进制：0x 或 0X 前缀；
    - l 或 L 后缀表示：long 类型
    - ll 或 LL 后缀表示：long long 类型；
- C 语言中，直接表示一个字符常量的方法：把该字符用单引号括起来。
- C 语言转义序列表示某些非打印字符。
- 可以在八进制或十六进制数前加一个反斜杠（如，'\007'），表示 ASCII 码中的一个字符。
- 浮点数可写成固定小数点的形式或指数形式。C99 和 C11 还提供了用十六进制数和 2 的幂来表示（如，0xa。1fp10）。
- printf() 函数根据转换说明打印各种类型的值。转换说明最简单的形式由一个百分号（%）和一个转换字符组成，如 %d。