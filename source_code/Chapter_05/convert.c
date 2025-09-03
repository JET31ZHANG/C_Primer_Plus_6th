/* Ch05_14_convert.c -- 自动类型转换 */
#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float f1;

    f1 = i = ch = 'C';                                      /* line 9 */                               
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);     /* line 10 */  
    ch = ch + 1;                                            /* line 11 */  
    i = f1 + 2 * ch;                                        /* line 12 */  
    f1 = 2.0 * ch + i;                                      /* line 13 */  
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);     /* line 14 */  
    ch = 1107;                                              /* line 15 */  
    printf("Now ch = %c\n", ch);                            /* line 16 */  
    ch = 80.89;                                             /* line 17 */  
    printf("Now ch = %c\n", ch);                            /* line 18 */  

    return 0;
}

/* Output:
ch = C, i = 67, f1 = 67.00
ch = D, i = 203, f1 = 339.00
Now ch = S
Now ch = P
*/

/* 
    在我们的系统中，char 是8位，int 是32位。

    line 9 & line 10:
    字符 'C' 被作为 1 字节的 ASCII 值存储在 ch 中。
    整数变量 i 接受由 'C' 转换的整数，即按4字节存储67。
    f1 接受由 67 转换的浮点数 67.00。

    line 11 & line 14:
    字符变量 'C' 被转换成整数 67，然后加 1。        
    计算结果是 4 字节整数 68，被截断成 1字节存储在 ch 中。
    根据 %c 转换说明打印时，68 被解释为'D'的 ASCII 码。

    line 12 & line 14:
    ch 的值被转换成 4 字节的整数（68），然后 2 乘以 ch。
    为了和 f1 相加，乘积整数（136）被转换成浮点数。
    计算结果（203.00f）被转换成 int 类型，并存储在 i 中。

    line 13 & line 14：
    ch 的值（'D' 或 68）被转换成浮点数，然后 2 乘以 ch。
    为了做加法，i的值（203）被转换为浮点类型。计算结果
    （339.00）被存储在 f1 中。

    line 15 & line 16：
    演示了类型降级的示例。把 ch 设置为一个超出其类型范围的值。
    忽略额外的位后，最终 ch 的值是字符 S 的 ASCII 码。
    ch 的值是 1107 % 256，即 83。

    line 17 & line 18：
    演示了另一个类型降级的示例。把 ch 设置为一个浮点数，发生截断后，
    ch 的值是字符 P 的 ASCII 码。
*/