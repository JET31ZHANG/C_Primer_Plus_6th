/* Ch06_02_when.c -- 何时退出循环 */ 
#include <stdio.h>

int main(void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}

/* Output:
n = 5
Now n = 6
n = 6
Now n = 7
The loop has finished.
*/