/* Exercise_Ch06_14.c --  */
/* 
    编写一个程序，创建两个包含 8 个元素的 double 类型数组，使用循环提示用户为第 1 个数组输入 8 个值。
    第 2 个数组元素的值设置为第 1 个数组对应元素的累加和。
    例如：第 2 个数组的第 4 个元素的值是第 1 个数组的前 4 个元素之和。
    第 2 个数组的第 5 个元素是第 1 个数组的前 5 个元素之和（用嵌套循环可以完成，但是利用第 2 个数组的第 5 个元素是
    第 2 个数组第 4 个元素和第 1 个数组的第 5 个元素之和，只用一个循环就能完成任务，不需要使用嵌套循环）。
    最后使用循环显示两个数组的内容，第 1 个数组显示成 1 行，第 2 个数组显示在第 1 个数组的下一行，而且每 1 个元素都与
    第 1 个数组的元素相对应。

*/

/* 
    程序定义两个包含 8 个元素的 double 类型数组，第 1 个数组存储用户输入的数值，
    第 2 个数组计算第 1 个数组的前 N 项和。
    算法可以通过单循环或嵌套循环来实现。
*/

#include <stdio.h>

int main(void)
{
    double first[8];
    double second[8];

    printf("Enter 8 data to the first array: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &first[i]);        // 循环读入 8 个数据
    }

    /* 单循环 */
    second[0] = first[0];
    for (int i = 0; i < 8; i++)
    {
        second[i] = second[i - 1] + first[i];
    }

    /* 双循环 */
    // for (int i = 0; i < 8; i++)
    // {
    //     double sum = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         sum += first[j];
    //     }
    //     second[i] = sum;
    // }

    printf("All the data of the two array:\n");
    printf("The Frist Array: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%12lf. ", first[i]);
    }
    
    printf("The Second Array: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%12lf. ", second[i]);
    }

    printf("\nDone!\n");

    return 0;
}