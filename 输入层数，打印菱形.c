#include <stdio.h>

int main()                                         //输入任意高度，打印菱形
{
	int i, j, n;                                   //i控制行，j控制列，n是需要打印的层数
	printf("请输入要打印菱形的高度：(奇数)\n");
	scanf("%d", &n);

	while (1)                                      //当条件为真时执行
	{
		if (n % 2 == 1)
		{
			for (i = 1; i <= (n / 2) + 1; i++)
			{
				for (j = i; j <= (n / 2) + 1; j++)
				{
					printf(" ");
				}
				for (j = 1; j <= 2 * i - 1; j++)
				{
					printf("*");
				}
				printf("\n");
			}

			for (i = 1; i <= n / 2; i++)
			{
				for (j = 1; j <= i + 1; j++)
				{
					printf(" ");
				}
				for (j = 1; j <= n - 2 * i; j++)
				{
					printf("*");
				}
				printf("\n");
			}

			break;                                  //跳出循环
		}

		else
		{
			printf("请输入一个奇数\n");
			scanf("%d", &n);
		}
	}
}