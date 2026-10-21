//#include<stdio.h>
//int main()
//{
//	char str1[] = "Mike";
//	char str2[] = "John";
//	char str3[] = "Howard";
//	char* arr[] = { str1,str2,str3 };
//	for (int i = 0;i < 3;i++)
//	{
//		printf("%s\n", arr[i]);//为什么这里并不用对 arr[i] 解引用呢？
//		//原因来自于%s本身，%s所需要读取的本身就是一个地址，如果你像对 %d 那样，想当然地把它给解引用了，反而是画蛇添足
//	}
//	return 0;
//}