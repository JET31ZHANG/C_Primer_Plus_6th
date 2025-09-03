/* Exercise_Ch04_08.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

#define Gallon 3.785
#define Mile 1.609

int main(void)
{
    float mile, gallon, miles_per_gallon, litres_per_hundred_kilometers;
    printf("Input travel distance in mile: ");
    scanf("%f", &mile);
    printf("Input the amount of gasoline in gallon:  ");
    scanf("%f", &gallon);
    miles_per_gallon = mile / gallon;   // 英里每加仑
    litres_per_hundred_kilometers = 100 * gallon * Gallon / (mile * Mile);  // 升每百千米
    printf("Fuel consumption: %.1f mile/gallon", miles_per_gallon);
    printf(" or %.1f L/100km\n", litres_per_hundred_kilometers);

    return 0;
}

/*
* Output:
Input travel distance in mile: 20
Input the amount of gasoline in gallon:  8
Fuel consumption: 2.5 mile/gallon or 94.1 L/100km
*/