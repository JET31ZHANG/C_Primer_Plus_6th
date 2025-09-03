1. 判断下面的表达式是 true 还是 false：
a. 100 > 3 && 'a' > 'c'
b. 100 > 3 || 'a' > 'c'
c. !(100 > 3)

2. 根据下列描述的条件，分别构造一个表达式：
a. number 等于或大于 9,但是小于 100；
b. ch 不是字符 q 或 k；
c. number 介于 1 ～ 9（包括 1 和 9），但不是 5；
d. number 不介于 1 ～ 9

3. 下面的程序关系表达式过于复杂，而且还有些错误，请简化并改正。
```c
#include <stdio.h>
int main(void)                                  /* 第 1 行 */
{                                               /* 第 2 行 */
    int weight, height; /*weight 以磅为单位，
                    height 以英寸为单位 */      /* 第 4 行 */
    scanf("%d", weight, height);                /* 第 5 行 */
    if (weight < 100 && height > 64)            /* 第 6 行 */
        if (height >= 72)                       /* 第 7 行 */
            printf("you are very tall for your weight\n");
        else if (height < 72 && > 64)               /* 第 9 行 */
    printf("you are tall for your weight\n");       /* 第 10 行 */
    else if (weight > 300 && !(weight <= 300) && height < 48)       /* 第 11 行 */

        if (!(height >= 48))                        /* 第 13 行 */
            printf(" you are quite short for you weight.\n");
        else                                        /* 第 15 行 */
            printf("YOu weight is ideal.\n");       /* 第 16 行 */
    /* 17 */
    return 0;
}
```
4. 下列各表达式的值是多少？
a. 5 > 2
b. 3 + 4 > 2 && 3 < 2
c. x >= y || y > x
d. d = 5 + (6 > 2)
e. 'X' > 'T' ? 10 : 5
f. x > y ? y > x : x > y

5. 下面的程序将打印什么？
```c
#include <stdio.h>
int main(void)
{
    int num;
    for (num = 1; num <= 11; num++)
    {
        if (num % 3 == 0)
            putchar('$');
        else 
            putchar('*');
        putchar('#');
        putchar('%');
    }
    putchar('\n');

    return 0;
}
```

6. 下面的程序将打印什么？
```c
#include <stdio.h>
int main(void)
{
    int i = 0;
    while (i < 3) {
        switch(i++) {
            case 0: printf("fat ");
            case 1: printf("hat ");
            case 2: printf("cat ");
            default: printf("Oh no! ");
        }
        putchar('\n');
    }
    return 0;
}
```
7. 下面的程序有哪些错误？
```c
#include <stdio.h>
int main(void)
{
    char ch;
    int lc = 0;     /* 统计小写字母
    int uc = 0;     /* 统计大写字母
    int oc = 0;     /* 统计其他字母
    while ((ch = getchar()) != '#')
    {
        if ('a' <= ch >= 'z')
            lc++;
        else if (!(ch < 'A') || !(ch > 'Z'))
            uc++;
        oc++
    }
    printf("%d lowercase, %d uppercase, %d other, lc, uc, oc");

    return 0;
}
```

8. 下面的程序将打印什么？
```c
/* retire.c */
#include <stdio.h>

int main(void)
{
    int age = 20;
    while (age++<=65)
    {
        if ((age % 20) == 0)
            printf("You are %d. Here is a raise.\n", age);
        if (age = 65)
            printf("You are %d. Here is your gold watch.\n", age);
    }
    return 0;
}
```

9. 当给定下面输入时，以下程序将打印什么？
q
c
h
b
```c
#include <stdio.h>

int main(void)
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("Step 1\n");
        if (ch == 'c')
            continue;
        else if (ch == 'b')
            break;
        else if (ch == 'h')
            goto laststep;
        printf("Step 2\n");
        laststep: printf("Step 3\n");
    }
    printf("Done\n");
    return 0;
}
```
10. 重做复习题 9,但这次不能使用 continue 和 goto 语句。