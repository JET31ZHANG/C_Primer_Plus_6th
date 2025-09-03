/* Exercise_Ch02_04.c --  */

/*
    编写一个程序，生成以下输出。

    ``````
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    Which nobody can deny!
    ``````

    除 main() 函数外，该程序还要调用两个自定义函数：一个名为 jolly()，
    用于打印前 3 条消息，调用一次打印一条；另一个函数名为 deny()，打印最后一条消息。
*/


#include <stdio.h>

int jolly(void);
int deny(void);

int main(void)
{
    for (int i = 3; i > 0; i--)
    {
        jolly();
    }

    deny();

    return 0;
}

int jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    return 0;
}

int deny(void)
{
    printf("Which nobody can deny!\n");
    return 0;
}

/* Output
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    For he's a jolly good fellow!
    Which nobody can deny!
*/