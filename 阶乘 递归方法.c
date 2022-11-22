#include <stdio.h>

int Fac(int n)
{
	if (n == 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main()
{
	int n = 0;                         //n是所求的阶乘数
	printf("please input n(n!)\n");
	scanf("%d", &n);
	printf("%d!=%d\n", n, Fac(n));     //把n作为参数传给Fac函数
	return 0;
}