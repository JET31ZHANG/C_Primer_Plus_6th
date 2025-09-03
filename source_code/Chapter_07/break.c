/* Ch07_10_break.c -- 使用 break 退出循环 */
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while(scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if(scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}

/* Output:
Enter the length of the rectangle:
120
Length = 120.00:
Enter its width:
80
Width = 80.00:
Area = 9600.00:
Enter the length of the rectangle:
Q
Done.
*/