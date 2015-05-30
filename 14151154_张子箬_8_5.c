#include<stdio.h>
int main()
{
	int i,k,m,n,a[100],*p;
	printf("几个人？n=");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+1)!=0)
			k++;
		if(k==3)
		{*(p+i)=0;
		 k=0;
		 m++;}
		i++;
		if(i==n)
			i=0;
	}
	while(*p==0)
		p++;
	printf("最后一个人是第%d\n",*p);
	return 0;
}

