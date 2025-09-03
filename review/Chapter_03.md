1. 指出在什么情况下用 long 类型的变量代替 int 类型的变量？
a. East Simpleton 的人口；
b. DVD 的价格；
c. 本章出现次数最多的字母；
d. 本章出现次数最多的字母的次数。

2. 在什么情况下要用 long 类型的变量代替 int 类型的变量？

3. 使用哪些可移植的数据类型可以获得 32 位有符号整数？选择的理由是什么？

4. 指出下列常量的类型和含义：
a. '\b';
b. 1066;
c. 99.44;
d. 0XAA;
e. 2.0e30。

5. Dotti Cawn 编写了一个程序，请找出程序中的错误
```c
include <stdio.h>
main(
    float g; h;
    float tax, rate;
    g = e21;
    tax = rate * g;
)
```

6. 写出下列常量在声明中使用的数据类型和在 printf() 中对应的转换说明。

7. 写出下列常量声明中使用的数据类型和 printf() 中对应的转换说明（假设 int 为 16位）

8. 假设程序的开头有以下声明
int imate = 2;
long shot = 53456
char grade = 'A'
float log = 2.71828
把下面的 printf() 语句中的转换字符补充完整。
printf("The odds agaist the %__ were %__ to 1.\n", imate, shot);
printf("A score of %__ is not an %__ grade.\n", log, grade);

9. 假设 ch 是 char 类型的变量，分别使用转义序列、十进制、八进制字符常量和十六进制字符常量把回车字符赋给 ch（假设使用 ASCII 编码值）

10. 修正下面的程序（在C中，/表示除以）
```c
void main(int) / this program is perfect /
{
    cows, legs, integer;
    printf("How many cows legs did you count?\n");
    scanf("%c", legs);
    cows = legs / 4;
    printf("That implies there are %f cows,\n", cows);
}
```

11. 指出下列转义字符的含义：
a. \n;
b. \\;
c. \";
d. \t.

