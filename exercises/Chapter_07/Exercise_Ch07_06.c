/* Exercise_Ch07_06.c --  */

/*
    编写一个程序，读取输入，读到 # 字符时停止，报告 ei 出现的次数
    该程序要记录一个字符和当前字符。
    用 "Receive your eieio award" 这样的输入来测试。
*/

/*
    程序要求：统计 ei 出现的次数。
    和处理单个字符的方式不同，题目要求匹配两个字符。基本的算法可以逐个匹配。
    即首先判断字符是否是 e，如果是，则做部分匹配的标记，并判断下一个字符是否是 i。
    如果第 2 个字符也能够匹配，则计数；
    否则，清除部分匹配标记。按照该匹配算法循环统计数据，能够比较简单处理这种匹配要求。
*/

#include <stdio.h>

int main(void)
{
    int counter = 0;
    int halfpair = 0;
    char ch;

    printf("Please input chars ( # for exit):");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case 'e':
                halfpair = 1;
                break;
            case 'i':
                if (halfpair == 1)
                {
                    counter++;
                    halfpair = 0;
                }
                break;
            default:
                halfpair = 0;
        }
    }
    printf("\nTotally exist %d \'ei\' in all char!\n", counter);
    printf("Done!\n");

    return 0;
}