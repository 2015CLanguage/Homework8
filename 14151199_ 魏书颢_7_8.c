#include"stdio.h"
#include"string.h"
void change(char []);
void main()
{
	char x[100];
	printf("输入一个四位数字\n");
	scanf("%s",&x);
	change(x);

}
void change(char x[])
{
	int i;
	for(i=strlen(x);i>0;i--)
	{
		x[2*i]=x[i];
		x[2*i-1]=' ';
	}
	printf("转化后：\n%s\n",x);
}
