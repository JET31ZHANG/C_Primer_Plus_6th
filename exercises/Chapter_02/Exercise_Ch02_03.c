/* Exercise_Ch02_03.c --  */

/* 编写一个程序，把你的年龄转换成天数，并显示年龄和天数。这里不用考虑闰年的问题。 */
#include <stdio.h>

int main(void)
{
    int age_years;              /* age in years */
    int age_days;               /* age in days */
                                /* large ages may require the long type */
    age_years = 36;
    age_days = age_years * 365;

    printf("Your age is %d, and it is %d days.\n", age_years, age_days);

    return 0;
}

/* Output
Your age is 36, and it is 13140 days.
*/