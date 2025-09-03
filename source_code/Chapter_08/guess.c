/* Ch08_04_guess.c -- 一个拖沓且错误的猜数字程序 */
#include <stdio.h>

int main(void)
{
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess "
            "it.\nRespond with a y if my guess is right and with"
            "\nan n if iti is wrong.\n"
            "Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')       // 
    {
        if (response == 'n')
        {
            printf("Well, then, is it %d?\n", ++guess);
        }
        else 
        {
            printf("Sorry, I understnad only y or n.\n");
        }
        while (getchar() != '\n')
        {
            continue;           // 
        }
    }
    printf("I kenw I could do it!\n");
    
    return 0;
}

/* Output:

*/


