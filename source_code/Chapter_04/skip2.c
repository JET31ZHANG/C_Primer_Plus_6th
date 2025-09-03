/* Ch04_17_skip2.c -- 跳过输入的前两个整数 */
// scanf() 指示：跳过两个整数，把第3个整数拷贝给n

#include <stdio.h>

int main(void)
{
    int n;

    printf("Please eneter three integers:\n");
    scanf_s("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}

/* Output:
Please eneter three integers:
12 23 35
The last integer was 35
*/
