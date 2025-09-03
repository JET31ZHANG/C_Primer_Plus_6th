/* Exercise_Ch04_04.c --  */

/*

*/

/*

*/
#include <stdio.h>

int main(void)
{
    float height;
    char name[40];

    printf("Enter your height in centimeters: ");
    scanf_s("%f", &height);
    printf("Enter your name: ");
    scanf_s("%s", name, 40);
    printf("%s, you are %.3f meters tall.\n", name, height / 100.0);

    return 0;
}

/*
* Output:
Enter your height in centimeters: 182
Enter your name: james
james, you are 1.820 meters tall.
*/