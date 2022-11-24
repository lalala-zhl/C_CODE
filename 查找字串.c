#include <stdio.h>
#include <string.h>
int move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1!=len2)                         //如果arr1和arr2的字符串长度不相等，此函数不适用此题
	{
		return 0;
	}

	strncat(str1, str1, 6);                 //自己追加自己的库函数
	char* ret = strstr(str1, str2);         //在str1里面查找str2字符串
	
	if (ret == NULL)                        //在str1里面找str2，查看str2是否是str1的子串
	{
		return 0;
	}
	else
		return 1;
	
}

int main()
{
	char arr1[30] = "abcdef";              //在arr1里面查找arr2
	char arr2[] = "cdefab";

	int ret = move(arr1, arr2);
	if (ret == 1)                          //是字串返回1
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");                   //不是字串返回0
	}
	return 0;
}