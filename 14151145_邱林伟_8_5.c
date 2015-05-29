#include<stdio.h>
void main()
{
	int i,a[100],n,m,*p,k,s=0,answer;
	printf("请输入n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=i+1;
	p=a;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+s)!=0)
		k=k+1;
		if(k==3)
		{*(p+s)=0;
		k=0;
		m=m+1;}
		s=s+1;
		if(s==n)
			s=0;
	}
	for(p=a;p<a+n;p++)
	{
		if(*p!=0)
			answer=*p;}
	printf("是%d号\n",answer);
}

