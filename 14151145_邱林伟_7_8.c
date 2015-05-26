#include<stdio.h>
void f(char[]);
void main()
{
	char str[30];
	printf("请输入一个四位数：\n");
	scanf("%s",str);
	f(str);
	printf("\n");
}
void f(char str1[])
{
	int i;
    char str2[30];
	for(i=0;i<7;i++)
	{
		if(i%2==0)
			str2[i]=str1[i/2];
		else
			str2[i]=' ';
	}
	for(i=0;i<7;i++)
		printf("%c",str2[i]);
}
