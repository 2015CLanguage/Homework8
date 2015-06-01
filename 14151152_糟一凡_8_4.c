#include<stdio.h>
void transform(int *x,int N,int M);
int main()
{
	int a[30], i,m,n,j;
	printf("请输入整数个数：");
	scanf("%d",&n);
	printf("请输入n个整数：");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("请输入后移个数：");
	scanf("%d",&m); 
	transform(a,n,m);
	printf("调整后的n个整数为："); 
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	return 0;	
}
void transform(int *x,int N,int M)
{
	int i,temp,j;
	for(i=0;i<M;i++)
	{
		temp=x[N-1];
		for(j=N-1;j>0;j--)
		{
			x[j]=x[j-1];
		}
		x[0]=temp;
	}	
}
