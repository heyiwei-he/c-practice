//手写 my_strlen
//#include<stdio.h>
//int count_number_of_byte(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[20];
//	printf("请输入字符串：\n");
//	scanf("%s", str1);
//
//	int count = count_number_of_byte(str1);
//	printf("该字符串的有效字符数为%d个",count);
//	return 0;
//}

//手写my_strcpy
//#include<stdio.h>
//void copy_(char* str0, char* str1)
//{
//	int i = 0;
//	while (*str0!= '\0')
//	{
//		
//		str1[i] = *str0;
//		str0++;
//		i++;
//	}
//	str1[i] = '\0';
//}
//int main()
//{
//	char str0[] = "I love c language";
//	char str1[100];
//	copy_(str0, str1);
//	printf("%s", str1);
//	return 0;
//
//}

//#include<stdio.h>
//void switch_(int* p, int len)
//{
//	for (int i = 0;i < len/2;i++)
//	{
//		int j =*p;
//		*p = *(p + len - 2 * i - 1);
//		*(p + len - 2 * i - 1) = j;
//		p++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(int);
//	int* p = arr;
//	switch_(p, len);
//	for (int m = 0;m < len;m++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

