/* Ch09_02_lethead2.c */ 
// 在 Ch09_1_lethead1.c 输出的基础上，将文字居中
#include <stdio.h>
#include <string.h>         /* 为 strlen() 提供原型 */ 

#define NAME "GIGATHINK,  INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
    int spaces;
    /* 第一行 */ 
    show_n_char('*', WIDTH);                    /* 用符号常量作为参数 */
    /* 第二行 */
    putchar('\n');
    show_n_char(SPACE, 12);                     /* 用符号常量作为参数 */
    printf("%s\n", NAME);
    /* 第三行 */
    spaces = (WIDTH - strlen(ADDRESS)) / 2;     /* 计算跳过多少个空格 */
    show_n_char(SPACE, spaces);                 /* 用一个变量作为参数 */
    printf("%s\n", ADDRESS);
    /* 第四行 */
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    printf("%s\n", PLACE);                      /* 用一个表达式作为参数 */
    /* 第五行 */
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

/* show_n_char() 函数的定义 */
void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++)
    {
        putchar(ch);
    }
}

/* Output:
****************************************
            GIGATHINK,  INC.
           101 Megabuck Plaza
          Megapolis, CA 94904
****************************************
*/

