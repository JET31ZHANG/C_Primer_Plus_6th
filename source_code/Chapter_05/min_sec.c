/* Ch05_09_min_sec.c -- 把秒数转换成分和秒 */
/* 
    演示了 % 运算符的另一种用途，
    同时，该程序还演示了 while 循环的另一种用法
*/

#include <stdio.h>

#define SEC_PER_MIN 60              // 1 分钟 60 秒

int main(void)
{
    int sec, min, left;

    printf("Covert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf_s("%d", &sec);            // 读取秒数

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;    // 截断分钟数
        left = sec % SEC_PER_MIN;   // 剩下的秒数
        printf("%d seconds is %d minutes, %d seconds.\n",
            sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf_s("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}

/* Output:
Covert seconds to minutes and seconds!
Enter the number of seconds (<=0 to quit):
154
154 seconds is 2 minutes, 34 seconds.
Enter next value (<=0 to quit):
567
567 seconds is 9 minutes, 27 seconds.
Enter next value (<=0 to quit):
0
Done!
*/