/* Ch05_03_golf.c -- 高尔夫锦标赛记分卡 */

/* C 的基本赋值运算符 */

#include <stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    /* 
        其他语言都会回避改程序中的三重赋值，
        但 C 完全没问题。赋值的顺序是从右向左。
    */
    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}



/* Output:
                  cheeta   tarzan    jane
First round score   68       68       68
*/