1. 实参和形参的区别是什么？

2. 根据下面各函数的描述，分别编写他们的 ANSI C 函数头，注意，只需要写出函数头，不用写函数体。
a. donut() 接受 1 个 int 类型的参数，打印若干（由参数指定的数目）个 0；
b. gear() 接受 2 个 int 类型的参数，返回 int 类型的值；
c. guess() 不接受参数，返回 1 个 int 类型的值；
d. stuff_it() 接受 1 个 double 类型的值和 double 类型变量的地址，把第一个值存储在指定位置。

3. 根据下面各函数的描述，分别编写他们的 ANSI C 函数头。注意，只需要写出函数头，不用写函数体。
a. n_to_char() 接受 1 个 int 类型的参数，返回 1 个 char 类型的值；
b. digit() 接受 1 个 double 类型的参数和 1 个 int 类型的参数，返回 1 个 int 类型的值；
c. which() 接受 2 个 可存储的 double 类型变量的地址，返回 1 个 double 类型的地址；
d. random() 不接受参数，返回 1 个 int 类型的值。

4. 设计一个函数，返回两个整数之和。

5. 如果把复习题 4 改成返回两个 double 类型的值之和，应如何修改函数？

6. 设计一个名为 alter() 的函数，用于接受两个 int 类型的变量 x 和 y，并把它们的值分别改成两个变量之和以及两个变量之差。

7. 下面的函数定义是否正确？
```c
void alter(int *x, int *y) {
    int temp;
    temp = *x - *y;
    *x = *x + *y;
    *y = temp;
}
```

8. 编写一个函数，返回 3 个整型参数中的最大值。

```c
int max(int x, int y, int z) {
    int max_value = x;
    if (y > max_value)
        max_value = y;
    if (z > max_value)
        max_value = z;
    return max_value;
}
```

9. 给定下面的输出。
Please choose one of the following:
1) copy files       2) move files
3) remove files     4) quit
Enter the number of your choice:

a. 编写一个函数，显示一份有 4 个选项的菜单，提示用户进行选择（输出如上所示）
b. 编写一个函数，接受两个 int 类型的参数，分别表示上限和下限。该函数从用户输入中读取整数。如果整数超过规定上下限。函数再次打印菜单（使用 a 部分的函数）提示用户输入，然后获取一个新值。如果用户输入的整数在规定范围内，该函数则把该整数返回主调函数。如果用户输入一个非整数字符，该函数应返回 4。
c. 使用本题 a 和 b 部分的函数编写一个最小型的程序。最小型的意思是，该程序不需要实现菜单中各选项的功能，只需要显示这些选项并获取有效的响应即可。
