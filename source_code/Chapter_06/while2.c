/* Ch06_04_while2.c -- 注意分号的位置 */ 
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n++ < 3);
        printf("n is %d\n", n);
    printf("That's all this program done.\n");

    return 0;
}

/* Output:
n is 4
That's all this program done.
*/