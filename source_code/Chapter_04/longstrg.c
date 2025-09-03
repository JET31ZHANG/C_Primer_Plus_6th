/* Ch04_14_longstrg.c : 此文件包含 "main" 函数。程序执行将在此处开始并结束。 */
#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");

    printf("Here's another way to print a \
long string\n");
    printf("Here's the newest way to print a "
        "long string.\n");              /* ANSI C */

    return 0;
}

/* Output:
Here's one way to print a long string.
Here's another way to print a long string
Here's the newest way to print a long string.
*/