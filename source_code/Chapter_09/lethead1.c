/* Ch09_01_lethead1.c */
#include <stdio.h>

#define NAME "GIGATHINK,  INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

// 第一个 void ： 函数类型，void类型表明函数没有返回值
// 第二个 void ： 函数不带参数。对于不能识别 ANSI C 风格原型的编译器，可以这样表示 void starbar()
void starbar(void);             // 声明函数   

int main(void)
{
    starbar();                  // 使用函数
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();                  // 使用函数

    return 0;
}

void starbar(void)              // 定义函数
{
    int count;

    for (count = 1; count <= WIDTH; count++)
    {
        putchar('*');
    }
    putchar('\n');
}

/* Output:
****************************************
GIGATHINK,  INC.
101 Megabuck Plaza
Megapolis, CA 94904
****************************************
*/

