/* Exercise_Ch05_09.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

int Temperatures(double fahrenheit);

int main(int argc, char * argv[])
{
    double input;
    printf("This program convert fahrenheit to celsius and kelvin.\n");
    printf("Enter a fahrenheit to start : ");

    while ((scanf("%lf", &input)) == 1)        // 
    {
        Temperatures(input);
        printf("Enter next fahrenheit! ( q to quit ): ");
    }
    printf("Done!\n");

    return 0;
}

int Temperatures(double fahrenheit)
{
    const double F_TO_C = 32.0;
    const double C_TO_R = 273.16;
    double celsius, kelvin;
    celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
    kelvin = celsius + C_TO_R;
    printf("%.2f. fahrenheit, equal %.2f celsius, and %.2f kelvin\n", 
        fahrenheit, celsius, kelvin);

    return 0;
}

/*
* Output:
This program convert fahrenheit to celsius and kelvin.
Enter a fahrenheit to start : 192
192.00. fahrenheit, equal 88.89 celsius, and 362.05 kelvin
Enter next fahrenheit! ( q to quit ): 0
0.00. fahrenheit, equal -17.78 celsius, and 255.38 kelvin
Enter next fahrenheit! ( q to quit ): q
Done!
*/