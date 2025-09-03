/* Exercise_Ch02_07.c --  */

/* 
    许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输出。

    ``````
    Simle!Simle!Simle!
    Simle!Simle!
    Simle!
    ``````

    该程序要定义一个函数，调用该函数一次打印一次 "Simle!"，
    根据程序的需要使用该函数。
*/

#include <stdio.h>

int Smile(void);

int main(void)
{
    for (int i = 3; i > 0; i--)
        Smile();
    printf("\n");

    for (int i = 2; i > 0; i--)
        Smile();
    printf("\n");

    Smile();
    printf("\n");

    return 0;
}

int Smile(void)
{
    printf("Simle!");
    return 0;
}

/* Output
    Simle!Simle!Simle!
    Simle!Simle!
    Simle!
*/