/* Ch02_02_fathm_ft.c -- 把2英寻转换成英尺 */
#include <stdio.h>

int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}

/* Output 
There are 12 feet in 2 fathoms!
Yes, I said 12 feet!
*/