/* Exercise_Ch02_05.c --  */

/*
    编写一个程序，生成以下输出。

    ``````
    Brazil, Russia, India, China
    India, China
    Brazil, Russia
    ``````

    除main()函数外，该程序还要调用两个自定义函数：一个名为 br()，
    调用一次打印一次 “Brazil, Russia”；另一个名为 ic()，
    调用一次打印一次 "India, China"。其他功能在 main() 函数中实现。
*/

#include <stdio.h>

int br(void);
int ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");

    ic();
    printf("\n");

    br();
    printf("\n");

    return 0;
}

int br(void)
{
    printf("Brazil, Russia");
    return 0;
}

int ic(void)
{
    printf("India, China");
    return 0;
}

/* Output
Brazil, Russia, India, China
India, China
Brazil, Russia
*/