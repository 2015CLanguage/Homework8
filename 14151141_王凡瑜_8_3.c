#include<stdio.h>

void Input(int *p);
void Output(int *p);

void main()
{
	int a[10];
	Input(a);
	Process(a);
	Output(a);
}

void Input(int *p)
{
	printf("Please input 10 integrals.\n");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",p);
		p++;
	}
}

void Output(int *p)
{
	printf("The processed numbers are:.\n");
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",*p);
		p++;
	}
	printf("\n");
}

void Process(int *p)
{
	int i,max=*p,min=*p,temp;
	p++;
	for(i=1;i<10;i++)
	{
		if(*p>max)
			max=*p;
		if(*p<min)
			min=*p;
		p++;
	}
}
