/* Exercise_Ch07_10.c --  */

/*
    1988年的美国联邦税收计划是近代最简单的税收方案。
    它分为 4 个类别，每个类别有两个等级。
    下面是该税收计划的摘要（美元数为应征税的收入）：

    |   类别        |               税金                      |
    | ------------ |  -------------------------------------  |
    |   单身        |  17850 美元按 15% 计，超出部分按 28% 计  |
    |   户主        |  23900 美元按 15% 计，超出部分按 28% 计  |
    |   已婚，共有   |  29750 美元按 15% 计，超出部分按 28% 计  |
    |   已婚，离异   |  14875 美元按 15% 计，超出部分按 28% 计  |

    例如，一位工资为 20000 美元的单身纳税人，应缴纳税费
    0.15 * 17850 + 0.28 * （20000 - 17850）美元。
    编写一个程序，让用户指定缴纳税金的种类和应纳税收入，
    然后计算税金。程序应通过循环让用户可以多次输入。
*/

/*
    程序的功能是：读取用户输入，并按照指定公式计算税金。
    用户首先应当选择品类，随后输入应纳税收入。
    程序使用 switch 语句可以更加清晰地表示多个类别的判断条件。
*/

#include <stdio.h>

/* 定义相关的常量数据 */
// 单身的税金
#define SINGLE      17850
// 户主的税金
#define HOLDER      23900
// 已婚共有的税金
#define MARRY       29750
// 已婚离异的税金
#define DIVORCE     14875

#define BASE_TAX    0.15
#define EXTRA_TAX   0.28

void print_menu(void);

void calc(double salary, double level);

int main(void)
{

    int type;           // 税金等级
    double salary;      // 应纳税收入
    double pay;         // 税金标准
    print_menu();
    while((scanf("%d", &type)) == 1 && type != 5)
    {
        if (type == '\n')
            continue;
        
        /* 选择纳税类型， switch() 语句对不同类型分别计算 */
        switch(type) {
            case 1:
                pay = SINGLE;
                break;
            case 2:
                pay = HOLDER;           
                break;
            case 3:
                pay = MARRY;    
                break;
            case 4:
                pay = DIVORCE;
                break;
            default: 
                printf("Wrong type. Please retry.\n");
                print_menu();
                continue;
        }
        printf("Enter your salary:");
        scanf("%lf", &salary);
        calc(salary, pay);
        print_menu();
    } 
    printf("Done.\n");

    return 0;
}

void print_menu(void)
{
    printf("****************************************************\n");
    printf("Please select tax type. There are for type:\n");
    printf("1) Single       2) House holder\n");
    printf("3) Married      4) Divorced\n");
    printf("5) Quit\n");
    printf("****************************************************\n");
}

void calc(double salary, double level)
{
    double taxes;

    if (salary <= level)
        // 收入在税基内
        taxes = salary * BASE_TAX;
    else 
        // 收入超过税基
        taxes = level * BASE_TAX + (salary - level) * EXTRA_TAX;

    printf("Your tax is $%.2f.\n", taxes);
}
