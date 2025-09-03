/* Ch11_09_fgets3.c -- 使用 fgets() */
#include <stdio.h>

#define STLEN 10

int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
        {
            i++;
        }
        if (words[i] == '\n')
        {
            words[i] = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
        puts(words);
    }
    puts("done");

    return 0;
}

/* Output:
Enter strings (empty line to quit):
This
This
program seems
program s
unwilling to accept long lines.
unwilling
But it doesn't get stuck on long
But it do
lines either.
lines eit

done
*/