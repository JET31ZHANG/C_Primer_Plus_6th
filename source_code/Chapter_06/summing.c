/* Ch06_01_summing.c -- 根据用户键入的整数求和 */
#include <stdio.h>

#pragma warning(disable:4996)
int main(void)

{
    long num;
    long sum = 0L;              /* 把 sum 初始化为 0 */
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit):");
    status = scanf("%ld", &num);

    while (status == 1)         /* == 的意思是 “等于” */
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}

/* Output:
Please enter an integer to be summed (q to quit):10
Please enter next integer (q to quit): 6
Please enter next integer (q to quit): 7
Please enter next integer (q to quit): 5
Please enter next integer (q to quit): q
Those integers sum to 28.
*/