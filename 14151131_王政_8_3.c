#include<stdio.h>
void input(int *n);
void calculate(int *n);
void output(int *n);
void input(int *n)
{
	int i;
	printf("请依次输入10个整数.\n");
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个整数:",i+1);
		scanf("%d",&n[i]);
	}
	printf("这10个整数依次为:");
    for(i=0;i<10;i++)
	{
		printf("%d,",n[i]);
	}
	printf("\n");
}
void calculate(int *n)
{
	int *min,*max,*p,t;
	min=max=n;
	for(p=n+1;p<n+10;p++)
	{
		if(*p<*min)
		{
			min=p;
		}
		else if(*p>*max)
		{
			max=p;
		}
	}
	t=n[0];
	n[0]=*min;
	*min=t;
	if(max==n)
	{
		max=min;
	}
	t=n[9];
	n[9]=*max;
	*max=t;
}
void output(int *n)
{
	int *p;
	printf("经过处理后，这10个整数顺序为:");
	for(p=n;p<n+10;p++)
	{
		printf("%d,",*p);
	}
	printf("\n");
}
int main()
{
	int n[10];
	input(n);
    calculate(n);
    output(n);
	return 0;
}
