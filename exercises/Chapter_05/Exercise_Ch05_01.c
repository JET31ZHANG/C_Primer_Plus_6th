/* Exercise_Ch05_01.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

#define MIN_PER_HOUR 60		// 每小时有 60 分钟

int main(int argc, char* argv[])
{
	int hours, minutes, input;
    /* 定义 MIN_PER_HOUR const 常量
    * const int MIN_PER_HOUR = 60;
    */
	printf("CONVERT MINUTES TO HOURS!\n");
	printf("PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
	scanf("%d", &input);
	while (input > 0)
	{
		hours = input / MIN_PER_HOUR;
		minutes = input % MIN_PER_HOUR;
		printf("CONVERT TO %d HOUR AND %d MINUTES\n", hours, minutes);
        /* 程序设计中也经常使用以下方法，从而减少变量 hours 和 minutes 的定义和使用
         * printf("CONVERT TO %d HOUR AND %d MINUTES\n", input / MIN_PER_HOUR, input % MIN_PER_HOUR);
         */
		printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):");
		scanf("%d", &input);
	}
	printf("PROGRAM EXIT!\n");
}

/*
* Output:
CONVERT MINUTES TO HOURS!
PLEASE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):124
CONVERT TO 2 HOUR AND 4 MINUTES
PLEASE CONTINUE INPUT THE NUMBER OF MINUTES( <=0 TO QUIT ):0
PROGRAM EXIT!
*/