/* Ch03_Exercises_04.c --  */

/* 
    编写一个程序，读取一个浮点数，先打印小数形式，后打印指数形式。
    然后，如果系统支持，再打印 p 记数法（即十六进制记数法）。
    按照以下格式输出（实际显示的指数位数因系统而异）
*/

#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter a floating-point value:");
    scanf_s("%f", &num);

    printf("fixed-point notation: %f\n", num);  // 以小数形式输出单精度实数
    printf("exponential notation: %e\n", num);  // 以指数形式输出单精度实数
    printf("p notation: %a\n", num);            // 以十六进制形式输出浮点数

    return 0;
}

/* Ouuput:
    Enter a floating-point value:64.25
    fixed-point notation: 64.250000
    exponential notation: 6.425000e+01
    p notation: 0x1.0100000000000p+6
*/