#include<stdio.h>
int main()
{
void fun(char a[]);
char a[6];
printf("输入一个四位数字：");
gets(a);
fun(a);
puts(a);
return 0;
}

void fun(char a[])
{
int i;
for(i=3;i>0;i--)
{
	a[i*2]=a[i];
	a[i*2-1]=' ';
}
}
