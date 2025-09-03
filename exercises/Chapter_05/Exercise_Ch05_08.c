/* Exercise_Ch05_08.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char * argv[])
{
    int operand_1, operand_2;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &operand_2);
    printf("Now enter the first operand: ");
    scanf("%d", &operand_1);

    while (operand_1 > 0)
    {
        printf("%d %% %d is %d\n", operand_1, operand_2, (operand_1 % operand_2));
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &operand_1);
    }
    printf("Done\n");

    return 0;
}

/*
* Output:
This program computes moduli.
Enter an integer to serve as the second operand: 5
Now enter the first operand: 8
8 % 5 is 3
Enter next number for first operand (<= 0 to quit): 1
1 % 5 is 1
Enter next number for first operand (<= 0 to quit): 12
12 % 5 is 2
Enter next number for first operand (<= 0 to quit): 0
Done
*/