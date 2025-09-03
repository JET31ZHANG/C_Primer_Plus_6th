# 文件输入/输出

## 概要

- 函数：fopen()、getc()、putc()、exit()、fclose()、fprintf()、fscanf()、fgets()、fputs()、rewind()、fseek()、ftell()、fflush()、fgetpos()、fsetpos()、feof()、ferror()、ungetc()、setvbuf()、fread()、fwrite()；
- 如何使用 C 标准 I/O 系列的函数处理文件；
- 文件模式和二进制模式、文本和二进制格式、缓冲和无缓冲 I/O；
- 使用既可以顺序访问文件也可以随机访问文件的函数。

## 内容

### 与文件进行通信

#### 文件
#### 文本模式和二进制模式
#### I/O 的级别
#### 标准文件

### 标准 I/O

[程序清单 13.1 count.c ](../source_code/Chapter_13/count.c)


#### 检查命令行参数
#### fopen() 函数
#### getc() 和 putc()
#### 文件结尾

#### fclose() 
#### 指向标准文件的指针

### 一个简单的文件压缩程序

[程序清单 13.2 reducto.c ](../source_code/Chapter_13/reducto/reducto.c)

### 文件 I/O: 

#### fprintf()、fscanf()

[程序清单 13.3 addaword.c ](../source_code/Chapter_13/addaword/addaword.c)

#### fgets()、fputs()

### 随机访问:fseek() 和 ftell()

[程序清单 13.4 reverse.c ](../source_code/Chapter_13/reverse/reverse.c)

#### fseek() 和 ftell() 的工作原理

#### 二进制模式和文本模式

#### 可移植性

### 标准 I/O 的机理

### 其他标准 I/O 函数

#### int ungetc(int c, FILE *fp)
#### int fflush()
#### int setvbuf()
#### 二进制 I/O：fread()、fwrite()
#### size_t fwrite()
#### size_t fread()
#### int feof(FILE *fp) 和 int ferror(FILE *fp)
#### 一个程序示例

[程序清单 13.5 append.c ](../source_code/Chapter_13/append.c)

#### 用二进制 I/O 进行随机访问

[程序清单 13.6 randbin.c ](../source_code/Chapter_13/randbin/randbin.c)

## 关键概念

## 小结