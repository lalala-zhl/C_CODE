#include <stdio.h>
int main()
{
	int i = 0;               
	int n = 0;             //nΪ����׳˺͵����һ����
	int sum = 0;           //sum�����ۼӺ�
	int fac = 1;           //fac����׳ˣ���ʼֵΪ1
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