/* Ch01_01_listing1.c : 此文件包含 "main" 函数。程序执行将在此处开始并结束。 */
#include <stdio.h>

int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf_s("%d", &dogs);
    printf("So you have %d dogs!\n", dogs);

    return 0;
}

/* Output 
How many dogs do you have?
5
So you have 5 dogs!
*/