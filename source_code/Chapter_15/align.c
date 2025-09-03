/* Ch15_05_align.c -- 使用 _Alignof 和 _Alignas (C11) */
#include <stdio.h>

int main(void)
{
    double dx;
    char ca;
    char cx;
    double dz;
    char cb;
    char _Alignas(double) cz;

    printf("char alignment: %zd\n", _Alignof(char));
    printf("double aligment: %zd\n", _Alignof(double));
    printf("&dx: %p\n", &dx);
    printf("&ca: %p\n", &ca);
    printf("&cx: %p\n", &cx);
    printf("&dz: %p\n", &dz);
    printf("&cb: %p\n", &cb);
    printf("&cz: %p\n", &cz);

    return 0;
}

/* Output:
char alignment: 1
double aligment: 8
&dx: 00000068ddbff698
&ca: 00000068ddbff697
&cx: 00000068ddbff696
&dz: 00000068ddbff688
&cb: 00000068ddbff687
&cz: 00000068ddbff680
*/