/* Ch07_05_divisors.c -- 使用嵌套 if 语句显示一个数的约数 */ 
#include <stdio.h>
#include <stdbool.h>

#pragma warning(disable:4996)

int main(void)
{
    unsigned long num;      // 待测试的数
    unsigned long div;      // 可能的约数
    bool isPrime;           // 素数标记

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while(scanf("%lu", &num) == 1)
    {
        for(div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if(num % div == 0)
            {
                if((div * div) != num)
                {
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                }
                else
                {
                    printf("%lu is divisible by %lu.\n", num, div);
                }
                isPrime = false;        // 该数不是素数
            }
        }
        if(isPrime)
        {
            printf("%lu is prime.\n", num);
        }
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}

/* Output:
Please enter an integer for analysis; Enter q to quit.
25
25 is divisible by 5.
Please enter another integer for analysis; Enter q to quit.
13
13 is prime.
Please enter another integer for analysis; Enter q to quit.
55
55 is divisible by 5 and 11.
Please enter another integer for analysis; Enter q to quit.
0
0 is prime.
Please enter another integer for analysis; Enter q to quit.
Q
Bye.
*/