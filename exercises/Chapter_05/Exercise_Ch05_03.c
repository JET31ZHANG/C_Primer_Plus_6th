/* Exercise_Ch05_03.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

#define WEEK_PER_DAY 7		// 每周有 7 天

int main(int argc, char* argv[])
{
	int days, weeks, input;

	printf("CONVERT DAYS TO WEEKS!\n");
	printf("PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):");
	scanf("%d", &input);
	/* 读取用户输入，保存至 input 变量中 */
	while (input > 0)
	{
		weeks = input / WEEK_PER_DAY;
		/* 计算周数 */
		days = input % WEEK_PER_DAY;
		/* 计算不足一周的天数 */
		printf("%d days are %d weeks, %d days\n", input, weeks, days);
		/* 打印结果 */
		printf("PLEASE INPUT THE NUMBER OF DAYS (<=0 TO QUIT ):");
		scanf("%d", &input);
		/* 继续下一次输入 */
	}
	printf("PROGRAM EXIT!\n");

	return 0;
}

/*
* Output:
CONVERT DAYS TO WEEKS!
PLEASE INPUT THE NUMBER OF DAYS( <=0 TO QUIT ):25
25 days are 3 weeks, 4 days
PLEASE INPUT THE NUMBER OF DAYS (<=0 TO QUIT ):0
PROGRAM EXIT!
*/