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
void main()
{
    int n;
	puts("please input a number:");
	scanf("%d",&n);
	puts("the result is:");
	transform(n);
	printf("\n");
}
