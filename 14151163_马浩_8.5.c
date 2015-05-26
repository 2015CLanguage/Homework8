#include<stdio.h>
int main()
{
	int i,k,m,n,num[100],*p;
	printf("一共有多少人？");
	scanf("%d",&n);
	p=num;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+i)!=0)
			k++;
		if(k==3)
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)
			i=0;
	}
	while(*p==0)
		p++;
	printf("最后一个是第%d个\n",*p);
	return 0;
}
