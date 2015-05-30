#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char s1[100],s2[100];
	printf("请输入一个4位数:");
	gets(s1);
	for(i=0;i<=4;i++)
	{
		s2[2*i]=s1[i];
		s2[2*i-1]=' ';
	}
	printf("输出为:%s\n",s2);
}
