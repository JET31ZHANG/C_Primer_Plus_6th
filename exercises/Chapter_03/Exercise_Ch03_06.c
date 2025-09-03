/* Ch03_Exercises_06.c --  */

/* 
    一个水分子的质量为3.0 x 10^-32 克。
    1 夸脱水的质量大约是950克。
    编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/

#include <stdio.h>

#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUART 950

int main(void)
{
    float quarts;
    float quantity;

    printf("Enter the number of quarts of water: ");
    scanf_s("%f", &quarts);
    quantity = quarts * MASS_PER_QUART / MASS_PER_MOLE;
    printf("%f quarts of water contain %e molecules.\n", 
        quarts, quantity);

    return 0;
}

/* Output
    Enter the number of quarts of water: 5
    5.000000 quarts of water contain 1.583333e+26 molecules.
*/