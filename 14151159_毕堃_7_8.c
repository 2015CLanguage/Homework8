#include "stdio.h"

int p(char s[]);
int main()
{
	int i;
	char s[4];
	printf("请输入一个四位数字：\n");
	for(i=0;i<4;i++)
	{
		scanf("%c",&s[i]);
	}
	p(s);
	return 0;
}
int p(char s[])
{
	int t[7],a;
	for(a=0;a<7;a++)
	{t[a]=' ';}
	for(a=0;a<4;a++)
	{t[a*2]=s[a];}
	for(a=0;a<7;a++)
	{printf("%c",t[a]);}
	printf("\n");
	return 0;
}
