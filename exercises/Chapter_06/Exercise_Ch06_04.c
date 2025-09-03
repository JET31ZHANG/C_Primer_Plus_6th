/* Exercise_Ch06_04.c --  */ 
// 使用嵌套循环，打印
/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/

/*
    程序使用嵌套循环，打印 6 行，每行内数据递增。

    与练习 3 的区别：内层循环中不初始化待打印字符， for (j = 0, c = 'F'; j < i; j++, c--)
    即删除 c = 'F' 的赋值使其持续递增。
*/
#include <stdio.h>

int main(void)
{
    int i, j;
    char c = 'A';
    for (i = 1; i <= 6; i++)            // 外循环控制行数，共 6 行
    {
        for (j = 0; j < i; j++, c++)    // 内循环控制每行的字数，即第 N 行有 N 个字符，使用 c++ 进行递增
            printf("%c", c);
        printf("\n");
    }

    return 0;
}
