/* Ch03_Exercises_03.c --  */

/*
    编写一个程序，发出一声警报，然后打印下列文本。
*/

#include <stdio.h>

int main(void)
{
    char c = '\a';
    printf("%c", c);

    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n\a");

    return 0;
}

/* Output 
Startled by the sudden sound, Sally shouted,
"By the Great Pumpkin, what was that!"
*/