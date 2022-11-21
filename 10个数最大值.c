#include <stdio.h>
int main()
{
	int arr[10];                  
	int i = 0;                         //i控制下标
	int max = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	max = arr[0];                    //把小标为0的元素赋给max

	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)         //如果此元素大于max
		{
			max = arr[i];         //把此元素赋给max
		}
	}

	printf("max=%d\n", max);

	return 0;
}
