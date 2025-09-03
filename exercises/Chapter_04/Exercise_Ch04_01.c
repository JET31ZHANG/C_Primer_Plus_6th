/* Exercise_Ch04_01.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

int main(void)
{
    char fname[40];
    char lname[40];

    printf("Enter your first name: ");
    scanf("%s", fname, 40);
    printf("Enter your last name: ");
    scanf("%s", lname, 40);

    printf("%s, %s\n", lname, fname);

    return 0;
}

/*
* Output:
Enter your first name: angela
Enter your last name: sue
sue, angela
*/
