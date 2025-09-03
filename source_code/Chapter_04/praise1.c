/* Ch04_02_praise1.c -- 使用不同类型的字符串 */
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    
    printf("What's your name?");
    /*
    *   scanf() 只会读取字符串中的一个单词，而不是一整句。
    *   fgets() 用于读取一般字符串
    */
    scanf_s("%s", name, 40);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}

/* Output
What's your name?Angela Plains
Hello, Angela. You are an extraordinary being.
*/