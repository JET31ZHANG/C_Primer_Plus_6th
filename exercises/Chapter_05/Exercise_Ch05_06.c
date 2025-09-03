/* Exercise_Ch05_06.c --  */

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
    int n;

    printf("Enter the number of days you work:");
    scanf("%d", &count);
    /* 读取用户输入的天数数据 */
    while (count > 0)
    {
        sum = sum + count * count;
        count--;
    }
    /* 通过天数递减控制循环，工资使用 count * count 转换成平方 */
    printf("You earned $ %d total!\n", sum);
    printf("PROGRAM EXIT!\n");

    return 0;
}

/*
* Output:
Enter the number of days you work:20
You earned $ 2870 total!
PROGRAM EXIT!
*/