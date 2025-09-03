/* Exercise_Ch08_03.c --  */

/*
 *  编写一个程序，在遇到EOF之前，把输入作为字符流读取、
 *  该程序要报告输入中的大写字母和小写字母的个数。
 *   假设大小写字母数值是连续的。或者使用ctype.h库中适合的分类函数更方便。
*/

/*
    程序读取字符输入，并统计大小写字符数量。ASCII 码表中大小写字母连续，
    因此可以使用字符的区间范围进行统计。
    也可以使用 ctype.h 库中的分类函数 isupper() 与 islower() 进行字符的大小写判断。
*/

#include <stdio.h>
#include <ctype.h>  /* islower() 和 isupper() 函数的头文件 */

int main(void)
{
    char ch;
    int upper_count = 0;
    int lower_count = 0;
    int other_count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch >= 'A' && ch <= 'Z')
            // 计算大写字母个数
            upper_count++;
        else if (ch >= 'a' && ch <= 'z')
            // 计算小写字母个数
            lower_count++;
        else 
            other_count++;
        /* 使用 ASCII 码表中连续字符的特性进行判断 */
        /* 
         * if (isupper(ch)) upper_count++;
         * if (islower(ch)) lower_count++;
         * 也可以使用 ctype.h 库中的字符判断函数进行判断。
         * 需要添加头文件
        */
    }
    printf("There are %d uppercase, %d lowercase and %d othercase in that file!\n", 
            upper_count, lower_count, other_count);

    return 0;
}