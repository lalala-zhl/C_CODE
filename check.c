#include <stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();

	//����1--С��
	//����0--���

	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}