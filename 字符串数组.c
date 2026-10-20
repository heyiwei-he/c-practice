#include<stdio.h>
int main()
{
	char str1[] = "Mike";
	char str2[] = "John";
	char str3[] = "Howard";
	char* arr[] = { str1,str2,str3 };
	for (int i = 0;i < 3;i++)
	{
		printf("%s\n", arr[i]);

	}
	return 0;
}