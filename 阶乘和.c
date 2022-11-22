#include <stdio.h>
int main()
{
	int i = 0;               
	int n = 0;             //n为所求阶乘和的最后一个数
	int sum = 0;           //sum计算累加和
	int fac = 1;           //fac计算阶乘，初始值为1
	printf("please input n(1!+2!+...+n!)\n");

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fac *= i;
		sum += fac;
	}

	printf("1!+2!+...+%d!=%d\n", n, sum);
	return 0;
}