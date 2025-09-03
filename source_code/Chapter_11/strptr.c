/* Ch11_02_strptr.c -- 把字符串看作指针 */
#include <stdio.h>

int main(void)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    return 0;
}

/* Output:
We, 00007FF69BE2AC38, s
*/