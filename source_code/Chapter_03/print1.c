/* Ch03_02_print1.c -- 演示 printf() 的一些特性 */
#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten - two);

    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);     // 遗漏2个参数

    return 0;
}