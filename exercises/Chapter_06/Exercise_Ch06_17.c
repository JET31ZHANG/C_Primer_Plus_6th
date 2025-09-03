/* Exercise_Ch06_17.c --  */
/*
    Chuckie Lucky 赢得了 100 万美元（税后），他把奖金存入了年利率为 8% 的账户中。
    在每年的最后一天 Chuckie 取出 10 万美元。
    编写一个程序，计算多少年后 Chuckie 会取完账户的钱
*/

/*
    Chuckie 账户每年获取存款总额的 8% 的年利息，且最后一天取出 10 万美元，
    因此通过不定次数循环进行计算更加合理，当取出 10 万美元之后，若余额低于 9 万美元，
    则不够下一年支取。
*/

#include <stdio.h>

int main(void)
{
    float chuckie = 100;
    int year = 0;
    do {
        chuckie = chuckie + 0.08 * chuckie;
        chuckie -= 10;
        year++;
        printf("%f\n", chuckie);
    } while (chuckie > 9);

    printf("%d years later. Chuckie's account %f \n", year, chuckie);
    printf("%d years later. Chuckie's account is null \n", ++year);

    printf("\nDOne!\n");

    return 0;
}