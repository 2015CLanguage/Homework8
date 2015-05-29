#include<stdio.h>
void output(int(n))
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
	printf("请输入一个四位数");
	scanf("%d",&n);
	puts("输出结果为：");
	output(n);
	printf("\n");
}
