#include <stdio.h>
#include <math.h>              //pow��ͷ�ļ�
int main()
{
	int i = 0;                  
	int n = 0;                  //n���Ƶ���
	int k = 0;                  //k������
	int sum = 0;                //sum�����ۼӺ�
	
	printf("please input n and k:(1^k+2^k+3^k+...+n^k)\n"); 

	scanf("%d%d", &n,&k);
	for (i = 1; i <= n; i++)
	{
		sum += pow(i, k);
	}
	printf("1+2^%d+...+%d^%d=%d\n", k, n, k, sum);

	return 0;
}