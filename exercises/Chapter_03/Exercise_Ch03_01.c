/* Ch03_Exercises_01.c -- 整数上溢、浮点数上溢、浮点数下溢 */

/*
通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢、浮点数下溢的情况。
*/

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void)
{
    int big_int = 2147483647;       
    /* 有符号整数的最大值是2的31次方减1 */

    float big_float = 3.4e38;       
    /* 浮点型数据的最大值一般为 3.4E38 */

    float small_float = 10.0 / 3;   
    /* 浮点型数据的有效位数为 6 位 */

    printf("The big int data is %d.\n", big_int);
    /* 整形数据最大值加1，会造成越界，结果为 -2147483647 */ 

    printf("The big float data is %f.\n", big_float);
    /* 浮点型数据乘10造成越界，输出inf。如果浮点数据只加1个
    * 小数据，由于其精度限制，不会造成越界 */

    printf("The big float data is %f.\n", small_float);
    /* 打印 3.333333，精度损失 */

    printf("The Max float data is %f.\n", FLT_MAX);
    /* 打印 340282346638528859811704183484516925440.000000. */

    printf("The Max int data is %ld.\n", INT_MAX);
    /* 打印 2147483647 */ 

    return 0;
}

/* Output
The big int data is 2147483647.
The big float data is 339999995214436424907732413799364296704.000000.
The big float data is 3.333333.
The Max float data is 340282346638528859811704183484516925440.000000.
The Max int data is 2147483647.
*/