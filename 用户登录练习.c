#include<stdio.h>
#include<string.h>
int main()
{
	char m;
	char arr_name[16];
	char arr_password[21];
	int i = 0;
	printf("请输入您的用户名：");
	scanf("%s", arr_name);
	getchar();
	printf("\n");
	printf("请输入您的密码：");
	scanf("%s", arr_password);
	getchar();
	printf("\n");
	printf("恭喜您已成功注册！下面开始首次登陆");
	printf("\n");
	int count = 1;
	char arr1_name[16];
	char arr1_password[21];
	while (count <= 3 )
	{
		printf("请输入您的账户名称：");
		scanf("%s", arr1_name);
		getchar();
		printf("\n");
		printf("请输入您的账号密码：");
		scanf("%s", arr1_password);
		getchar();
		printf("\n");
		int res1=strcmp(arr1_name, arr_name);
		int res2 = strcmp(arr1_password, arr_password);
		if (res1 == 0 && res2==0)
		{
			printf("恭喜您完成第一次登录！下面即将进入系统");
			break;
		}
		count++;
		if (count >= 2)
		{
			printf("此次输入有误请重新输入！\n");
		}
	}
	printf("您连续发生三次输入错误，请稍后重试");
	return 0;
}