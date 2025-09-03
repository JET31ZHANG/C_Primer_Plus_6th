/* Ch11_04_arrchar.c -- 指针数组，字符串数组 */
#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };

    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
    {
        printf("\nsizeof mytalents: %zd", mytalents[i], yourtalents[i]);
    }
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));


    return 0;
}

/* Output:
Let's compare talents.
My Talents                           Your Talents

sizeof mytalents: 140694773214472
sizeof mytalents: 140694773214504
sizeof mytalents: 140694773214536
sizeof mytalents: 140694773214552
sizeof mytalents: 140694773214600
sizeof mytalents: 40, sizeof yourtalents: 200
*/