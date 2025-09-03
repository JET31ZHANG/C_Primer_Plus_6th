/* Ch14_12_flexmemb.c -- 伸缩型数组成员 （C99 新增特性） */
#include <stdio.h>
#include <stdlib.h>

struct flex
{
    size_t count;
    double average;
    double scores [];       // 伸缩型数组成员
};

void showFlex(const struct flex * p);

int main(void)
{
    struct flex * pf1, *pf2;
    int n = 5;
    int i;
    int tot = 0;

    // 为结构和数组分配存储空间
    pf1 = malloc (sizeof(struct flex) + n * sizeof(double));

}

void showFlex(const struct flex * p)
{
    printf("Scores : ");
    for (int i = 0; i < p->count; i++)
        printf("%g ", p->scores[i]);
    printf("\nAverage: %g\n", p->average);
}

/* Output:

*/