#include<stdio.h>
void change(char x[4],char y[7]);
int main()
{
	char a[4],b[7];
	printf("请输入一个4位数:");	
	gets(a);
	change(a,b);
	puts(b);
	return 0;
}
void change(char x[4],char y[7])
{
	int i;
	for(i=0;i<4;i++)
		y[2*i]=x[i];
	for(i=1;i<4;i++)
		y[2*i-1]=' ';
	y[7]='\0';
}
