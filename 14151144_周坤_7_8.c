# Homework8
#include<stdio.h>
int main()
{
	int i=0;
	char s1[50],s2[50];
	printf("请输入4位数字:");
	gets(s1);
	for(i=0;i<=4;i++)
	{
		s2[2*i]=s1[i];
		s2[2*i-1]=' ';
	}
	printf("输出为:%s\n",s2);
	return 0;
}
