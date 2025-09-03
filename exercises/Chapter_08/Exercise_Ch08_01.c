/* Exercise_Ch08_01.c --  */

/*
 * 设计一个程序，统计在读到文件结尾之前读取的字符数。
 */

/*
    程序功能：实现文件字符统计。需要使用单字符 I/O 函数 getchar()。
    
*/

#include <stdio.h>

int main(void)
{
    int counter = 0;    // 字符数
    char ch;

    // 读取文件输入流
    while ((ch = getchar()) != EOF)
    {
        counter++;
        /*
            如果程序需要分别统计不同类型的字符，可以在本处
            使用分支判断语句分类别统计
            此外，本处 counter++ 的计数语句也可以使用如下语句：
            if (ch > '\040') counter++;
            其含义是 ASCII 码表内大于空格符（'\040'）的字符均是文本中使用的字符，由于
            本题并未对待统计的具体字符类型做出规定，因此可以直接使用 counter++ 计数
        */
    }
    printf("The file has %d characters.\n", counter);

    return 0;
}