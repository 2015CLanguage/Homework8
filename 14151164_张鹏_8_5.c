#include<stdio.h>
int main()
{
	int i,s,m,n,a[50],*t;
	printf("输入人数:");
	scanf("%d",&n);
	t=a;
	for(i=0;i<n;i++)
		*(t+i)=i+1;
	i=0;s=0;m=0;
	while(m<n-1)
	{
		if(*(t+i)!=0)
			s++;
		if(s==3)
		{
			*(t+i)=0;
			s=0;
			m++;
		}
		i++;
		if(i==n)
			i=0;
	}
	while(*t==0)
		t++;
	printf("剩余人是第 %d 个\n",*t);
	return 0;
}
