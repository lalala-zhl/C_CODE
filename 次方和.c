#include <stdio.h>
#include <math.h>              //pow的头文件
int main()
{
	int i = 0;                  
	int n = 0;                  //n控制底数
	int k = 0;                  //k控制幂
	int sum = 0;                //sum计算累加和
	
	printf("please input n and k:(1^k+2^k+3^k+...+n^k)\n"); 

	scanf("%d%d", &n,&k);
	for (i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}
	printf("1+2^%d+...+%d^%d=%d\n", k, n, k, sum);

	return 0;
}