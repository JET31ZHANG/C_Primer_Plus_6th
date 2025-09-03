/* Ch10_04_day_mon2.c -- 让编译器计算元素个数 */
#include <stdio.h>

int main(void)
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
    {
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    }

    return 0;
}

/* Output:
Month  1 has 31 days.
Month  2 has 28 days.
Month  3 has 31 days.
Month  4 has 30 days.
Month  5 has 31 days.
Month  6 has 30 days.
Month  7 has 31 days.
Month  8 has 31 days.
Month  9 has 30 days.
Month 10 has 31 days.
*/