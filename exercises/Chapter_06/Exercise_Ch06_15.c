/* Exercise_Ch06_15.c --  */
/*
    编写 1 个程序，读取 1 行输入，然后把输入的内容倒序打印出来。可以把输入存储在 char 类型的数组中，假设每行字符不超过 255 个。
    回忆一下，根据 %c 转换说明符， scanf() 函数一次只能从输入读取 1 个字符，而且在用户按下 Enter 键，scanf() 函数彩绘生成 1 个换行字符（\n）
*/

/*
    程序通过字符数组，存储用户输入的 1 行字符，并按照倒序打印，字符数组的长度是 255。
    程序关键在于读取用户输入的函数。
    在使用 %c 转换说明符时，如果 scanf() 遇到用户输入回车符，会自动生成换行符（\n），
    因此，可以使用换行符来判断用户输入完毕。
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[256];

    printf("Enter the char in a line: ");
    int i = 0;
    do {
        scanf("%c", &data[i]);
        /* 循环读取用户输入的字符，并保存在字符数组中，直到用户输入回车符 */
        /* 循环未检查输入字符的数量，特定情况下可能会产生溢出 */
    } while (data[i] != '\n' && ++i);

    printf("The reverse char of the data: ");
    for (i--; i >= 0; i--)
    {
        /* 原下标 i 为最后一个字符的下标，初始化时 i- 的目的是删除最后那个换行符 */
        printf("%c", data[i]);
    }
    printf("\nDone!\n");

    return 0;
}