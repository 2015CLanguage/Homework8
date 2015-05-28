#include<stdio.h>
void input(int *a);
void value(int *a);
void output(int *a);
void main()          
{
	int a[10];
	input(a);
	value(a);
	output(a);
}
void input(int *a)             //输入函数
{
	int i;
	printf("input 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void value(int *a)             //处理函数
{
	int *p,*max,*min,temp;
	min=max=a;
	for(p=a+1;p<a+10;p++)
	{
		if(*p>*max)
			max=p;
		else if(*p<*min)
			min=p;
	}
	temp=a[0];
	a[0]=*min;
	*min=temp;
	if(max==a)
		max=min;
	temp=a[9];
	a[9]=*max;
	*max=temp;
	
}
void output(int *a)          //输出函数
{
	int *p;
	for(p=a;p<a+10;p++)
		printf("%d",*p);
	printf("\n");
}
