/* Exercise_Ch06_11.c --  */

/*
    编写一个程序，在数组中读入 8 个整数，然后倒序打印这 8 个整数。
*/

/*
    程序要求首先读取 8 个整数，并存入整型数组，然后倒序打印。
*/

#include <stdio.h>

int main(void)
{
    int data[8];
    printf("Plese enter the 8 integers data (seperate by blank): ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &data[i]);      /* 通过用户的输入，读取 8 个整型数据 */
    }

    printf("OK, the reverse data is: ");
    for (int i = 7; i >= 0; i--)
    {
        printf(" %d", data[i]);     /* 倒序打印，注意下标越界的问题 */
    }
    printf("\nDone!\n");

    return 0;
}