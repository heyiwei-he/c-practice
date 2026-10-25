//#include<stdio.h>
//int count (char* arr)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//
////后接插入，在文档后面插入字符串 str，并输出文档的字符串；
//void add(char* arr)
//{
//	int i = count(arr);
//	char apt;
//	getchar(); // 吃掉上一次 scanf("%d") 残留在缓冲区的换行符
//	printf("请输入您要插入的字符：");
//	while (scanf("%c", &apt) == 1 && apt != '\n')
//	{
//		*(arr+i) = apt;
//		i++;
//	}
//	*(arr + i) = '\0';
//}
//
////截取文档部分，只保留文档中从第 a 个字符起 b 个字符，并输出文档的字符串；
//void cut(char* arr)
//{
//	int a, b;
//	printf("您需要保留该字符串中的哪些字符，请输入开始位置 a 和字符个数 b：");
//	scanf("%d %d", &a, &b);
//	// 保留从第 a 个字符起的 b 个字符，即下标 a-1 到 a+b-2，直接原地前移即可
//	for (int i = 0;i < b;i++)
//	{
//		*(arr + i) = *(arr + a - 1 + i);
//	}
//	*(arr + b) = '\0';
//}
////插入片段，在文档中第 a 个字符前面插入字符串 str，并输出文档的字符串
//void add_front(char* arr)
//{
//	char arr2[100];//定义一个数组arr2用来保存用户的输入的内容
//	int a;
//	printf("请问您要插入的内容是什么：");
//	scanf("%s", arr2);
//	printf("\n");
//	int count_num0 = count(arr);
//	int count_num2 = count(arr2);
//	printf("请问您想要在第几个字符前插入字符串str：");
//	scanf("%d", &a);
//	int pos = a - 1;//第 a 个字符对应的下标是 a-1
//	//必须从后往前把尾部整体右移，否则会把还没搬走的数据覆盖掉
//	for (int h = count_num0;h >= pos;h--)
//	{
//		*(arr + h + count_num2) = *(arr + h);
//	}
//	//再把 str 填入空出来的位置
//	for (int h = 0;h < count_num2;h++)
//	{
//		*(arr + pos + h) = arr2[h];
//	}
//}
////查找子串，查找字符串 str 在文档中最先的位置并输出；如果找不到输出 −1
//void search(char* arr)
//{
//	char arr1[100];
//	printf("请问您想查询的字符串是：");
//	scanf("%s", arr1);
//	int len1 = count(arr);
//	int len2 = count(arr1);
//	for (int h = 0;h <= len1 - len2;h++)//起点 h 最多到 len1-len2
//	{
//		int j;
//		for (j = 0;j < len2;j++)//逐位比较 arr[h+j] 和 arr1[j]
//		{
//			if (arr[h + j] != arr1[j])
//			{
//				break;
//			}
//		}
//		if (j == len2)//j 走满 len2 说明整段匹配成功，位置是 h
//		{
//			printf("%d", h);
//			return;
//		}
//	}
//	printf("-1");
//}
//int main()
//{
//	char arr[500] = "I used to be a humble girl, the thing is that I am too humble, I always think that my ability is not good enough, but in fact, I am just not confident. One day, when I went back home after school, my mother asked me to help her, she had some problems with the computer";
//	printf("请问您想进行以下哪一项操作:\n1.后接插入，在文档后面插入字符串 str，并输出文档的字符串\n2.截取文档部分，只保留文档中从第 a 个字符起 b 个字符，并输出文档的字符串\n3.插入片段，在文档中第 a 个字符前面插入字符串 str，并输出文档的字符串\n4.查找子串，查找字符串 str 在文档中最先的位置并输出；如果找不到输出 −1\n");
//	int n;
//	scanf("%d", &n);
//	typedef void (*FuncPtr1)(char*);
//	FuncPtr1 arr_[4] = { add,cut,add_front,search };
//	(arr_[n - 1])(arr);
//	if (n >= 1 && n <= 3)
//	{
//		printf("%s", arr);
//	}
//	return 0;
//}