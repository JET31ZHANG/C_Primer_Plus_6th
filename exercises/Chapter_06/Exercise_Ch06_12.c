/* Exercise_Ch06_12.c --  */

/*
    考虑下面两个无需序列
    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

    编写一个程序，计算这两个无限序列的总和，直到到达某次数。

    提示：奇数个 -1 相乘得 -1，偶数个 -1 相乘得 1。

    让用户交互地输入指定的次数，当用户输入 0 或负值时结束输入。
    查看输入 100 项、1000 项、10000 项后的总和，是否发现每个序列都收敛于某值？
*/

/*
    程序读取用户输入的整型数据，计算两个无限序列的总和。

    求和算法可直接使用 for 循环。
    
    第 1 个序列可以直接求和，第 2 个序列需要通过判断奇偶项来获取该项的正负号。
    
    两个数列的和只计算奇数项。
*/

#include <stdio.h>

int main(void)
{
    int length;
    double sum = 0.0;
    printf("Enter the limit length: ");
    scanf("%d", &length);

    while (length > 0)
    {
        sum = 0.0;
        for (int i = 1; i <= length; i++)
        {
            // 计算 1 + 1/2 + 1/3 + 1/4 ...
            sum += 1.0 / i;     
        }
        printf("The sum of 1.0 + + 1.0/%d.0 is %f\n", length, sum);
        
        sum = 0.0;
        for (int i = 1; i <= length; i++)
        {
            // 计算 1 - 1/2 + 1/3 - 1/4 ...
            if (i % 2 == 0)
            {
                sum += -1.0 / i;
            }
            else
            {
                sum += 1.0 / i;
            }
        }
        printf("The sum of 1.0 - ... + 1.0/%d.0 is %f\n", length, sum);

        sum = 0.0;
        for (int i = 1; i <= length; i++)
        {
            if (i % 2 == 0)
            {
                sum += 2 * 1.0 / i;     // 两个数列的和只计算奇数项，偶数项相抵消。
            }
        }
        printf("Enter the limit length: ");
        scanf("%d", &length);
    }
    printf("\nDone!\n");

    return 0;
}