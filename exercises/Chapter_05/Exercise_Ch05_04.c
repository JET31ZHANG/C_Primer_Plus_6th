/* Exercise_Ch05_04.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54
/* 预定义转换单位明示常量 */

int main(int argc, char * argv[])
{
    int feet;
    float inches, cm;
    printf("CONVERT CM TO INCHES!\n");
    printf("Enter the height in centimeters:");
    scanf("%f", &cm);
    /* 读取用户输入的数据 */
    while (cm > 0)
    {
        feet = cm / FEET_TO_CM;
        inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
        /* 数据转换计算 */
        printf(" %.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        /* 打印结果 */
        printf("Enter the height in centimeters( <=0 TO QUIT ):");
        scanf("%f", &cm);
        /* 循环读取用户输入 */
    }
    printf("PROGRAM EXIT!\n");

    return 0;
}

/*
* Output:
CONVERT CM TO INCHES!
Enter the height in centimeters:182
 182.0 cm = 5 feet, 11.7 inches
Enter the height in centimeters( <=0 TO QUIT ):0
PROGRAM EXIT!
*/