
#include<stdio.h>
void deal(int *p,int m,int n)
{
	int i;int a[100]={0};
	for(i=0;i<n;i++)
	{
		a[i]=*(p+i);
	}
	for(i=n;i>=0;i--)
	{
		if(m+i<n)*(p+m+i)=a[i];
		else *(p+m+i-n)=a[i];
	}
}
void main()
{
	int i,m,n,a[100]={0};int *p;
	p=&a[0];
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	deal(p,m,n);
	for(i=0;i<n;i++)
	{
		printf("%-5d",*(p+i));
	}
}
