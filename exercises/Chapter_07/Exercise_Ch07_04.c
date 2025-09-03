/* Exercise_Ch07_04.c --  */

/*
    使用 if...else 语句编写一个程序，读取输入，读到#字符时停止。用感叹号替换句号，
    用两个感叹号替换原来的感叹号，最后报告替换了多少次。
*/

/*
    程序功能：进行输入字符的替换，使用 if...else 语句进行字符替换的条件判断，并计数。
*/

#include <stdio.h>

int main(void)
{
    int counter = 0;
    char ch;

    printf("Please input chars ( # for exit): ");
    while ((ch = getchar()) != '#')
    {
        if (ch == '!')
        {
            /* 替换感叹号，并计数 */
            printf("!!");
            counter++;
        }
        else if (ch == '.')
        {
            /* 替换句点，并计数 */
            printf("!");
            counter++;
        }
        else 
            /* 其他字符，直接输出 */
            printf("%c", ch);
    }
    printf("\nTotal replace %d times\n", counter);
    printf("Done\n");

    return 0;
}