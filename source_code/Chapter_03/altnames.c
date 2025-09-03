/* Ch03_06_altnames.c -- 可移植整数类型名 */
#include <stdio.h>
#include <inttypes.h>   // 支持可移植类型

int main(void)
{
    int32_t me32;       

    me32 = 45933945;    // me32 是一个32位符号整型变量
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");

    //printf("me32 = %d\n", me32);
    // inttypes.h 头文件中定义了 PRId32 字符串宏，代表打印32位有符号值的合适转换说明
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}

/* Output
First, assume int32_t is int: me32 = 45933945
Next, let's not make any assumptions.
Instead, use a "macro" from inttypes.h: me32 = 45933945
*/