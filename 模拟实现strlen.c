#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)                 //const����
{
	int count = 0;                             //������
	assert(*str != NULL);                      //����
	
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