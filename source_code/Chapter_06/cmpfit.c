/* Ch06_05_cmpfit.c -- 浮点数比较 */
#include <stdio.h>
#include <math.h>

#pragma warning(disable:4996)

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}

/* Output:
What is the value of pi?
3.14
Try again!
3.14159
Close enough!
*/