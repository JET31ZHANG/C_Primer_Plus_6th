/* Ch05_07_rules.c -- 优先级测试 */
#include <stdio.h>

int main(void)
{
    int top, score;

    /* 赋值运算符 = 的结合律是从右往左 */
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);

    return 0;
}

/* Output:
top = -23, score = -23
*/