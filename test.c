#include <stdio.h>
int main()
{
	int arr[10];                  
	int i = 0;                    //i�����±�
	int max = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];                 //��С��Ϊ0��Ԫ�ظ���max

	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)         //�����Ԫ�ش���max
		{
			max = arr[i];         //�Ѵ�Ԫ�ظ���max
		}
	}

	printf("max=%d\n", max);

	return 0;
}