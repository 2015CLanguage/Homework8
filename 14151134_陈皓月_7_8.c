#include<stdio.h>
#include<string.h>
void change(char a[]);
void main()
{
	char a[10];
	printf("请输入一个四位数\n");
	scanf("%s",&a);
	change(a);
}
void change(char a[])
{
	int i;
	for(i=strlen(a);i>0;i--)   //循环插入空格
	{	
		a[2*i]=a[i];
		a[2*i-1]=' ';
	}
	printf("转换后为%s\n",a);
}
