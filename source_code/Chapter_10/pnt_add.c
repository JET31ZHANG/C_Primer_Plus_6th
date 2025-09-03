/* Ch10_08_pnt_add.c -- 指针地址 */
#include <stdio.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short* pti;
    short index;
    double bills[SIZE];
    double* ptf;

    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);

    return 0;
}

/* Output:
                  short          double
pointers + 0: 000000BFFCEFF678 000000BFFCEFF6D8
pointers + 1: 000000BFFCEFF67A 000000BFFCEFF6E0
pointers + 2: 000000BFFCEFF67C 000000BFFCEFF6E8
pointers + 3: 000000BFFCEFF67E 000000BFFCEFF6F0
*/