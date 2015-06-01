#include<stdio.h>
int main()
{
	int i,k,m,n,number[100],*p;
	printf("请输入游戏人数:");
	scanf("%d",&n);
	p=number;
	for(i=0;i<n;i++)
		*(p+1)=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+1)!=0)
			k++;
		if(k==3)
		{
			*(p+1)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)
			i=0;
	}
	while(*p==0)
		p++;
	printf("最后剩下的人是:%d\n",*p);
	return 0;
}
