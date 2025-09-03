1. 下面的程序将打印什么内容？
```c
#include <stdio.h>

int main(void) {
    int ref[] = { 8, 4, 0, 2 };
    int *ptr;
    int index;

    for (index = 0; ptr = ref; index++, ptr++)
        printf("%d %d", ref[index], *ptr);
}
```

2. 在复习题 1 中，ref 有多少个元素？

3. 在复习题 1 中，ref 的地址是什么？ref + 1 是什么意思？ ++ref 指向什么？

4. 在下面的代码中，*ptr 和 *(ptr + 2) 的值分别是什么？
a. 
```c
int *ptr;
int torf[2][2] = { 12, 14, 16 };
ptr = torf[0];
```
b.
```c
int *ptr;
int fort[2][2] = {{12}, {14, 16}};
ptr = fort[0];
```

5. 在下面的代码中，**ptr 和 **(ptr + 1) 的值分别是什么？
a. 
```c
int (*ptr)[2];
int torf[2][2] = { 12, 14, 16 };
ptr = torf;
```
b. 
```c
int (*ptr) [2];
int fort[2][2] = { {12}, {14, 16} };
ptr = fort[0];
```

6. 假设有下面的声明：
`int grid[30][100];`
a. 用 1 种写法表示 grid[22][56] 的地址；
b. 用 2 种写法表示 grid[22][0] 的地址；
c. 用 3 种写法表示 grid[0][0] 的地址。

7. 正确声明以下各变量：
a. digits 是一个内含 10 个 int 类型值的数组；
b. rates 是一个内含 6 个 float 类型值的数组；
c. mat 是一个内含 3 个元素的数组，每个元素都是内含 5 个整数的数组；
d. psa 是一个内含 20 个元素的数组，每个元素都是指向 int 类型值的指针；
e. pstr 是一个指向数组的指针，该数组内含 20 个 char 类型的值。

8. 分别实现以下操作：
a. 声明一个内含 6 个 int 类型值的数组，并初始化各元素为 1、2、4、8、16、32；
b. 用数组表示法表示 a 部分声明的数组的第 3 个元素（其值为4）；
c. 假设编译器支持 C99/C11 标准，声明一个内含 100 个 int 类型值的数组，并初始化最后一个元素为 -1,其他元素不考虑；
d. 假设编译器支持 C99/C11 标准，声明一个内含 100 个 int 类型值的数组，并初始化下标为5、10、11、12、3的元素是 101,其他元素不考虑。

9. 内含 10 个元素的数组的下标范围是多少？

10. 假设有下面的声明。
```c
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
```
判断以下各项是否有效。
a. rootbeer[2] = value;
b. scanf("%f", &rootbeer);
c. rootbeer = value;
d. printf("%f", rootbeer);
e. things[4][4] = rootbeer[3];
f. things[5] = rootbeer;
g. pf = value;
h. pf = rootbeer;

11. 声明一个 800x600 的 int 类型的数组。
```c
int data[800][600];
```
12. 下面声明 3 个数组。
```c
double trots[20];
short clops[10][30];
long shots[5][10][15];
```
a. 分别以传统方式和变长数组的方式编写处理 trots 数组的 void 函数原型和函数调用。
b. 分别以传统方式和变长数组的方式编写处理 clops 数组的 void 函数原型和函数调用。
c. 分别以传统方式和变长数组的方式编写处理 shots 数组的 void 函数原型和函数调用。

13. 下面有两个函数原型。
```c
void show(const double ar[], int n);        // n 是数组元素的个数
void show2(const double ar2[][3], int n);   // n 是二维数组的行数
```
a. 编写一个函数调用，把一个内含 8、3、9 和 2 的复合字面量传递给 show() 函数。
b. 编写一个函数调用，把一个2行3列的复合字面量（以8、3、9作为第1行，以5、4、1作为第2行）传递给 show2() 函数。