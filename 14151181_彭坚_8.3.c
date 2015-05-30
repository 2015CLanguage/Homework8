#include<stdio.h>
int main()
{
	void input(int *);
	void deal(int *);
	void output(int *);
	int x[10];
	input(x);
	deal(x);
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

void deal(int *x)
{
	int temp,*max,*min,*p;
	max=min=x;
	for(p=(x+1);p<(x+10);p++)
	{
		if(*p<*min)
			min=p;
	}
    temp=x[0];x[0]=*min;*min=temp;
	for(p=(x+1);p<(x+10);p++)
	{
		if(*p>*max)
			max=p;
	}
	temp=x[9];x[9]=*max;*max=temp;
}

void output(int *x)
{
	int *p;
	printf("调整后的数组为：\n");
	for(p=x;p<(x+10);p++)
		printf("%d\n",*p);
	
}
