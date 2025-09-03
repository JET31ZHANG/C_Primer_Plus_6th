/* Exercise_Ch06_01.c --  */ 
// 创建一个包含26个元素的数组，并在其中存储 26 个小写字母，然后打印数组的所有内容
/*
    程序的主要功能：使用数组存储并显示 26 个小写字母。

    程序需要两个循环：1. 初始化并存储小写字母；2. 用来打印数组的元素

    数组存储的是小写字母，所以应定义元素数据类型为字符的数组，长度应当等于 26
*/
#include <stdio.h>

int main(void)
{
	int i;				// 数组的下标
    char alphabet[26];	
    char c = 'a';		// c 从字符 a 开始递增

	/* 获得 26 个字母 */
    for (i = 0; i < 26; i++, c++)
        alphabet[i] = c;
	/* for 循环的循环更新部分，更新了下标和字母表 */
    for (i = 0; i < 26; i++)
        printf("%c ", alphabet[i]);

    printf("\n");

    return 0;;
}

/* Output
a b c d e f g h i j k l m n o p q r s t u v w x y z
*/