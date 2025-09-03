/* Ch12_2_forc99.c -- 新的 C99 块规则 */
#include <stdio.h>

int main(void)
{
    int n = 8;

    printf("   Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
        printf("      loop 1: n = %d at %p\n", n, &n);

    printf("After loop 1, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
    {
        printf(" loop 2 index n = %d at %p\n", n, &n);
        int n = 6;
        printf("      loop 2: n = %d at %p\n", n, &n);
        n++;
    }

    printf("After loop 2, n = %d at %p\n", n, &n);

    return 0;
}


/* Output
   Initially, n = 8 at 000000F49093F8A4
      loop 1: n = 1 at 000000F49093F8C4
      loop 1: n = 2 at 000000F49093F8C4
After loop 1, n = 8 at 000000F49093F8A4
 loop 2 index n = 1 at 000000F49093F8E4
      loop 2: n = 6 at 000000F49093F904
 loop 2 index n = 2 at 000000F49093F8E4
      loop 2: n = 6 at 000000F49093F904
After loop 2, n = 8 at 000000F49093F8A4
*/