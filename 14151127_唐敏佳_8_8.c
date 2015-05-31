#include "stdio.h"

int main()
{
	int n,i,j,k,s[20],*p;
	p=s;
	printf("Please input 'n'.\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		*(p+i)=i+1;
	}
	i=0;//退出的总人数初值为0
	j=0;//每次报数的计数变量初值为0
	k=0;//循环1，2，3的变量
	while(i<n-1)
	{
		if(*(p+j)!=0) k++;
		if(k==3)
		{
			*(p+j)=0;
			i++;
			k=0;
		}
		j++;
		if(j==n) j=0;
	}
	while(*p==0) p++;
	printf("The last one is the %dth .\n",*p);
	return 0;
}
