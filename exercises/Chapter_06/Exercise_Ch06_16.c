/* Exercise_Ch06_16.c --  */
/*
    Daphne 以 10% 的单利投资了 100 美元（即每年投资获利相当于原始投资的 10%）。
    Deirdre 以 5% 的复利投资了 100 美元（即利息是当前余额的 5%，包含之前的利息）
    编写一个程序计算需要多少年 Deirdre 的投资额才会超过 Daphne，并显示那时两人的投资额
*/

/*
    程序分别计算两人在每年的利息及投资额。
    两人的投资额计算方法略有不同。
    Daphne 的原始投资额不变，投资获利一直是原始投资额；
    Deirdre 的投资额每年递增，利息自动转入原始投资额。
*/

#include <stdio.h>

int main(void)
{
    float daphne, deirdre;
    daphne = deirdre = 100.0;
    int year = 0;

    do {
        daphne = daphne + 100 * 0.1;
        deirdre = deirdre + deirdre * 0.05;
        year++;
    } while ((deirdre - daphne) < 0);       // 当 deirdre 大于 daphne 时，退出循环

    printf("%d years later.\nDaphne = %f.\nDeirdre = %f\n", year, daphne, deirdre);
    printf("\nDone!\n");

    return 0;
}