/* Ch07_08_paint.c -- 使用条件运算符 */
#include <stdio.h>

#pragma warning(disable:4996)

#define COVERAGE 350            // 每罐油漆可刷的面积（单位：平方英尺）

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while(scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}

/* Output:
Enter number of square feet to be painted:
26
You need 1 can of paint.
Enter next value (q to quit):
48
You need 1 can of paint.
Enter next value (q to quit):
1900
You need 6 cans of paint.
Enter next value (q to quit):
Q
*/