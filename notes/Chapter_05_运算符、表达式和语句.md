# 运算符、表达式和语句

## 概要

- 关键字：while、typedef；
- 运算符：=、-、*、/、%、++、--、(类型名)；
- C 语言的各种运算符，包括用于普通数学运算的运算符
- 运算符优先级以及语句、表达式的含义；
- while 循环；
- 复合语句、自动类型转换和强制类型转换；
- 如何编写带有参数的函数。

## 内容

[程序清单 5.1 shoes1.c ](../source_code/Chapter_05/shoes1.c)
[程序清单 5.2 shoes2.c ](../source_code/Chapter_05/shoes2.c)

### 基本运算符

#### 赋值运算符 =
- 数据对象（data object）：用于存储值的数据区域。
- 左值（lvalue）：用于标识特定数据对象的名称或表达式。（对象：实际的数据存储）左值是用于标识或定位存储位置的标签。
    - 可修改的左值（modifiable lvalue）：用于标识可修改的对象。所以，赋值运算符的左侧应是可修改的左值，即对象定位值（object locator value）。
- 右值（rvalue）:能赋值给可修改左值的量，且本身不是左值。在当前标准下右值被描述为表达式的值（value of an expression）。
- 运算对象：运算符（operand）操作的对象。

[程序清单 5.3 golf.c ](../source_code/Chapter_05/golf.c)

#### 加法运算符（addtion operator） +
#### 减法运算符（subtraction operator） - 

#### 符号运算符 - 和 +

负号被称为一元运算符（unary operator）。一元运算符只需要一个运算对象。

#### 乘法运算符 *

[程序清单 5.4 ](../source_code/Chapter_05/squares.c)

- 指数增长：
[程序清单 5.5 ](../source_code/Chapter_05/wheat.c)

#### 除法运算符 /

- 截断（truncation）：整数除法结果的小数部分被丢弃。整数除法的结果是整数。
[程序清单 5.6 divide.c ](../source_code/Chapter_05/divide.c)
- 趋零截断：负数的整数除法，将负数的小数部分直接丢弃。

#### 运算符优先级（从高到低）
 |运算符 | 结合律 |
|:-----:|:-----:|
|()|从左往右|
|(一元)+、- |从右往左|
|*、/|从左往右|
|(二元)+、- |从左往右|
|=|从右往左|

#### 优先级和求值顺序

[程序清单 5.7 ](../source_code/Chapter_05/rules.c)

#### sizeof 运算符 和 size_t 类型

sizeof 运算符以字节为单位返回运算对象的大小。运算对象可以是具体的数据对象（如，变量名）或类型。如果运算对象是类型（如，float）则必须用圆括号将其括起来。
[程序清单 5.8 ](../source_code/Chapter_05/sizeof.c)
C 语言规定，sizeof 返回 size_t 类型的值，它是无符号整数类型，是语言定义的标准类型。C 有一个 typedef 机制，允许程序员为现有类型创建别名。（如，`typedef double real` real 就是 double 的别名。）
C99 新增了 %zd 转换说明用于 printf() 显示 size_t 类型的值。如果系统不支持 %zd，可使用 %u 或 %lu 代替 %zd。

#### 求模运算符（modulus operator） %

- 求模运算给出其左侧整数除以右侧整数的余数（remainder）。求模运算只能用于整数。
- 求模运算常用于控制程序流。
[程序清单 5.9 ](../source_code/Chapter_05/min_sec.c)
- 负数求模结果：C99规定“趋零截断”后，第一个运算对象是负数，则结果为负数；第一个运算对象是正数，则结果为正数。如果不支持 C99 标准，则可以通过 a - (a/b) * b 来计算 a % b。

#### 递增运算符（increment operator） ++：运算对象递增 1。

前缀模式：++出现在其作用的变量前面；
后缀模式：++出现在其作用的变量后面。
[程序清单 5.10 ](../source_code/Chapter_05/add_one.c)

可重写程序清单 5.2 (shoes2.c)中的一部分代码
```c
shoe = 2.0;
while (++shoe < 18.5)           // shoe先递增再比较
{
    foot = SCALE * shoe + ADJUST;
    printf("%10.1f %15.2f inches\n", shoe, foot);
}
// 这样更简洁，但可读性更差。
```
[程序清单 5.11 ](../source_code/Chapter_05/post_pre.c)

#### 递减运算符（decrement operator） --

前缀递减：--count;
后缀递减：count--;
[程序清单 5.12](../source_code/Chapter_05/bottles.c)

#### 递增、递减运算符的优先级

```c
int y = 2;
int n = 3;
nextnum = (y + n++) * 6; 
/* 
    nextnum = (2 + 3) * 6 = 30
    n 的值只有被使用之后才会递增为 4。根据优先级的规定，++ 只作用于 n， 不作用于 y + n。
    由优先级可判断何时使用 n 的值对表达式求值，而递增运算符的性质决定了何时递增 n 的值。
    n++：先使用 n，再递增
    ++n：先递增 n，再使用
*/
```

#### 不要自作聪明

```c
while (num < 2)
{
    printf("%10d %10d\n", num, num * num++);
}
/*
    该程序的问题：当 printf() 获取待打印的值时，可能先对最后一个参数（num*num++）求值，
    这样再获取其他参数的值之前就递增了 num。本应打印 5 25，却打印了 6 25。
    甚至从右向左执行，对右边的num（++作用的num）使用 5，对第 2 个 num 和最左边的 num 使用 6，
    结果打印为：6 30
    在不同的操作系统中，结果可能不相同。
*/
```

**应遵循的原则：**
- 如果一个变量出现在一个函数的多个参数中，不要对该变量使用递增或递减运算符；
- 如果一个变量多次出现在一个表达式中，不要对该变量使用递增或递减运算符。

#### 表达式（expression）

**每个表达式都有一个值。**
在 C 语言中，赋值和函数调用都是表达式。

#### 语句（statement）：C 程序的基本构建块

在 C 中，大部分语句以分号结尾。
语句可以改变值或调用函数。
一条语句相当于一条完整的指令，但一条完整的指令不一定是一条语句。
在 C 中，声明不是语句，这与 C++ 不同。

[程序清单 5.13 addemup.c ](../source_code/Chapter_05/addemup.c)

副作用（side effect）：对数据对象或文件的修改。从 C 语言的角度，其主要目的是对表达式求值。

序列点（sequence point）：程序执行的点，在该点上，所有的副作用都在进入下一步之前发生。在 C 语言中，语句中的分号标记了一个序列点。即在一个语句中，赋值运算符、递增运算符、递减运算符对运算对象做的改变必须在程序执行下一条语句之前完成。任何一个完整表达式的结束也是一个序列点。

完整表达式（full expression）：指这个表达式不是另一个更大表达式的子表达式。
序列点有助于分析后缀递增何时发生。

```c
y = (4 + x++) + (6 + x++);
/*
    表达式 4 + x++ 不是一个完整表达式，所以 C 无法保证 x 在子表达式 4 + x++ 求值后立即递增 x。
    完整表达式时整个赋值语句表达式，分号标记了序列点。
    所以， C 保证程序在执行下一条语句前递增 x 两次。
    但是，C 并未指明是在对子表达式求职以后递增 x，还是对所有表达式求值后再递增 x。
    因此，要尽量避免编写类似的语句。
*/
```

#### 复合语句（compound statement）（块 block）
### 类型转换

一些基本的类型转换规则：
- 当类型转换出现在表达式时，无论是 unsigned 还是 signed 的 char 和 short 都会被自动转换成 int， 如有必要会被转换成 unsigned int（如果 short 与 int 的大小相同，unsigned short 就比 int 大。这种情况下，unsigned short 会被转换成 unsigned int）。
- 涉及两种类型的运算，两个值会被分别转换成两种类型的更高级别。
- 类型的级别从高到低依次是：long double、double、float、unsigned long long、long long、unsigned long、long、unsigned int、int。（例外的情况，当long 和 int 大小相同时，unsigned int 比 long 级别高。而short 和 char 类型没有列出，是因为它们已被升级到int 和 unsigned int）。
- 在赋值表达式语句中，计算的最终结果会被转换成赋值变量的类型。可能导致升级或降级。（降级 demotion：把一种类型转换成更低级别的类型。）
- 作为函数参数传递时，char 和 short 被转换成 int，float 被转换成 double。

类型升级不会有什么问题，类型降级会导致真正的麻烦。
待赋值的值与目标类型不匹配时，规则如下：
- 目标类型是无符号整型，且待赋的值是整数时，额外的位将被忽略。（如，目标类型是8位 unsigned char，待赋的值是原始值求模256。）
- 如果目标类型是一个有符号整型，且待赋的值是整数，结果因实现而异。
- 如果目标类型是一个整型，且待赋的值是浮点数，该行为是未定义的。

[程序清单 5.14 convert.c ](../source_code/Chapter_05/convert.c)

#### 强制类型转换


### 带参数的函数

[程序清单 5.15 pound.c ](../source_code/Chapter_05/pound.c)

[程序清单 5.16 running.c ](../source_code/Chapter_05/running.c)

## 关键概念

## 小结
