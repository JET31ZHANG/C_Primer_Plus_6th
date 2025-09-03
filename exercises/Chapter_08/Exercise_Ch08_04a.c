/* Exercise_Ch08_04.c --  */

/*
 *  编写一个程序，在遇到EOF之前，把输入作为字符流读取。
 *  该程序要报告平均每个单词的字母数。不要把空白统计为单词的字母。
 *  实际上，标点符号也不应该统计，但是现在暂时不用考虑这么多
 *  （如果你比较在意这点，考虑使用ctype.h系列中的ispunct()函数）。
*/

/*
    题目要求：统计输入流内的单词数量及总字符数量，并计算平均每个单词的字符数。
    其中输入字符流的总字符数量统计相对比较容易，单词数的统计需要在编程中转换一下思路。
    英语中的单词之间需要由标点符号和空格分隔，因此在程序中统计相应标点符号就可以间接得到单词数量。
    可以通过简单列举常用的标点符号（如，逗号、句号、感叹号等）进行统计。
    如果使用 ctype.h 库中的 isalpha() 函数判断是否是字母、使用 ispunct() 函数来判断是否标点符号，
    则代码会更加简洁高效。

    注意：ispunct() 函数无法判断是否是空格，因此需要特殊处理空格符号。
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int words = 0;  // 单词数量
    int letter = 0; // 字符数量

    while((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            letter++;
            /* 除可以利用字母在 ASCII 码表中连续的方法判断字母数量之外，还可以使用
             * isalpha() 函数进行判断，若 ch 是字母，返回非零值
             * if (isalpha(ch)) letter++;
             * */
        }
        if (ch == ' ' || ch == ',' || ch == '.' || ch == '\n')
        {
            words++;
            /* 可以利用标点符号进行判断，上面的判断不够完整，括号、问号、
             * 感叹号等未包括，也可以使用 ASCII 码中符号的连续区间进行判断。
             * 使用 ispunct() 函数更加简便。但是，该函数无法判断空格，因此需要取 “或”
             * if (ispunct(ch) != 0 || ch == ' ') words++;
             * */
        }
    }
    printf("There are %d words, and %d character, %.2f C/W!\n", 
        words, letter, 1.0 * letter / words);

    return 0;
}