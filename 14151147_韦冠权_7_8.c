#include<stdio.h>
int main()
{
	void  putspace(char s[]);
	char s[50];
	printf("输入一个四位数:\n");
	gets(s);
	putspace(s);
	printf("输入的四个数字为：\n%s\n",s);
	return 0;
}
void putspace(char s[])
{
	int i;
	for(i=4;i>0;i--)
	{
		s[2*i]=s[i];
		s[2*i-1]=' ';
	}
}
