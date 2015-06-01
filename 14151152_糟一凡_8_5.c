#include<stdio.h>
void quit(int *x,int N);
int main()
{
	int n,a[30],i,j;
	printf("请输入一圈的人数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	for(j=0;j<n-1;j++)
	{
		quit(a,n-j);
	}
	printf("最后留下的是原来%d号的那位",a[0]);
	return 0;
}
void quit(int *x,int N)
{
	int i;
	if(N>2)
	{
	    for(i=0;i+3<N;i++)
	    {
		    x[2+i]=x[3+i];
	    }
	}
	else
	{
		x[0]=x[1];
	}
}
