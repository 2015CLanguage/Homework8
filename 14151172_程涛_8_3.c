#include<stdio.h>
void input(int *x)
{
	int i;
	printf("请输入数组：");
	for(i=0;i<10;i++)
		scanf("%d",x+i);
}
void change(int *x,int *p,int *q)
{
	int i,temp;
	for(i=0;i<10;i++)
	{
		if(*(x+i)<*p){
			temp=*p;
			*p=*(x+i);
			*(x+i)=temp;
		}
		if(*(x+i)>*q)
               {
		    temp=*q;
		    *q=*(x+i);
		    *(x+i)=temp;
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
        change(x,p,q);
	output(x);
}
