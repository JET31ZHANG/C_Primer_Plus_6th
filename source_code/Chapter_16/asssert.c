/* Ch16_18_asssert.c -- 使用 assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void)
{
    double x, y, z;

    puts("Enter a pair of numbers (0 0 to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
    {
        z = x * x - y * y;      /* 应该用 + */
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of nubmers: ");
    }
    puts("Done");

    return 0;
}

/* Output
Enter a pair of numbers (0 0 to quit): 
4 3
answer is 2.645751
Next pair of nubmers:
5 3
answer is 4.000000
Next pair of nubmers:
3 5
Assertion failed: z >= 0, file asssert.c, line 14
*/