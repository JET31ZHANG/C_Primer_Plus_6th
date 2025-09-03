/* Ch09_06_recur.c -- 递归演示 */ 
#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);     // 1
    if (n < 4)
    {
        up_and_down(n + 1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);     // 2
}

/* Output:
Level 1: n location 000000CB39CFF550
Level 2: n location 000000CB39CFF450
Level 3: n location 000000CB39CFF350
Level 4: n location 000000CB39CFF250
LEVEL 4: n location 000000CB39CFF250
LEVEL 3: n location 000000CB39CFF350
LEVEL 2: n location 000000CB39CFF450
LEVEL 1: n location 000000CB39CFF550
*/
