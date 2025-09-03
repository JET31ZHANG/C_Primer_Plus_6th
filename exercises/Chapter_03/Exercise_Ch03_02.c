/* Ch03_Exercises_02.c --  */

/* 
    编写一个程序，要求提示输入一个ASCII码值（如 66）然后打印输入的字符。
*/

#include <stdio.h>

int main(void)
{
    int input;

    printf("Please Enter an ASCII code: ");
    scanf_s("%d", &input);
    printf("Your input value is %d, and char is %c.\n", input, input);

    return 0;
}

/* Output
Please Enter an ASCII code: 66
Your input value is 66, and char is B.
*/