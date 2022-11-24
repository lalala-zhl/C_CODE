#include <stdio.h>
//杨氏矩阵--自左至右递增，自上至下递增
int Find(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;                              //从二维数组的右上角的元素开始查找，x代表行，从第一行开始
	int y = *col - 1;                       //y代表列，从第2行开始

	while (x <= *row-1 && y >= 0)           //查找范围从右上角至左下角慢慢收缩
	{
		if (arr[x][y] > k)                  //如果右上角这个元素大于被查找的这个元素，则被查找元素不在这一列，在前面那列查找
		{
			y--;
		}
		else if (arr[x][y] < k)             //如果右上角这个元素小于被查找的这个元素，则被查找元素不在这一行，在下面那行查找
		{
			x++;
		}
		else 
		{
			*row = x;                       //此时的x和y易发生改变，可以传到main中
			*col = y;
			return 1;                       //找到了
		}
	}
	return 0;                               //找不到 
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };              //3行3列的二维数组
	int k = 7;                                                //需要查找的值是7
	
	int x = 3;                                                
	int y = 3;
	
	int ret = Find(arr, k, &x, &y);                           //把x和y的地址传过去，对形参的改变可以改变实参
	if (ret == 1)                                             //找到返回1
	{
		printf("找到了\n");
		printf("下标是%d %d\n",x,y);

	}
	else                                                       //找不到返回0
	{
		printf("找不到\n");
	}
	return 0;
}