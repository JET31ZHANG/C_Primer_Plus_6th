/* Exercise_Ch04_07.c --  */

/*

*/

/*

*/
#include <stdio.h>
#include <float.h>

int main(void)
{
    double result_1 = 1.0 / 3.0;
    float result_2 = 1.0 / 3.0;

    printf("double value: %.6f, %.12f, %.16f;\n", result_1, result_1, result_1);
    printf("float value: %.6f, %.12f, %.16f;\n", result_2, result_2, result_2);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}

/*
* Output:
double value: 0.333333, 0.333333333333, 0.3333333333333333;
float value: 0.333333, 0.333333343267, 0.3333333432674408;
FLT_DIG: 6
DBL_DIG: 15
*/
