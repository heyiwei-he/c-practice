//#include<stdio.h>
//int add(int num1, int num2)
//{
//	int result = num1 + num2;
//	return result;
//}
//int sub(int num1, int num2)
//{
//	int result = num1 - num2;
//	return result;
//}
//int mul(int num1, int num2)
//{
//	int result = num1 * num2;
//	return result;
//}
//int div(int num1, int num2)
//{
//	int result = num1 / num2;
//	return result;
//}
//int main()
//{
//	typedef int (*FuncPtr)(int, int);
//	FuncPtr arr[4] = { add,sub,mul,div };
//	FuncPtr(*p)[4] = arr;
//	int num0,num1, num2;
//	printf("请输入你所要进行计算的两个数：\n");
//	scanf("%d %d", &num1, &num2);
//	printf("你要选择的计算是(1 代表加法；2 代表减法；3 代表乘法；4 代表除法)：\n");
//	scanf("%d", &num0);
//	int result = *arr[num0](num1, num2);
//	printf("计算的结果是：%d", result);
//	return 0;
//}
