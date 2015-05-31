#include<stdio.h>
int main()
{
	int i,k,m,n,a[80],* p;
	printf("请输入参加游戏的人数:\n");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	{
		* (p+i)=i+1;
	}
	i=0;
	k=0;
	for(m=0;m<n-1;)
	{
		if(* (p+i)!=0)
		{
			k++;
		}
		if(k==3)
		{
			* (p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)
		{
			i=0;
		}
	}
	for(;* p==0;p++);
	printf("最后留下的人是第%d号:\n",* p);
	return 0;
}
