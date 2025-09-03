/* Ch04_08_floats.c -- 一些浮点型修饰符的组合 */
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;    // const 变量

    printf("*%f*\n", RENT);         // 
    printf("*%e*\n", RENT);         // 
    printf("*%4.2f*\n", RENT);      // 
    printf("*%3.1f*\n", RENT);      // 
    printf("*%10.3f*\n", RENT);     // 
    printf("*%10.3Ef*\n", RENT);    // 
    printf("*%+4.2f*\n", RENT);     // 
    printf("*%010.2f*\n", RENT);    // 

    return 0;
}

/* Output:
*3852.990000*
*3.852990e+03*
*3852.99*
*3853.0*
*  3852.990*
* 3.853E+03f*
*+3852.99*
*0003852.99*
*/