//#include<stdio.h>
//int main()
//{
//	struct myGirlFriends
//	{
//		int age;
//		int height;
//		char cup;
//	};
//	struct myGirlFriends gf1;
//	gf1.age = 18;
//	gf1.cup = 'c';
//	gf1.height = 170;
//	printf("%d", gf1.age);
//}

//#include<stdio.h>
//struct students_profile
//{
//	char name[15];
//	int age;
//	char sex;
//};
//int main()
//{
//	struct students_profile stu1 = { "Mike",18,'M' };
//	struct students_profile stu2= { "Howard", 19, 'M' };
//	struct students_profile stu3 = { "Susan",17,'F' };
//	struct students_profile stu_arr[3] = {stu1,stu2,stu3};
//	for (int i = 0;i < 3;i++)
//	{
//		printf("该同学的姓名是%s,年龄是%d,性别为%c\n", stu_arr[i].name, stu_arr[i].age, stu_arr[i].sex);
//		
//	}
//	return 0;
//}




//#include<stdio.h>
//struct myGirlFriends
//{
//	char name[100];
//	int age;
//	char cup;
//};
//int main()
//{
//	struct myGirlFriends gf1 = { "小周周",18,'C' };
//	struct myGirlFriends gf2 = { "小周周二号",18,'D' };
//	struct myGirlFriends gf3 = { "小周周三号",18,'E' };
//	struct myGirlFriends GF_arr[3] = {gf1,gf2,gf3};
//	
//	for (int i = 0;i < 3;i++)
//	{
//		printf("我的女朋友叫做%s,她今年%d岁了，是%c CUP\n", GF_arr[i].name, GF_arr[i].age, GF_arr[i].cup);
//		
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>
typedef struct students_name
{
	char name[100];
	int age;
	char sex;
}S;
void Func_switchname(S stu[], char arr[], int i)
{
	strcpy((stu + i - 1)->name, arr);
}
void Func_switchage(S stu[],int j, int i)
{
	(stu + i - 1)->age = j;
}
void Func_switchsex(S stu[], char a, int i)
{
	(stu + i - 1)->sex = a;
}
int main()
{
	S stu_1 = { "zhangsan",23,'F' };
	S stu_2 = { "lisi",22,'M' };
	S arr_stu[2] = {stu_1,stu_2};
	int i,j;
	char arr_temp[100];
	int temp_i;
	char temp_sex;
	printf("请问您想要修改哪位学生的数据：\n");
	scanf("%d", &i);
	printf("该学生的初始数据为：\n姓名：%s\n年龄：%d\n性别：%c\n", arr_stu[i - 1].name, arr_stu[i - 1].age, arr_stu[i - 1].sex);
	printf("请问您要修改哪一项数据：\n姓名:输入1\n年龄:输入2\n性别:输入3\n");
	getchar();
	scanf("%d", &j);
	switch (j)
	{
	case 1:
		printf("请问你想要将其修改为：\n");
		scanf("%s", arr_temp);
		Func_switchname(arr_stu,arr_temp,i);
		break;
	case 2:
		printf("请问你想要将其修改为：\n");
		getchar();
		scanf("%d", &temp_i);
		Func_switchage(arr_stu,temp_i,i);
		break;
	case 3:
		printf("请问你想要将其修改为：\n");
		getchar();
		scanf("%c", &temp_sex);
		Func_switchsex(arr_stu, temp_sex, i);
		break;
	}
	printf("修改后该学生的数据为：\n姓名：%s\n年龄：%d\n性别：%c\n", arr_stu[i - 1].name, arr_stu[i - 1].age, arr_stu[i - 1].sex);
	return 0;
}