/* Ch07_09_skippart.c -- 使用 continue 跳过部分循环 */
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit): ");
    while(scanf("%f", &score) == 1)
    {
        if(score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value, Try again: ", score);
            continue;   // 跳转至 while 循环的测试条件
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        n++;
        printf("Enter next score (q to quit): ");
    }
    if(n > 0)
    {
        printf("Average of %d score is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else 
    {
        printf("No valid scores were entered.\n");
    }

    return 0;
}

/* Output:
Enter the first score (q to quit): 98
Accepting 98.0:
Enter next score (q to quit): 92
Accepting 92.0:
Enter next score (q to quit): Q
Average of 2 score is 0.0.
Low = 92.0, high = 98.0
*/