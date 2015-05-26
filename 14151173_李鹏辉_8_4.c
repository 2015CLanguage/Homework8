#include<stdio.h>
void input(int *x,int n)
{
	int i;
	puts("please input datas:");
	for(i=0;i<n;i++)
		scanf("%d",x+i);
}
void deal(int *p,int n,int m)
{
	int i,t,j;
	for(i=n-m-1;i>=0;i--)
	{
		for(j=1;j<m+1;j++)
		{
			t=*(p+i+j);
		    *(p+i+j)=*(p+j+i-1);
		    *(p+j+i-1)=t;
		}
	}
}
void output(int *x,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",*(x+i));
}
void main()
{
	int a[100],n,m;
	int *p;
	p=a;	
	puts("please input n:");
	scanf("%d",&n);
	puts("please input m:");
	scanf("%d",&m);
	input(p,n);
    deal(p,n,m);
	puts("the result is:");
	output(p,n);
}




