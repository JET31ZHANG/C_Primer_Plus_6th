/* Ch04_01_talkback.c -- 演示与用户交互 */
#include <stdio.h>
#include <string.h>     // 提供 strlen() 函数的原型

#pragma warning(disable:4996)

#define DENSITY 62.4    // 人体密度（单位：磅/立方英尺）

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];      // name 是一个可容纳 40 个字符的数组

    printf("Hi! What's your first name?\n");
    /*
    *   调用scanf_s()函数时，如果必须提供一个数字以表明最多读取多少位字符
    *   比如：char d[20]；写成scanf_s("%s",d,20)；才是正确的，有这个参数20使准确性、安全性提高。
    *   当函数 scanf_s() 要求传入的类型是%s(字符串)时，才要需要传入字符串长度的参数
    */
    scanf("%s", name, 40);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);     // strlen() 函数的使用
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}

/* Output
Hi! What's your first name?
Christine
Christine, what's your weight in pounds?
154
Well, Christine, your volume is 2.47 cubic feet.
Also, your first name has 9 letters,
and we have 40 bytes to store it.
*/