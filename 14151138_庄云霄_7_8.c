#include<stdio.h>
#include<string.h>
void main()
{
	int i=0;
	char s1[100],s2[100];
	printf("请输入4位数字:");
	gets(s1);
	for(i=0;i<=4;i++)
	{
		s2[2*i]=s1[i];
		s2[2*i-1]=' ';
	}
	printf("输出为:%s\n",s2);
}
