/* Ch12_5_parta.c -- 不同的存储类别 */ 
/* 与 partb.c 一起编译 */
#include <stdio.h>

void report_count(void);
void accumulate(int k);
int count = 0;      /* 文件作用域，外部链接 */

int main(void)
{
    int value;          // 自动变量
    register int i;     // 寄存器变量

    printf("Enter a positive integer (0 to quit): ");
    while (scanf_s("%d", &value) == 1 && value > 0)
    {
        ++count;        // 使用文件作用域变量
        for (i = value; i >= 0; i--)
        {
            accumulate(i);
        }
        printf("Enter a positive integer (0 to quit):");
    }

    return 0;
}

void report_count(void)
{
    printf("Loop executed %d times\n", count);
}



/* Ouput
Enter a positive integer (0 to quit): 3
loop cycle: 1
subtotal: 6; total: 6
Enter a positive integer (0 to quit):5
loop cycle: 2
subtotal: 15; total: 21
Enter a positive integer (0 to quit):0
*/
