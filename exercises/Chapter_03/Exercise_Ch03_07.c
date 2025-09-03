/* Ch03_Exercises_07.c --  */

// 输入身高（英尺） 输出身高（厘米）

/*
    1英寸相当于2.54厘米。
    编写一个程序，提示用户输入身高（单位：英寸），
    然后以厘米为单位显示身高。
*/

#include <stdio.h>

#define INCH_TO_CM 2.54

int main(void)
{
    float inch, cm;
    printf("Enter your height in inch: ");
    scanf_s("%f", &inch);
    cm = INCH_TO_CM * inch;
    printf("%f inches of height is %.2f cm.\n", inch, cm);

    return 0;
}

/* Output
    Enter your height in inch: 69
    69.000000 inches of height is 175.26 cm.
*/