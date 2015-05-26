#include"stdio.h"
void inp(int *p);
void process(int a[],int *p);
void output(int a[]);
int main()
{
	int a[10],*p;
	printf("please input ten numbers\n");
	p=a;
	inp(p);
	process(a,p);
	output(a);
} 
void inp(int *p)
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	printf("end\n");
}

void process(int a[10],int *p)
{
	int i,j,temp;
	temp=*(a);
	for(i=0;i<10;i++)
	{
		if(temp<*(a+i))
		{
			j=i;
		}
	}
	temp=*(a+9);
	*(a+9)=*(a+j);
	*(a+j)=temp;
	for(i=0;i<10;i++)
	{
		if(temp>*(a+i))
		{
			j=i;
		}
	}
	temp=*(a);
	*(a)=*(a+j);
	*(a+j)=temp;
}

void output(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	} 
}
