/* Ch11_11_scan_str.c -- 使用 scanf_s() */
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n",
        count, name1, name2);

    return 0;
}


/* Output:
Please enter 2 names.
Jack James
I read the 2 names Jack and James.
*/