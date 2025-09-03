/* Ch04_03_praise2.c */
// 如果编译器不识别 %zd，尝试换成 %u 或 %lu
#include <stdio.h>
#include <string.h>     /* 提供 strlen() 函数的原型 */

#pragma warning(disable:4996)

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name, 40);
    printf("Hello, %s. %s\n", name, PRAISE);

    printf("Your name or %zd letters occupies %zd memory cells.\n", 
        strlen(name), sizeof(name));

    printf("The phrase of praise has %zd letters ", 
        strlen(PRAISE));

    printf("and occupies %zd memory cells.\n", 
        sizeof PRAISE);

    return 0;
}

/* Output
What's your name? Serendipity Chance
Hello, Serendipity. You are an extraordinary being.
Your name or 11 letters occupies 40 memory cells.
The phrase of praise has 31 letters and occupies 32 memory cells.
*/