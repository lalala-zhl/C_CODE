#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int fac = 1;
	printf("please input n(n!)\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fac *= i;
	}
	printf("%d!=%d\n", n, fac);
	return 0;
}