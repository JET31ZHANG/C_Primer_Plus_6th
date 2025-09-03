/* Ch16_17_qsorter.c -- 用 qsort() 排序一组数字 */
#include <stdio.h>
#include <stdlib.h>

#define NUM 40

void fillarray(double ar [], int n);
void showarray(const double ar [], int n);
int mycomp(const void * p1, const void * p2);

int main(void)
{
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double), mycomp);
    puts("\nSorted list:");
    showarray(vals, NUM);
    return 0;
}

void fillarray(double ar [], int n)
{
    for (int index = 0; index < n; index++)
        ar[index] = (double) rand() / ((double) rand() + 0.1);
}

void showarray(const double ar [], int n)
{
    int index;
    for (index = 0; index < n; index++)
    {
        printf("%9.4f", ar[index]);
        if (index % 6 == 5)
            putchar('\n');
    }
    if (index % 6 != 0)
        putchar('\n');
}

/* 按从小到大的顺序排序 */
int mycomp(const void * p1, const void * p2)
{
    /* 要使用指向 double 的指针来访问这两个值 */
    const double * a1 = (const double *) p1;
    const double * a2 = (const double *) p2;

    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else 
        return 1;
}

/* Output
Random list:
   0.0022   0.2390   1.2191   0.3910   1.1021   0.2027
   1.3835  20.2830   0.2508   0.8880   2.2179  25.4866
   0.0236   0.9308   0.9911   0.2507   1.2802   0.0939
   0.9760   1.7217   1.2054   1.0326   3.7892   1.9635
   4.1137   0.9241   0.9971   1.5582   0.8955  35.3798
   4.0579  12.0460   0.0096   1.0109   0.8506   1.1529
   2.3614   1.5876   0.4825   6.8749

Sorted list:
   0.0022   0.0096   0.0236   0.0939   0.2027   0.2390
   0.2507   0.2508   0.3910   0.4825   0.8506   0.8880
   0.8955   0.9241   0.9308   0.9760   0.9911   0.9971
   1.0109   1.0326   1.1021   1.1529   1.2054   1.2191
   1.2802   1.3835   1.5582   1.5876   1.7217   1.9635
   2.2179   2.3614   3.7892   4.0579   4.1137   6.8749
  12.0460  20.2830  25.4866  35.3798
*/