/* Ch05_06_divide.c -- 演示除法 */

/* 整数除法和浮点数除法的区别 */

#include <stdio.h>

int main(void)
{
    printf("integer division: 5 / 4 is %d \n", 5 / 4);
    printf("integer division: 6 / 3 is %d \n", 6 / 3);
    printf("integer division: 7 / 4 is %d \n", 7 / 4);
    printf("floating division: 7. / 4. is %1.2f \n", 7. / 4.);
    // 混合类型：浮点值除以整型值。C 语言较其他语言比较宽松，但还是要注意避免使用混合类型。
    printf("mixed division:    7. / 4 is %1.2f \n", 7. / 4);    

    return 0;
}

/* Output:
integer division: 5 / 4 is 1 
integer division: 6 / 3 is 2 
integer division: 7 / 4 is 1
floating division: 7. / 4. is 1.75
mixed division:    7. / 4 is 1.75
*/