#include<stdio.h>
void input(int *x)
{
	int i;
	puts("please input datas:");
	for(i=0;i<10;i++)
		scanf("%d",x+i);
}
void deal(int *x,int *p,int *q)
{
	int i,t;
	for(i=0;i<10;i++)
	{
		if(*(x+i)<*p){
			t=*p;
			*p=*(x+i);
			*(x+i)=t;
		}
		if(*(x+i)>*q){
		    t=*q;
			*q=*(x+i);
			*(x+i)=t;
		}
	}
}
void output(int *x)
{
	int i;
	for(i=0;i<10;i++)
		printf("%d\n",*(x+i));
}
void main()
{
	int a[10];
	int *p,*q,*x=a;
	p=a;
	q=&a[9];
	input(x);
    deal(x,p,q);
	puts("the result is:");
	output(x);
}




