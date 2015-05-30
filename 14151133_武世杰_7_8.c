#include<stdio.h>
#include<string.h>
void f(char a[])
{
	int i;
	for (i = strlen(a); i >0; i--)
	{
		a[2 * i] = a[i];
		a[2*i-1] = ' ';
	}
	printf("变换后结果为：%s\n", a);
}
int main()
{
	void f(char[]);
	char a[100];
	printf("输入一个四位数字：");
	scanf("%s", a);
	f(a);
	return 0;
}
