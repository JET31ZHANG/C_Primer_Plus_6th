/* Ch03_01_platinum.c -- your weight in platinum */

/*  本程序最突出的特点是：交互性。
    计算机向用户询问信息，然后用户输入数字。
    交互使得程序更加灵活。
    示例程序可以使用任何合理的体重，就可以根据不同体重进行计算。
    scanf() 和 printf() 函数用于实现这种交互。

    scanf() 函数读取用户从键盘输入的数据，并把程序传递给程序。
    printf() 函数读取程序中的数据，并把数据显示在屏幕上。
*/

/*  14.5833 用于把英镑常衡盎司转换为金衡盎司
    欧美日常使用的度量衡单位是常衡盎司（avoirdupois ounce），
    而欧美黄金市场上使用的黄金交易计量单位是金衡盎司（troy ounce）。
    国际黄金市场上的报价，其单位“盎司”都指的是金衡盎司。

    常衡盎司属英制计量单位，做重量单位时也称为英两。
    相关换算参考如下：
    1 常衡盎司 = 28.3495231 克
    1 金衡盎司 = 31.1034768 克
    16 常衡盎司 = 1 磅。
    本程序的单位转换思路是：把磅换算成金衡盎司，
    即 28.3495231 / 31.1034768 * 16 = 14.5833。
*/

#include <stdio.h>

int main(void)
{
    /* 浮点型变量（float）可以存储带小数的数字 */
    float weight;   /* 你的体重                */
    float value;    /* 相等重量的白金价值       */

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /* 获取用户的输入                   */
    /*  scanf() 函数用于读取键盘的输入。
        %f 说明 scanf() 要读取用户从键盘输入的浮点数
        &weight 告知 scanf() 把输入的值赋给名为 weight 的变量
        scanf() 函数使用 & 符号表明：找到 weight 变量的地址。
    */
    scanf("%f", &weight);
    /* 假设白金的价格是每盎司￥1700      */
    /* 14.5833 用于把英镑常衡盎司转换为金衡盎司  */

    /* 提示 1：
        输入该程序时，可以把 1700.0 改成贵金属白金当前的市价，但是不要改动 14.5833，
        该数是 1 英镑的金衡盎司数（金衡盎司用于衡量贵金属，而英镑常衡盎司用于衡量人的体重）。
    */
    value = 1700.0 * weight * 14.5833;

    /* %.2f 中的 .2 用于控制输出的浮点数只显示小数点后面两位 */
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}

/* 提示 2：
    "enter your weight" 的意思是输入你的体重，然后按下 Enter 或 Return 键（不要输入体重后一直等着）。
    按下 Enter 键是告知计算机，你已完成输入数据。该程序需要你输入一个数字，而不是单词。
    如果输入字母而不是数字，会导致程序出问题。
*/

/* 提示 3：
    如果程序输入时打错，编译器会报告语法错误消息。
    即使输入正确，编译器也可能给出一些警告。如 “警告，从 double 类型转换成 float 类型可能会丢失数据”。

    错误消息表明：程序中有错，不能进行编译。
    警告消息表明：尽管编写的代码有效，但可能不是程序员想要的。警告并不终止编译。
*/

/* Output:
    Are you worth your weight in platinum?
    Let's check it out.
    Please enter your weight in pounds: 156
    Your weight in platinum is worth $3867491.25.
    You are easily worth that! If platinum prices drop,
    eat more to maintain your value.
*/