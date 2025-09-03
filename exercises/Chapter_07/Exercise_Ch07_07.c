/* Exercise_Ch07_07.c --  */

/*
    编写一个程序，提示用户输入 1 周工作的小时数，然后打印工资总额、税金和净收入。
    a. 基本工资 = 10.00 美元 / 小时
    b. 加班（工作时间超过 40 小时）= 按 1.5 倍的时间计算
    c. 税率：前 300 美元为 15%
             接下来的 150 美元为 20%
             余下的为 25%
    用 #define 定义符号常量，不用在意是否符合当前税法
*/

/*
    程序的主要功能：计算指定工作时间的工资总额和税金。
    使用 if 语句判断每周工作时间，不同的条件下对应不同的计算公式。
    依据题目给定的工作时间，节点主要是30小时和40小时这两个，
    且这两个节点形成了3个区间。大于 40 小时工作时长后，还要判断其税率是否达到25%标准，
    需要使用嵌套的 if 语句。
*/

#include <stdio.h>

/* 常量的定义 */
#define BASE_SALARY 10.00
#define EXTRA_HOUR  1.5
#define BASE_TAX    0.15
#define EXTRA_TAX   0.2
#define EXCEED_TAX  0.25

int main(void)
{
    float hours= 0;
    float salary;           // 工资
    float tax;              // 税金
    float taxed_salary;     // 净收入

    printf("Enter the working hours a week: ");
    scanf("%f", &hours);

    /* 30 小时以内，无加班，标准基础税率 */
    if (hours <= 30)
    {
        salary = hours * BASE_SALARY;
        tax = salary * BASE_TAX;
        taxed_salary = salary - tax;
    }
    /* 30 ~ 40 小时，无加班，额外税率 */
    else if (hours <= 40)
    {
        salary = hours * BASE_SALARY;
        tax = 300 * BASE_TAX + (salary - 300) * EXCEED_TAX;
        taxed_salary = salary - tax;
    }
    /* 40 小时以上，加班，税率按工资 450 美元的分界扣减 */
    else 
    {
        salary = (40 + (hours - 40) * EXTRA_HOUR) * BASE_SALARY;
        if (salary <= 450)
        {
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
        }
        else 
        {
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
        }
        taxed_salary = salary - tax;
    }
    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
    printf("Done!\n");

    return 0;
}