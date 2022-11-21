#include <stdio.h>

int main()                             //打印高度是7的菱形
{
	int i, j;                                  //i控制行，j控制列

	for (i = 1; i <= 4; i++)                   //打印上4行
	{
		for (j = i; j <= 4; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");                          //打印完一行后换行
	}

	for (i = 1; i <= 3; i++)                   //打印下三行
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 7 - (2 * i); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
