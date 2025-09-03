/* Ch10_06_bounds.c -- 数组下标越界 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2 * i + 1;

    for (i = -1; i < 7; i++)
        printf("%2d  %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);

    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]:  %p\n", &arr[4]);
    printf("address of value1:  %p\n", &value1);
    printf("address of value2:  %p\n", &value2);

    return 0;
}

/* Output:
value1 = 44, value2 = 88
-1  -1
 0  1
 1  3
 2  5
 3  7
 4  9
 5  -858993460
 6  -858993460
value1 = 44, value2 = 88
address of arr[-1]: 00000096560FF7A4
address of arr[4]:  00000096560FF7B8
address of value1:  00000096560FF784
address of value2:  00000096560FF7D4
*/