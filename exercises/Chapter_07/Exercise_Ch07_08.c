/* Exercise_Ch07_08.c --  */

/*
    修改编成练习 7 的假设a，让程序可以给出一个供选择的工资等级菜单。
    使用 switch 语句完成工资等级选择。
    运行程序后，显示的菜单应该类似这样。
    ***********************************************************************
    Enter the number corresponding to the desired pay rate or action
    1) $8.75/hr                             2) $9.33/hr
    3) $10.00/hr                            4) $11.20/hr
    5) Quit
    ***********************************************************************
*/

/*
    题目要求使用 switch 语句实现编成练习 7 的基本功能，增加每小时工资为 4 档，使用菜单
    形式显示并读取输入。由于基本工资有 4 档，因此不能使用原有的工资常量来表示基本工资。
    为了简化代码，使用函数形式制作菜单，并计算工资和税金。
*/

#include <stdio.h>

#define EXTRA_HOUR  1.5     // 续150美元
#define BASE_TAX    0.15    // 前300美元的税率15%
#define EXTRA_TAX   0.2     // 续150美元的税率为20%
#define EXCEED_TAX  0.25    // 余下的税率为25%

/* 显示基本工资的菜单函数 */
void show_menu(void);

/* 依据基本工资和工作时长计算工资、税金、净收入的函数 */
void calc_salary(float base_salary, float hours);

int main(void)
{
    float hours = 0;
    char selected;
    show_menu();
    
    while (selected != '5')
    {
        scanf("%c", &selected);

        // if (selected == '\n')
        //     continue;

        switch (selected)
        {
            case '1':
                printf("Hello, you select $8.75/hr, Enter the work hours: ");
                scanf("%f", &hours);
                calc_salary(8.75, hours);
                break;
            case '2':
                printf("Hello, you select $9.33/hr, Enter the work hours: ");
                scanf("%f", &hours);
                calc_salary(9.33, hours);
                break;
            case '3':
                printf("Hello, you select $10.00/hr  , Enter the work hours: ");
                scanf("%f", &hours);
                calc_salary(10.00, hours);
                break;
            case '4':
                printf("Hello, you select $11.20/hr, Enter the work hours: ");
                scanf("%f", &hours);
                calc_salary(11.20, hours);
                break;
            case '5':
                break;
            default:
                printf("Error selected! Please retry!\n");
                show_menu();
                continue;
        } 
    }
    printf("Done!\n");

    return 0;
}

void show_menu(void)
{
    /* 显示提示菜单 */
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) Quit";

    printf("***********************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action\n");
    printf("%-40s", s1);
    printf("%-40s\n", s2);
    printf("%-40s", s3);
    printf("%-40s\n", s4);
    printf("%-40s\n", s5);
    printf("***********************************************************************\n");
}

void calc_salary(float base_salary, float hours)
{
    float salary;
    float tax;
    float taxed_salary; 

    /* 工作时长小于等于 30 小时的情况 */
     if (hours <= 30)
    {
        salary = hours * base_salary;
        tax = salary * BASE_TAX;
        taxed_salary = salary - tax;
    }
    /* 3工作时长小于等于 40 小时的情况 */
    else if (hours <= 40)
    {
        salary = hours * base_salary;
        tax = 300 * BASE_TAX + (salary - 300) * EXCEED_TAX;
        taxed_salary = salary - tax;
    }
    /* 40 小时以上，加班，税率按工资 450 美元的分界扣减 */
    else 
    {
        salary = (40 + (hours - 40) * EXTRA_HOUR) * base_salary;
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
    // printf("\nContinue...\n");
}