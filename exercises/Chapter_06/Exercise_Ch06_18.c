/* Exercise_Ch06_18.c --  */
/*
    Rabnud 博士加入了一个社交圈，起初他有 5 个朋友。他注意到他的朋友以下面的方式
    增长。
    第 1 周少了 1 个朋友，剩下的朋友数量翻倍；
    第 2 周少了 2 个朋友，剩下的朋友数量翻倍。
    一般而言，第 N 周少了 N 个朋友，剩下的朋友数量翻倍。

    编写一个程序，计算并显示 Rabnud 博士每周的朋友数量。
    该程序一直运行，直到超过邓巴数（Dunbar‘s number）。
    邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值约为 150。
*/

/*
    在该程序中，Rabnud 朋友圈的算法可以表述为 2 * （朋友数 - 周数），
    朋友数的起始值为 5,为了计算何时达到邓巴数，应使用不定次循环，
    循环入口条件设置为朋友数小于邓巴数。
*/

#include <stdio.h>

int main(void)
{
    int rabnud = 5;
    int weeks = 1;
    while (rabnud < 150)
    {
        printf("At %d week, Rabnud has %4d friends \n", weeks, rabnud);
        // 计算每周 Rabnud 博士的朋友数
        rabnud = 2 * (rabnud - weeks++);
    }
    printf("\nDone!\n");

    return 0;
}

/*
    At 1 week, Rabnud has    5 friends 
    At 2 week, Rabnud has    8 friends 
    At 3 week, Rabnud has   12 friends 
    At 4 week, Rabnud has   18 friends 
    At 5 week, Rabnud has   28 friends 
    At 6 week, Rabnud has   46 friends 
    At 7 week, Rabnud has   80 friends 
    At 8 week, Rabnud has  146 friends 

    Done!
*/