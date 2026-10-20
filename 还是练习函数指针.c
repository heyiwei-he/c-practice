//#include<stdio.h>
//#include<math.h>
//typedef void (*FuncPtr)(int*);
//void square(int* p_num1)
//{
//	*p_num1 = pow(*p_num1, 2);
//	int result = *p_num1;
//	printf("第一次运算后的结果为%d\n", result);
//}
//void absolute(int* p_num1)
//{
//	*p_num1 = abs(*p_num1);
//	int result = *p_num1;
//	printf("第二次运算后的结果为%d\n", result);
//}
//void add_10(int* p_num1)
//{
//	*p_num1 = *p_num1 + 10;
//	int result = *p_num1;
//	printf("第三次运算后的结果为%d\n", result);
//}
//int main()
//{
//	int num;
//	FuncPtr arr[3] = { square,absolute,add_10 };
//	printf("请输入一个数字用于计算：");
//	scanf("%d", &num);
//	int* p = &num;
//	for (int i = 0;i < 3;i++)
//	{
//		(*(*arr[i]))(p);
//	}
//	return 0;
//}
