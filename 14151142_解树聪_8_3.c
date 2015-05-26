#include<stdio.h>
void input(int *);
void solve(int *);
void output(int *);
int main()
{
	int a[10];
	input(a);
	solve(a);
	output(a);
	return 0;
}
void input(int *a)
{
	int i;
	printf("请输入10个整数:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}
void solve(int *a)
{
	int *p,*max,*min,k,t;
	max=min=a;
	for(p=a+1;p<a+10;p++)
	{
		if(*p>*max)
			max=p;
		else if(*p<*min)
			min=p;
	}
	k=a[0];
	a[0]=*min;
	*min=k;
	
	t=a[9];
	a[9]=*max;
	*max=t;
	
}
void output(int *a)
{
	int *p;
	printf("顺序为：");
	for(p=a;p<a+10;p++)
		printf("%4d",*p);
	printf("\n");
}
