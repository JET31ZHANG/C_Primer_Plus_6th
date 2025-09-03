/* Exercise_Ch02_06.c --  */

/* 
    编写一个程序，创建一个整型变量 toes，并将 toes 设置为 10，
    程序中还要计算 toes 的两倍和 toes 的平方。
    该程序应打印3个值，并分别描述以示区别。
*/

#include <stdio.h>

int main(void)
{
    int toes = 10;

    printf("The Variable toes = %d\n", toes);
    printf("double toes = %d\n", 2 * toes);
    printf("toes squared = %d\n", toes * toes);

    return 0;
}

/* Output
The Variable toes = 10
double toes = 20
toes squared = 100
*/