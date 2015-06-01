#include<stdio.h>
#include<stdlib.h>
void main()
{
	int m,n;
	void jieguo(int m,int n);
	printf("共有人数：");
	scanf("%d",&m);
	printf("报数:");
	scanf("%d",&n);
	jieguo(m,n);
}
void jieguo(int m,int n)
{
	int i,j,c=0,a[100];
	for(i=0;i<m;i++)
		a[i]=i+1;
	for(j=1,i=0;i<m+1;i++,j++)
	{
		if(j==n)
		{
			printf(" %d",a[i]);
			j=0;
			c++;
			a[i]=0;
		}
		if(c%10==0)printf("\n");
		if(i==m)
		{
			i=0;
			while(a[i]==0)
				i++;
		}
		if(c==m)
		{
			printf("\n活下来的是：%d",i+1);
			exit(0);
		}
	}
}
