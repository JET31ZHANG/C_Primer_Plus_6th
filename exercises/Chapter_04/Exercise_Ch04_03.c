/* Exercise_Ch04_03.c --  */

/*

*/

/*

*/
#include <stdio.h>

int main(void)
{
    float num;

    printf("Enter a float number: ");
    scanf_s("%f", &num);

    printf("The input is %.1f or %.1e.\n", num, num);
    printf("The input is %+.3f or %.3E.\n", num, num);

    return 0;
}

/*
* Output:
Enter a float number: 3.16
The input is 3.2 or 3.2e+00.
The input is +3.160 or 3.160E+00.
*/