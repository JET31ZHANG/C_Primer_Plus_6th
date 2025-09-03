/* Exercise_Ch06_10.c --  */

/* 
    编写一个程序，要求用户输入一个上限证书和一个下限整数，计算从上限到下限范围内所有整数的平方和，
    并显示计算结果。然后继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数等于或
    小于下限整数为止。

    Enter lower and upper limits: 5 9
    The sum of the squares from 25 to 81 is 255
    ENter lower and upper limits: 3 25
    The sum of the squares from 9 to 625 is 5520
    Enter lower and upper limits: 5 5 
    Done!
*/

/*
    程序要求计算指定范围内整数的平方和，平方和的计算可以使用 for 循环实现。
    对于用户的循环输入，需要判断两个输入值的大小关系，当下限数值大于或等于上限数值时，终止程序。
*/
#include <stdio.h>

int main(void)
{
    int lower, upper;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);     /* 使用 scanf() 函数读取上下限数值 */
    while (upper > lower) 
    {
        /* 判断用户输入的上下限数值 */
        int sum = 0;
        for (int i = lower; i <= upper; i++)
            sum += i * i;               /* 通过 for 循环计算平方和 */
        printf("The sum of the squares from %d to %d is %d.\n", lower, upper, sum);
        printf("Enter lower and upper integer limits: ");
        scanf("%d %d", &lower, &upper);     /* 用户再次输入上下限数值 */
    }
    printf("Done!");

    return 0;
}