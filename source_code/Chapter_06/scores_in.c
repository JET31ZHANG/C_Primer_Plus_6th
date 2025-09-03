/* Ch06_19_scores_in.c -- 使用循环处理数组 */
#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf_s("%d", &score[index]);               // 读取 10 个分数

    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++)
        printf("%5d", score[index]);                // 验证输入
    printf("\n");

    for (index = 0; index < SIZE; index++)
        sum += score[index];                        // 求总分数
    average = (float)sum / SIZE;                    // 求平均分
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);

    return 0;
}

/* Output:
Enter 10 golf scores:
99 95 109 105 100
96 98 93 99 97 98
The scores read in are as follows:
   99   95  109  105  100   96   98   93   99   97
Sum of scores = 991, average = 99.10
That's a handicap of 27.
*/