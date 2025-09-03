# 存储类别、链接和内存管理

## 概要

- 关键字：auto、extern、static、register、const、volatile、restricted、_Thread_local、_Atomic；
- 函数：rand()、srand()、time()、malloc()、calloc()、free()；
- 如何确定变量的作用域（可见的范围）和生命期（它存在多长时间）；
- 设计更复杂的程序。

## 内容

### 存储类别

#### 作用域

#### 链接

#### 存储期

#### 自动变量

[程序清单 12.1 hiding.c ](../source_code/Chapter_12/hiding.c)

1. 没有花括号的块

[程序清单 12.2 forc99.c ](../source_code/Chapter_12/forc99.c)

2. 自动变量的初始化

#### 寄存器变量

#### 块作用域的静态变量

[程序清单 12.3 loc_stat.c ](../source_code/Chapter_12/loc_stat.c)

#### 外部链接的静态变量

1. 初始化外部变量

2. 使用外部变量

[程序清单 12.4 global.c ](../source_code/Chapter_12/global.c)

#### 内部链接的静态变量

#### 多文件

#### 存储类别说明符

[程序清单 12.5 parta.c ](../source_code/Chapter_12/parta.c)

[程序清单 12.6 partb.c ](../source_code/Chapter_12/partb.c)


#### 存储类别和函数

#### 存储类别的选择

### 随机数函数和静态变量

[程序清单 12.7 rand0.c ](../source_code/Chapter_12/rand0.c)

[程序清单 12.8 r_drive0.c ](../source_code/Chapter_12/r_drive0.c)

[程序清单 12.9 s_and_r.c ](../source_code/Chapter_12/s_and_r.c)

[程序清单 12.10 r_drive1.c ](../source_code/Chapter_12/r_drive1.c)

### 掷骰子

[程序清单 12.11 diceroll.c ](../source_code/Chapter_12/diceroll/diceroll.c)

[程序清单 12.12 diceroll.h ](../source_code/Chapter_12/diceroll/diceroll.h)

[程序清单 12.13 manydice.c ](../source_code/Chapter_12/diceroll/manydice.c)

### 分配内存：malloc() 和 free()

[程序清单 12.14 dyn_arr.c ](../source_code/Chapter_12/dyn_arr.c)

#### free() 的重要性

#### calloc() 函数

#### 动态内存分配和变长数组

#### 存储类别和动态内存分配

[程序清单 12.15 where.c ](../source_code/Chapter_12/where.c)

### ANSI C 类型限定符

#### const 类型限定符

#### volatile 类型限定符

#### restrict 类型限定符

#### _Atomic 类型限定符（C11）


## 关键概念

## 小结