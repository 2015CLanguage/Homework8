#include<stdio.h>
#include<string.h>
void change(char n[]);
void change(char n[])
{
	int i;
	for(i=strlen(n);i>0;i--)
	{
		n[2*i]=n[i];
		n[2*i-1]=' ';
	}
	printf("这4个数字字符为:%s\n",n);
}
int main()
{
	char n[10];
	printf("请输入一个4位数字:");
	scanf("%s",n);
	change(n);
	return 0;
}
