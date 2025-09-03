/* Exercise_Ch06_08.c --  */

/*
    编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数之积的结果。
    在用户输入非数字之前，程序应循环处理用户输入的每对值。
*/

/*
    程序要求计算两个浮点型数据的差除以两数之积。计算部分的编码相对简单。
    需要用循环语句来反复读取并计算，直到用户输入非数字。可以选择使用 while 循环或 do...while 循环，
    循环的入口条件是 scanf() 函数成功读取浮点型数据的个数。
*/

#include <stdio.h>

int main(void)
{
    float x, y;
    printf("Please enter the two float data(seprate by blank): ");
    while (scanf("%f %f", &x, &y) == 2);
    {
        printf("The answer is %f\n", (x - y) / (x * y));
        printf("Please enter the two float data(sprate by blank): ");
    }
    printf("Program end!");
    return 0;
}