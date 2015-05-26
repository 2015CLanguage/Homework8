#include<stdio.h>
void input(int *p)
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
}
void deal(int *p)
{
	int i,j,max,min,t;	
	for(i=0,min=*p,j=0;i<10;i++)
	{	
		if(*(p+i)<min){min=*(p+i);j=i;}
		printf("%d\n",min);
	}
	t=*p;*p=min;*(p+j)=t;
	for(i=0,max=*p,j=0;i<10;i++)
	{	
		if(*(p+i)>max){max=*(p+i);j=i;}	printf("%d\n",max);
	}
	t=*(p+9);*(p+9)=max;*(p+j)=t;
}
void output(int *p)
{
	int i;
	for(i=0;i<10;i++){printf("%5d",*(p+i));}
}
void main()
{
	int a[10]={0};int *p;
	p=a;
	input(p);
	deal(p);
	output(p);
}
