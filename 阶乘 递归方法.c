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
	int n = 0;                         //n������Ľ׳���
	printf("please input n(n!)\n");
	scanf("%d", &n);
	printf("%d!=%d\n", n, Fac(n));     //��n��Ϊ��������Fac����
	return 0;
}