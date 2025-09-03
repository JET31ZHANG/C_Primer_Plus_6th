/* Exercise_Ch04_02.c --  */

/*

*/

/*

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];

    printf("Please enter your name: ");
    scanf_s("%s", name, 20);

    printf("\"%s\"\n", name);       // 打印名字，包括双引号
    printf("\"%20s\"\n", name);     // 在宽度为20的字段右端打印名字，包括双引号
    printf("\"%-20s\"\n", name);    // 在宽度为20的字段左端打印名字，包括双引号
    printf("  %s \n", name);       // 在比姓名宽度宽3的字段中打印名字

    return 0;
}

/*
* Output:Please enter your name: jack
"jack"
"                jack"
"jack                "
  jack
*/
