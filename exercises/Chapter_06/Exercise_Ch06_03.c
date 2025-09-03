/* Exercise_Ch06_03.c --  */
// 使用嵌套循环，按下面的格式打印字母
/*
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

/*
*   分析：
*   1. 打印六行，外循环要循环6次
*   2. 内存循环变量要小于外循环变量，第 n 行打印 n 个字符
*   3. 字母倒序打印
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    char c;
    for (i = 0; i < 6; i++)                         // 外层循环控制行数，共 6 行
    {
        for (j = 0, c = 'F'; j <= i; j++, c--)      // 内层循环控制行内打印字符数， j <= i 表示第 n 行打印 n 个字符
            printf("%c", c);                        // char 类型 c 从'F'开始，每打印一个字符，更新 c--，实现字符的递减效果
        printf("\n");
    }
    return 0;
}