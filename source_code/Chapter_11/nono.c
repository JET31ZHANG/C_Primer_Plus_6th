/* Ch11_13_nono.c -- 千万不要模仿！ */
#include <stdio.h>

int main(void)
{
    char side_a[] = "Side A";
    char dont[] = { 'W', 'O', 'W', '!' };
    char side_b[] = "Side B";

    puts(dont);   /* dont is not a string */

    return 0;
}

/* Output:
WOW!烫烫烫烫烫烫烫烫烫烫烫烫烫烫Side B
*/