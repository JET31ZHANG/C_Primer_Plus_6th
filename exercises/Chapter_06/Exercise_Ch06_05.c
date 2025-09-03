/* Exercise_Ch06_05.c --  */

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

/*
    程序首先读取用户输入的大写字母，并通过嵌套循环打印金字塔类型的字母表；

    其中每行的字母都需要正序和逆序显示，每行的最大字符（中间字符）与行数有关，
    第 1 行的最大字符为 'A'，第 2 行的最大字符为 'B'，第 3 行的最大字符表为 'C'。
    ...... 第 5 行的最大字符为用户输入的 'E'

    为了保证每行字符剧中，若字符数量不足，需通过空格填充，使其成为正三角形结构

    为了保证行内的打印效果，在内层循环中应当判断每行打印的空格数

    最简单的算法：空格数、正序字符数、逆序字符数分开打印

    例如：用户输入 E，则需要打印 5 行，每行中间字符为 A~E,
    第一行需要补 4 个空格，最后一行不需要补空格。
    先打印从 A 到中间字符（中间字符 = 'A' + ‘行号’ - 1），
    打印逆序字母后不需要打印空格。
*/

#include <stdio.h>

#pragma warning(disable : 4996)

int main(void)
{
    int i, j;
    char c;
    printf("Enter the char you want to print(A...Z):");
    scanf("%c", &c);

    char ch = 'A';
    int num = c - 'A' + 1;

    for (i = 1; i <= num; i++)
    {
        // 打印每行字符左边的空格
        for (j = 0; j < num - i; j++)
            printf(" ");
        //
        for (ch = 'A'; j < num; j++)
            printf("%c", ch++);
        // ch -= 2
        for (j = 1, ch -= 2; j < i; j++)
            printf("%c", ch--);
        printf("\n");
    }

    return 0;
}