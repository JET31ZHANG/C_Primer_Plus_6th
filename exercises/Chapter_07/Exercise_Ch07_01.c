/* Exercise_Ch07_01.c --  */

/*
    编写一个程序，读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
*/

/*
    程序要求统计输入的字符数量，因此应当使用 getchar() 依次读取所有字符并分类，再进行计数。
    当读到第一个'#'字符时，程序停止字符统计，并汇报统计结果。
*/

#include <stdio.h>

int main(void)
{
    char ch;
    int blank = 0;
    int endline = 0;
    int others = 0;

    printf("Please input chars( # for exit):");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            blank++;        // 统计空格数
        else if (ch == '\n')
            endline++;      // 统计换行数
        else 
            others++;       // 统计其他字符数
    }
    printf("%d blank, %d endline, %d others.\n", blank, endline, others);

    return 0;
}