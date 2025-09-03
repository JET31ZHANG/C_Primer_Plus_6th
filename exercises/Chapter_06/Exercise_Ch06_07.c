/* Exercise_Ch06_07.c --  */

/*
    编写一个程序，把一个单词读如一个字符数组中，然后倒序打印这个单词。
    提示：strlen() 函数可用于计算数组最后一个字符的下标。
*/

/*
    程序要求读取用户输入的单词，并存入字符数组中，因此可以不考虑空格、换行符等空白字符，直接使用 scanf() 函数读取字符。
    由于字符数组保存单词的特性，字符数组的最后一个元素存储 '\0'，因此需要判断最后一个有内容的数组元素的下标。
    题目提示使用 strlen() 函数来确定字符数组的有效长度，通过返回值来确定下标，注意循环的起始位置是 单词长度 - 1，
    循环的终止位置是 0。
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[30];
    printf("Please enter the words: ");
    scanf("%s", word);
    /*  */
    printf("The word you enter is : ");
    scanf("%d", strlen(word));
    for (int i = strlen(word) - 1; i >= 0; i--)
        printf("%c", word[i]);
    /* 逆序打印，下标志通过 strlen() 函数获得。 strlen() 返回的长度值
     * 不包含 '\0'，但是数组下标介于 0 ～ （数组长度 - 1） */
    printf('\n');

    return 0;
}