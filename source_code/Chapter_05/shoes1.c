/* Ch05_01_shoes1.c -- 把鞋码转换成英尺 */

/* 计算穿 9 码男鞋的脚长（单位：英寸） */

/* shoes1.c 演示了不使用循环编程的局限性 */
#include <stdio.h>

/* 用 #define 指令创建符号常量 */
#define ADJUST 7.31                 // 字符常量

int main(void)
{
    /* 用 const 限定符创建在程序运行过程中不可更改的变量 */
    const double SCALE = 0.333;     // const 变量
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)    foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}

/* Output:
Shoe size (men's)    foot length
       9.0           10.31 inches
*/