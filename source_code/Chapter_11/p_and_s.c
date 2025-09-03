/* Ch11_05_p_and_s.c -- 指针和字符串 */

#include <stdio.h>

int main(void)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}

/* Output:
Don't be a fool!
mesg = Don't be a fool!; &mesg = 000000F66713FB68; value = 00007FF6EC1BACF0
copy = Don't be a fool!; &copy = 000000F66713FB88; value = 00007FF6EC1BACF0
*/