/* Ch03_Exercises_05.c --  */

/*
    一年大约有3.156 x 10^7 秒。
    编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/

#include <stdio.h>

#define SPEC_PER_YEAR 3.156e7

int main(void)
{
    float second, year;

    printf("Enter how many years old you are: ");
    scanf_s("%f", &year);
    second = year * SPEC_PER_YEAR;
    printf("You are: %.1f years old.\n", year);
    printf("And you are %e seconds old, too.\n", second);

    return 0;
}

/* Output
    Enter how many years old you are: 16
    You are: 16.0 years old.
    And you are 5.049600e+08 seconds old, too.
*/