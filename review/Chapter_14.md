1. 下面的结构模板有什么问题？
```c
structure {
    char itable;
    int num[20];
    char * togs;
}
```

2. 下面是程序的一部分，输出是什么？
```c
#include <stdio.h>

struct house {
    float sqft;
    int rooms;
    int stories;
    char address[40];
};

int main(void)
{
    struct house fruzt = {1560.0, 6, 1, "22 Spiffo Road"};
    struct house *sign;
    sign = &fruzt;
    printf("%d %d\n", fruzt.rooms, sign->stories);
    printf("%s \n", fruzt.address);
    printf("%c %c\n", sign->address[3], fruzt.address[4]);

    return 0;
}
```

3. 设计一个结构模板，用于存储一个月份名、该月份名的3个字母缩写、该月的天数以及月份编号。

```c
struct month {
    char month_name [10];
    char month_abbrev[4];   // 3 个字母加 1 个空字符
    int days;
    int number;
};
```

4. 定义一个数组并初始化为一个年份（非闰年），该数组包含 12 个结构（复习题 3 中的结构类型）。

```c
struct month months[12] = {
    {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}
};
```

5. 编写一个函数，用户提供月份编号，该函数就返回一年中到该月为止（包括该月）的总天数。假设在所有函数的外部声明了复习题 3 的结构模板和一个该结构类型的数组。

6. a. 假设有下面的 typedef，声明一个内含 10 个指定结构的数组。然后，单独给成员赋值（或等价字符串），使第3个元素表示一个焦距长度为 500mm、孔径为 f/2.0 的 Remarkata 镜头。
b. 重做 a 部分，在声明中使用一个待指定初始化器的初始化列表，而不是对每个成员单独赋值。

7. 考虑下面的程序片段
```c
struct name {
    char first[20];
    char last[20];
};

struct bem {
    int limbs;
    struct name title;
    char type[30];
};

struct bem * pb;
struct bem deb = { 6, { "Berbnazel", "Gwolkapwolk" }, "Arcturan" };
pb = &deb;
```
a. 下面的语句分别打印什么？
```c
printf("%d\n", deb.limbs);
printf("%s\n", pb->type);
printf("%s\n", pb->type + 2);
```
b. 如何用结构表示法（两种方法）表示"Gwolkapwolk"？
c. 编写一个函数，以 bem 结构的地址为参数，并以下面的形式输出结构的内容（假定结构模板存放在一个名为 starfolk.h 的头文件中）。

8. 考虑下面的声明
```c
struct fullname {
    char first[20];
    char last[20];
};

struct bard {
    struct fullname name;
    int born;
    int died;
};

struct bard willie;
struct bard *pt = &willie;
```
a. 用 willie 标识符标识 willie 结构的 born 成员。
b. 用 pt 标识符标识 willie 结构的 born 成员。
c. 调用 scanf() 读入一个用 willie 标识符标识的 born 成员的值
d. 调用 scanf() 读入一个用 pt 标识符标识的 born 成员的值。
e. 调用 scanf() 读入一个用 willie 标识符标识的 name 成员中 lname 成员的值。
f. 调用 scanf() 读入一个用 pt 标识符标识的 name 成员中 lname 成员的值
g. 构造一个标识符，标识 willie 结构变量所表示的姓名中的名的第 3 个字母（英文的名在前）。
h. 构造一个表达式，表示 willie 结构变量所标识的名和姓中的字母总数。

9. 定义一个结构模板以存储这些项——汽车名、功率、EPA（美国环保局）城市交通MPG（每加仑燃料行使的英里数）评级、轴距和出场年份。使用 car 作为该模板的标记。

10. 假设有如下结构。
```c
struct gas {
    float distance;
    float gals;
    float mpg;
};
```
a. 设计一个函数，接受 struct gas 类型的参数。假设传入的结构包含 distance 和 gals 信息。该函数为 mpg 成员计算正确的值，并把值返回该结构。
b. 设计一个函数，接受 struct gas 类型的参数。假设传入的结构包含 distance 和 gals 信息。该函数为 mpg 成员计算正确的值，并把值赋给合适的成员。

11. 声明一个标记为 choices 的枚举，把枚举常量 no、yes 和 maybe 分别设置为 0、1 与 2。

12. 声明一个指向函数的指针，该函数返回指向 char 的指针，接受一个指向 char 的指针和一个 char 类型的值。

13. 声明 4 个函数，并初始化一个指向这些函数的指针数组。每个函数都接受两个 double 类型的参数，返回 double 类型的值。另外，以两种方法使用该数组调用带实参 10.0 和 2.5 的第 2 个函数。
