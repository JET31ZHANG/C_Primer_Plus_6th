/* Exercise_Ch06_06.c --  */

/*
    编写一个程序，打印一个表格，每 1 行打印 1 个 整数、该数的平方、该数的立方，
    要求用户输入表格的上下限。使用一个 for 循环。
*/

/*
    程序要求在表格中打印整数、整数的平方、整数的立方。
    表格的起始数据、终止数据由用户输入确定。
    使用 for 循环实现确定次数的循环。
*/

#include <stdio.h>
int main(void)
{
    int start, end;
    printf("Please enter the start number:");
    scanf("%d", &start);
    printf("Please enter the end number:");
    scanf("%d", &end);
    /*  */
    printf("    Ori:    Square:     Cubic:\n");
    for (int i = start; i <= end; i++)
    {
        printf("%6d,%10d,%10d", i, i * i, i * i * i);
        printf("\n");
        /* 打印 3 个数据，循环的入口判断为 i <= end，保证
         * 最后一个值是用户输入的结束值
         *
         * 对于整型数据，计算大数的立方值可能会产生溢出，需要注意
         * */
    }
    return 0;
}