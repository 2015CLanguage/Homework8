#include<stdio.h>
#include<string.h>
void c(char s[]);


int main()
{
	char s[80];
	printf("请输入四个数字:\n");//接受输入
	scanf("%s",s);
	c(s);//调用字符函数
	return 0;
}

void c(char s[])//定义字符函数
{
	int i;
	for(i=strlen(s);i>0;i--)
	{
		s[2*i]=s[i];
		s[2*i-1]=' ';
	}
	printf("数字字符为:\n%s\n",s);
}
