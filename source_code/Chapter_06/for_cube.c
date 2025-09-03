/* Ch06_12_for_cube.c -- 使用 for 循环创建一个立方表 */
#include <stdio.h>

int main(void)
{
    int num;

    printf("   n   n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num * num * num);

    return 0;
}

/* Output:
   n   n cubed
    1     1
    2     8
    3    27
    4    64
    5   125
    6   216
*/