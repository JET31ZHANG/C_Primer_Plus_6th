/* Exercise_Ch04_05.c --  */

/*

*/

/*

*/

#include <stdio.h>

int main(void)
{
    float speed;
    float space;

    printf("Enter the download speed in Mb/s: ");
    scanf_s("%f", &speed);
    printf("Enter the space of file in MB: ");
    scanf_s("%f", &space);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, space);
    printf("downloads in %.2f seconds.\n", space * 8.0 / speed);

    return 0;
}

/*
* Output:
Enter the download speed in Mb/s: 78.2
Enter the space of file in MB: 5120
At 78.20 megabits per second, a file of 5120.00 megabytes
downloads in 523.79 seconds.
*/