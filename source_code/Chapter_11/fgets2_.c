/* Ch11_08_fgets2_.c -- 使用 fgets() 和 fputs() */
#include <stdio.h>

#define STLEN 10

int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        fputs(words, stdout);
    }
    puts("Done.");

    return 0;
}

/* Output:
Enter strings (empty line to quit):
By the way, the gets() function
By the way, the gets() function
also returns a null pointer if it
also returns a null pointer if it
encounters end-of-life.
encounters end-of-life.

Done.
*/