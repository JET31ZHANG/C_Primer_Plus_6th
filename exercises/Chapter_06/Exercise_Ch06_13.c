/* Exercise_Ch06_13.c -- */
/* 
    编写一个程序，创建一个包含 8 个元素的 int 类型数组，分别把数组元素设置为 2 的前8次幂，
    使用 for 循环设置数组元素的值，使用 do ... while 循环显示数组元素的值。
*/

/*
    程序首先定义包含 8 个元素的整型数组，数组元素分别是 2 的前 8 次幂。
    计算方法可以是：当前元素的值等于前一元素值的2倍。分别使用 for 循环赋值、do ... while 循环打印。
*/

#include <stdio.h>
int main(void)
{
    int data[8];
    data[0] = 2;
    for (int i = 1; i < 8; i++)
    {
        data[i] = 2 * data[i - 1];
    }
    int i = 0;
    do {
        printf("%d ", data[i++]);
    } while (i < 8);

    printf("\nDone!\n");

    return 0;
}