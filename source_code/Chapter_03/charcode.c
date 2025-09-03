/* Ch03_05_charcode.c -- 显示字符串的代码编号 */
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);     /* 用户输入字符 */
    printf("The code for %c is %d\n", ch, ch);

    return 0;
}

/* Output 
Please enter a character.
C
The code for C is 67
*/