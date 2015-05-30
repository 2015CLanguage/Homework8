#include<stdio.h>
void transform(int n)
{
	int a,b,c,d;
	a=n/1000;
	b=(n-1000*a)/100;
	c=(n-1000*a-100*b)/10;
	d=n%10;
	a=(char)(a+48);
	b=(char)(b+48);
	c=(char)(c+48);
	d=(char)(d+48);
	printf("%c %c %c %c",a,b,c,d);
}
int main()
{
    int n;
	puts("情输入一个数字:");
	scanf("%d",&n);
	puts("输出结果:");
	transform(n);
	printf("\n");
}
