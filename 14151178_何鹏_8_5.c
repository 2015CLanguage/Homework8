#include<stdio.h>

int main()
{
	int i,k=0,m=0,n,a[50],*p;
	printf("请输入人数n=");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	while(m<n-1)
	{
		if(*(p+i)!=0) k++;
		if(k==3)
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)i=0;
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]!=0)
	        printf("最后一个是第%d个人\n",a[i]);
    }
	return 0;
