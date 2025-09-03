/* Exercise_Ch07_03.c --  */

/*
    编写一个程序，读取整数，直到用户输入 0。
    输入结束后，程序应报告用户输入的偶数（不包括0）个数、
    这些偶数的平均值、输入的奇数个数和这些奇数的平均值。
*/

/*
    程序主要功能：处理用户输入的数值类型数据，通过判断输入数据的奇偶性，
    进行分别计数和统计。程序可以使用 scanf() 函数直接读取输入数值。
    一些细节在程序代码中通过注释标识。
*/

#include <stdio.h>

int main(void)
{
    int odd_sum = 0;        // 奇数求和
    int even_sum = 0;       // 偶数求和
    int odd_count = 0;      // 奇数计数
    int even_count = 0;     // 偶数计数
    int input = 0;

    printf("Please input numbers (0 for exit): ");
    while (scanf("%d", &input))
    {
        if (input == 0)
            break;

        if (input % 2 == 0)
        {
            even_sum += input;
            even_count++;
        }
        else 
        {
            odd_sum += input;
            odd_count++;
        }
    }
    printf("Have %d even number, average is %g\n", even_count, 1.0 * even_sum / even_count);
    printf("Have %d odd number, average is %g\n", odd_count, 1.0 * odd_sum / odd_count);
    printf("Done!\n");

    return 0;
}