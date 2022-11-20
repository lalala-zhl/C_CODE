#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("***************************\n");
	printf("*     数组访问系统        *\n");
	printf("*                         *\n");
	printf("*    1.数组赋值           *\n");
	printf("*    2.数组输出           *\n");
	printf("*    3.数组排序           *\n");
	printf("*    4.退出               *\n");
	printf("*                         *\n");
	printf("***************************\n");
}
void Compare(int arr[])
{
	int i, j, t;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int a, i=0;
	int arr[10];
	menu();
	while (1)
	{
		printf("请输入功能(1-4):> ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("请输入需要比较的10个数字:> \n");
			for (i = 0; i < 10; i++)
			{
				scanf("%d", &arr[i]);
			}
			break;
		case 2:
			for (i = 0; i < 10; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
			break;
		case 3:
			Compare(arr);
			printf("\n");
			break;
		case 4:
			void _exit(int status);
			break;
		default:
			printf("\n请重新选择:> ");
			break;
		}
	}	
	return 0;
}