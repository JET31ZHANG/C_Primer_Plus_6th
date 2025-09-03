/* Ch09_12_loccheck.c -- 查看变量被存储在何处 */
#include <stdio.h>

void mikado(int);           /* 函数原型 */

int main(void)
{
    int pooh = 2, bah = 1;  /* main() 的局部变量 */

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)        /* 定义函数 */
{
    int pooh = 10;          /* mikado() 的局部变量 */

    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
/* Output:
In main(), pooh = 2 and &pooh = 0000006D914FF5C4
In main(), bah = 1 and &bah = 0000006D914FF5E4
In mikado(), pooh = 10 and &pooh = 0000006D914FF4A4
In mikado(), bah = 2 and &bah = 0000006D914FF5A0
*/

