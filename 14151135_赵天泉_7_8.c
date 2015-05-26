#include<stdio.h>
#include<string.h>
void solve(char s[]);
int main()
{
	char s[80];
	printf("请输入4位数字：");
	scanf("%s",s);
	solve(s);
	return 0;
}
void solve(char s[])
{
	int i;
	for(i=strlen(s);i>0;i--)
	{
		s[2*i]=s[i];
		s[2*i-1]=' ';
	}
	printf("输出为：\n%s\n",s);
}
