/* Ch12_10_r_drive1.c -- 测试 rand1() 和 srand1() */
// 与 s_and_r.c 一起编译
#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main()
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while (scanf_s("%u", &seed) == 1)
    {
        srand1(seed);       // 重置种子
        for (count = 0; count < 5; count++)
        {
            printf("%d\n", rand1());
        }
        printf("Please enter next seed (q to quit):\n");
    }
    printf("Done\n");

    return 0;
}


/* Output
Please enter your choice for seed.
1
16838
5758
10113
17515
31051
Please enter next seed (q to quit):
513
20067
23475
8955
20841
15324
Please enter next seed (q to quit):
q
Done
*/