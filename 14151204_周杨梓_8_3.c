#include<stdio.h>
void input(int *);
void exchange(int *);
void output(int *);
int main()
{
	int a[10];
	input(a);
	exchange(a);
	output(a);
	return 0;
}
void input(int *a)
{
	int i;
	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void exchange(int *a)
{
	int * max,* min,* p,temp;
	max=min=a;
	for(p=a+1;p<a+10;p++)
	if(* p>* max)
	{
		max=p;
	}
	else if(* p<* min)
	{
		min=p;
	}
	temp=a[0];
	a[0]=* min;
	* min=temp;
	if(max=a)
	{
		max=min;
	}
	temp=a[9];
	a[9]=* max;
	* max=temp;
}
void output(int * a)
{
	int * p;
	printf("处理后的十个数为:\n");
	for(p=a;p<a+10;p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
}
