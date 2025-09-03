/* Exercise_Ch05_07.c --  */

/*

*/

/*

*/

#include <stdio.h>

#pragma warning(disable:4996)

double cubic(double n);

int main(int argc, char * argv[])
{
    double input;
    printf("Enter the double datum to calc dubic :");
    scanf("%lf", &input);
    /* 读取用户的输入 */
    cubic(input);
    /* 调用立方函数计算立方值 */
    printf("PRPGRAM EXIT!\n");

    return 0;
}

/* 定义立方函数 */
double cubic(double n)
{
    double t = n * n * n;
    printf("The %lg's cubic is %lg !\n", n, t);
    return t;
}