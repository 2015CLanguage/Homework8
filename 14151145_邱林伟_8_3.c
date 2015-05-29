#include<stdio.h>
void input(int *n);
void min_and_max(int *n);
void output(int *n);
void main()
{
	int a[10];
	input(a);
	min_and_max(a);
	printf("结果是:");
	printf("\n");
	output(a);
}

void input(int *n)
{
	int i;
	printf("请输入十个数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&n[i]);
}

void min_and_max(int *n)
{
	
	int *max,*min,*p,m;
	min=max=n;
	for(p=n+1;p<n+10;p++)
	{if(*p<*min)
	         min=p;}//找出最小数的位置
	m=n[0];n[0]=*min;*min=m;//将它与第一个数交换位置
	for(p=n+1;p<n+10;p++)
	{if(*p>*max)
	         max=p;}//找出最大数的位置
	m=n[9];n[9]=*max;*max=m;//将它与最后一个数交换位置
}

void output(int *n)
{
	int *p;
    for(p=n;p<n+10;p++)
		printf("%d ",*p);
	printf("\n");
}
