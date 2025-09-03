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
#include <stdbool.h>

int main(void)
{
    char ch;
    int words = 0;  // 单词数量
    int letter = 0; // 字符数量
    bool in_word = false;   // 单词标志

    printf("Please enter chars (%c to quit):\n", EOF);

    // 遇到停止词时，结束输入
    while((ch = getchar()) != EOF)
    {
        // 判断是否为字母
        if (isalpha(ch))
            letter++;
        
        /* 
         * 当前字符不是空白或标点符号，则表明是单词的字母，
         * 标记单词标识为true，单词数加1
         * */
        if (!(isspace(ch) || ispunct(ch)) && !in_word)
        {
            in_word = true;
            letter++;
        }

        /* 
         * 遇到空白或标点符号，单词结束，标记单词标识为false
         * */
        if ((isspace(ch) || ispunct(ch)) && in_word)
        {
            in_word = false;
        }
    }
    printf("There are %d words, and %d character, %.2f C/W!\n", 
        words, letter, 1.0 * letter / words);

    return 0;
}