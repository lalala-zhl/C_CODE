#include <stdio.h>
#include <string.h>
int move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1!=len2)                         //���arr1��arr2���ַ������Ȳ���ȣ��˺��������ô���
	{
		return 0;
	}

	strncat(str1, str1, 6);                 //�Լ�׷���Լ��Ŀ⺯��
	char* ret = strstr(str1, str2);         //��str1�������str2�ַ���
	
	if (ret == NULL)                        //��str1������str2���鿴str2�Ƿ���str1���Ӵ�
	{
		return 0;
	}
	else
		return 1;
	
}

int main()
{
	char arr1[30] = "abcdef";              //��arr1�������arr2
	char arr2[] = "cdefab";

	int ret = move(arr1, arr2);
	if (ret == 1)                          //���ִ�����1
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");                   //�����ִ�����0
	}
	return 0;
}