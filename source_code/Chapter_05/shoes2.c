/* Ch05_02_shoes2.c -- 计算多个不同鞋码对应的脚长 */

/* 用循环改进后的程序 */

#include <stdio.h>

#define ADJUST 7.31             // 字符常量

int main(void)
{
    const double SCALE = 0.333; // const 变量
    double shoe, foot;

    printf("Shoe size (men's)    foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)         // while 循环开始
    {                           // 块开始（被 {} 括起来的部分叫作块（block））
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                           // 块结束
    printf("If the shoe fits, wear it.\n");

    return 0;
}

/* Output:
Shoe size (men's)    foot length
       3.0            8.31 inches
       4.0            8.64 inches
       5.0            8.97 inches
       6.0            9.31 inches
       7.0            9.64 inches
       8.0            9.97 inches
       9.0           10.31 inches
      10.0           10.64 inches
      11.0           10.97 inches
      12.0           11.31 inches
      13.0           11.64 inches
      14.0           11.97 inches
      15.0           12.30 inches
      16.0           12.64 inches
      17.0           12.97 inches
      18.0           13.30 inches
If the shoe fits, wear it.
*/