#include <stdio.h>

int main()                                         //��������߶ȣ���ӡ����
{
	int i, j, n;                                   //i�����У�j�����У�n����Ҫ��ӡ�Ĳ���
	printf("������Ҫ��ӡ���εĸ߶ȣ�(����)\n");
	scanf("%d", &n);

	while (1)                                      //������Ϊ��ʱִ��
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

			break;                                  //����ѭ��
		}

		else
		{
			printf("������һ������\n");
			scanf("%d", &n);
		}
	}
}