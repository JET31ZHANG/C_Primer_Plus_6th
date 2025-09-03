/* Ch07_06_chcount.c -- 使用逻辑与运算符 */
#include <stdio.h>

#define PERIOD '.'

int main(void)
{
    char ch;
    int charcount = 0;

    while((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\'');
        {
            charcount++;
        }
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}

/* Output:
A
S
A
15
.
There are 9 non-quote characters.
*/