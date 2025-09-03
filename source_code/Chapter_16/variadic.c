/* Ch16_05_variadic.c -- 变参宏 */
#include <stdio.h>
#include <math.h>

#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

int main(void)
{
    double x = 48;
    double y;

    y = sqrt(x);
    PR(1, "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y);

    return 0;
}

/* Output
Message 1: x = 48
Message 2: x = 48.00, y = 6.9282
*/