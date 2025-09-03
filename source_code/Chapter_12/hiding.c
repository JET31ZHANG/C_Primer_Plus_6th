/* Ch12_1_hiding.c -- 块中的变量 */ 
#include <stdio.h>

int main(void)
{
    int x = 30;     // 初始 x

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;  // new x, hides first x
        printf("x in inner block: %d at %p\n", x, &x);
    }

    printf("x in outer block: %d at %p\n", x, &x);
    while (x++ < 33) // original x
    {
        int x = 100; // new x, hides first x 
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }

    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}

/* Output:
    x in outer block: 30 at 000000A49CDAFAE4
    x in inner block: 77 at 000000A49CDAFB04
    x in outer block: 30 at 000000A49CDAFAE4
    x in while loop: 101 at 000000A49CDAFB24
    x in while loop: 101 at 000000A49CDAFB24
    x in while loop: 101 at 000000A49CDAFB24
    x in outer block: 34 at 000000A49CDAFAE4
*/

