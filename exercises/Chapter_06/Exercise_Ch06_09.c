/* Exercise_Ch06_09.c --  */

/*
    修改编程练习8，使用一个函数返回计算结果。
*/

/*
    使用函数计算两个浮点型数据的差除以两数乘积，因此函数的返回值应当是浮点型数据，
    函数的参数是用户输入的两个浮点型数据。
*/
#include <stdio.h>
float calc(float x, float y);

int main(void)
{
    float x, y;
    printf("Please enter the two float data (seprate by blank): ");
    while (scanf("%f %f", &x, &y) == 2)
    {
        printf("The answer is %f\n", calc(x, y));
        printf("Please enter the two float data (seprate by blank): ");
    }
    printf("Program end!");

    return 0;
}

float calc(float x, float y)
{
    return (float)((x - y) / (x * y));
    /* 处理运算的函数，整个函数体也可以简化为 return (x - y) / (x * y);
     * 函数不处理 x 或 y 为 0 的情况 */
}