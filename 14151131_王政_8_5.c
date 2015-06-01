#include<stdio.h>
int main()
{
	int a[100],i,j,t,n,*p;
	printf("请输入参与报数的人数:");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	{
		*(p+i)=i+1;
	}
	i=t=j=0;
	while(j<n-1)
	{
		if(*(p+i)!=0)
		{  
			t++;
		}
		if(t==3)
		{
			*(p+i)=0;
			j++;
			t=0;
		}
		i++;
		if(i==n)
		{
			i=0;
		}
	}
	while(*p==0)
	{
		p++;
	}
	printf("最后留下的人是原来第%d号的人.\n",*p);
	return 0;
}
