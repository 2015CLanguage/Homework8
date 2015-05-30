#include<stdio.h>
int main()
{
    void input(int *);
    void change(int *);
    void output(int *);
	int x[10],y[10];
    input(x);
	change(x);
	output(x);
	return 0;
}

void input(int *x)
{
	int i;
	printf("请输入十个正整数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&x[i]);
}

void change(int *x)
{
	int y[10];
	int *p,*o,*q;
	o=y-1;
	for(p=x;p<(x+10);p++)
	{
		o=o+1;
		*o=*p;
	}
    q=x-1;
    for(p=(x+3);p<(x+10);p++)
	{
		q=q+1;
		*q=*p;
	}
	for(o=y;o<(y+3);o++)
	{
		q=q+1;
		*q=*o;
	}
    
}

void output(int *x)
{
	int *q;
	printf("变换位置之后的数组为：\n");
	for(q=x;q<(x+10);q++)
		printf("%d\n",*q);
}
