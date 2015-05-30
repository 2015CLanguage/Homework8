#include<stdio.h>
#include<string.h>
int main()
{
	void addspace(char a[]);
	char a[20];
	printf("请输入一个四位数：");
	scanf_s("%s", a);
	addspace(a);
	return 0;
}

void addspace(char x[20])
{
	int  i;
	for (i = strlen(x); i > 0;i--)
	{
		x[2 * i] = x[i];
		x[2*i-1]=' ';
	}
	printf("整理后的数字为：%s\n",x);
}
