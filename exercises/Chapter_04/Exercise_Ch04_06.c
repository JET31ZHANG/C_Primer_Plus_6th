/* Exercise_Ch04_06.c --  */

/*

*/

/*

*/
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main(void)
{
    char fname[40];
    char lname[40];
    int len_fname;
    int len_lname;

    printf("Enter your first name: ");
    scanf("%s", fname, 40);
    printf("Enter your last name: ");
    scanf("%s", lname, 40);
    
    len_fname = strlen(fname);
    len_lname = strlen(lname);

    printf("%s %s\n", fname, lname);
    printf("%*d %*d\n", len_fname, len_fname, len_lname, len_lname);
    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", len_fname, len_fname, len_lname, len_lname);

    return 0;
}

/*
* Output:
Enter your first name: lester
Enter your last name: zhang
lester zhang
     6     5
lester zhang
6      5
*/
