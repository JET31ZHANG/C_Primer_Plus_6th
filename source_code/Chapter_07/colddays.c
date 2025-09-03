/* Ch07_01_colddays.c -- 找出 0 度以下的天数占总天数的百分比 */
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperature.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while(scanf("%lf", &temperature) == 1)
    {
        all_days++;
        if(temperature < FREEZING)
        {
            cold_days++;
        }
    }
    if(all_days != 0)
    {
        printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0 * (float) cold_days / all_days);
    }
    if(all_days == 0)
    {
        printf("No data entered!\n");
    }

    return 0;
}

/* Output:
Enter the list of daily low temperature.
Use Celsius, and enter q to quit.
12 5 -2.5 0 6 8 -3 -10 5 10 q
10 days total: 0.0% were below freezing.
*/