/* Ch11_33_strcnvt.c --  */
//

#include <stdio.h>
#include <stdlib.h>

#define LIM 30

char *s_gets(char *st, int n);

int main(void)
{
    char number[LIM];
    char *end;
    long value;

    puts("Enter a number (empty line to quit):");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        value = strtol(number, &end, 16);
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n", value, end, *end);
        puts("Next number:");
    }
    puts("Bye!\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

/* Output:
    Enter a number (empty line to quit):
    10
    base 10 input, base 10 output: 10, stopped at  (0)
    base 16 input, base 10 output: 16, stopped at  (0)
    Next number:
    10atom
    base 10 input, base 10 output: 10, stopped at atom (97)
    base 16 input, base 10 output: 266, stopped at tom (116)
    Next number:

    Bye!
*/
