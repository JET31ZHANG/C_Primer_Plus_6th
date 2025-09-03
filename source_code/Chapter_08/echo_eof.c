/* Ch08_02_echo_eof.c -- 重复输入，直到文件末尾 */
#include <stdio.h>

int main(void)
{
    int ch;

    while((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}

/* Output:

*/
