#include<stdio.h>
void input(int * p)
{
	int i;
	for(i=0;i<10;i++)
		scanf("%d",p+i);
}
void exchange(int * p)
{
	int * max,* min,* a,temp;
	max=min=p;
	for(a=p+1;a<p+10;a++)
	{
		if(* a<* min) min=a;
		temp=* p;* p=* min;* min=temp;
	}
	for(a=p+1;a<p+10;a++)
	{
		if(* a> * max) max=a;
		temp=* (p+9);* (p+9)=* max;* max= temp; 
	}
}
void print(int * p)
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",* (p+i));
}
int main()
{
	int a[10];
	input(a);
	exchange(a);
	print(a);
}
