#include <stdio.h>

int main()                             //��ӡ�߶���7������
{
	int i, j;                                  //i�����У�j������

	for (i = 1; i <= 4; i++)                   //��ӡ��4��
	{
		for (j = i; j <= 4; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");                          //��ӡ��һ�к���
	}

	for (i = 1; i <= 3; i++)                   //��ӡ������
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
