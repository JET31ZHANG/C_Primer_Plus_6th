/* Ch16_12_predef.c -- 预定义宏和预定义标识符 */
#include <stdio.h>
void why_me();

int main()
{
    printf("The file is %s.\n", __FILE__);
    printf("The date is %s.\n", __DATE__);
    printf("The time is %s.\n", __TIME__);
    printf("The version is %ld.\n", __STDC_VERSION__);
    printf("This is line %d.\n", __LINE__);
    printf("This function is %s.\n", __func__);
    why_me();

    return 0;
}

void why_me()
{
    printf("This function is %s\n", __func__);
    printf("This is line %d.\n", __LINE__);
}

/* Output
The file is predef.c.
The date is Sep  2 2025.
The time is 16:41:44.
The version is 202311.
This is line 11.
This function is main.
This function is why_me
This is line 21.
*/