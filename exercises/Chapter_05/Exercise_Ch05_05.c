/* Exercise_Ch05_05.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char * argv[])
{
    int count = 0; 
    int sum = 0;

    printf("Enter the number of days you work:");
    scanf("%d", &count);
    /* 读取用户输入的天数 */
    while (count > 0)
        sum = sum + count--;
    /* 通过递减运算，控制循环，计算工资总和 */
    printf("You earned $ %d total!\n", sum);
    printf("PROGRAM EXIT!\n");

    return 0;
}