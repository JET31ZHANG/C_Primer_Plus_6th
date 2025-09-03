/* Ch03_Exercises_08.c --  */

/*
    1品脱等于2杯
    1杯等于8盎司
    1盎司等于2大汤勺
    1大汤勺等于3茶勺
*/

/* 
    在美国的测量体系中，1 品脱（1 品脱 = 0.4731765 立方分米）等于2杯，
    1杯等于8盎司（1盎司 = 29.57353 立方厘米），1盎司等于2大汤勺，1大汤勺等于3茶勺。
    编写一个程序，提示用户输入杯数，并且以品脱、盎司、汤勺、茶勺为单位显示等价容量。
    思考对于该程序，为何使用浮点数据比整型数据更合适？
*/

#include <stdio.h>

#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void)
{
    float cup;
    float pint;
    float ounce;
    float spoon;
    float tea_spoon;

    printf("Enter how many cup: ");
    scanf_s("%f", &cup);

    pint = cup / PINT_CUP;
    ounce = cup * CUP_OUNCE;
    spoon = ounce * OUNCE_SPOON;
    tea_spoon = spoon * SPOON_TEA;

    printf("%.1f cup equals %.1f pint, %.1f ounce, %.1f spoon, %.1f tea_spoon.\n", cup, pint, ounce, spoon, tea_spoon);

    return 0;
}

/* Output 
    Enter how many cup: 10
    10.0 cup equals 5.0 pint, 80.0 ounce, 160.0 spoon, 480.0 tea_spoon.
*/