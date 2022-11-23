#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)                 //const常量
{
	int count = 0;                             //计数器
	assert(*str != NULL);                      //断言
	
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	printf("len=%d\n", my_strlen(arr));
	return 0;
}