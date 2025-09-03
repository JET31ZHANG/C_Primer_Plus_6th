/* Exercise_Ch02_01.c --  */

/*
    编写一个程序，调用一次 printf() 函数。把你的名和姓打印在一行。
    再调用一次 printf() 函数，把你的名和姓分别打印在两行。
    然后，再调用两次 printf() 函数，把你的名和姓打印在一行。输出应如下所示：

``````
Gustav Mahler
Gustav
Mahler
Gustav Mahler
*/

#include <stdio.h>

#define NAME "Gustav"
#define SURNAME "Mahler"

int main(void)
{
    printf("%s %s\n", NAME, SURNAME);
    printf("%s\n%s\n", NAME, SURNAME);
    printf("%s ", NAME);
    printf("%s\n", SURNAME);

    return 0;
}

/* Output:
Gustav Mahler
Gustav
Mahler
Gustav Mahler
*/