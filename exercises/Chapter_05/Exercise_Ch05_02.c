/* Exercise_Ch05_02.c --  */

/*

*/

/*

*/
#include <stdio.h>

#pragma warning(disable:4996)

int main(int argc, char * argv[])
{
	int counter = 0;
	int i = 0;

	printf("PRINT COUNTINUE 10 NUMBERS!\n");
	printf("PLEASE INPUT THE START NUMBER :");
	scanf("%d", &counter);
	/* 读取用户输入，保存至 counter 中 */
	while (i++ < 11)
	{
		printf(" %d \n", counter++);
	}
	/* 循环 10 次，打印范围为输入数据开始的10个整数 */
	printf("PROGRAM EXIT!\n");

	return 0;
}

/*
* Output:
PRINT COUNTINUE 10 NUMBERS!
PLEASE INPUT THE START NUMBER :5
 5
 6
 7
 8
 9
 10
 11
 12
 13
 14
 15
PROGRAM EXIT!
*/