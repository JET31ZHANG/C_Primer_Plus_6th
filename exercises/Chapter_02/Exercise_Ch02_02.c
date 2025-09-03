/* Exercise_Ch02_02.c --  */

/* 编写一个程序，打印你的姓名和地址。 */
#include <stdio.h>

#define NAME "Mark Rowswell"
#define ADDRESS "2752 ST. JOHN'S SIDEROAD; NEWMARKET ONTARIO; L3Y 4W1; CANADA"

int main(void)
{
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);

    return 0;
}

/* Output
    Mark Rowswell
    2752 ST. JOHN'S SIDEROAD; NEWMARKET ONTARIO; L3Y 4W1; CANADA
*/