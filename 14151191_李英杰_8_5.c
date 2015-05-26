#include<stdio.h>
void main()
{
	int a[50],i,j,*p,n,left;
	printf("总人数:");
	scanf("%d",&n);
    p=a;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=j=0;
	left=n;
	while(left>1)
	{
		if(*(p+i)!=0) j++;
		if(j==3)
		{
			*(p+i)=0;
			j=0;
			left--;
		}
		i++;
		if(i==n) i=0;
	}
	while(*p==0)
		p++;
	printf("剩下的人是：第%d个\n",*p);
}
