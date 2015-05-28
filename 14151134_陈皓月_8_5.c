#include<stdio.h>
void main()
{
	int a[100],i,j,k,n,*p;
	printf("请输入人数\n");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)    //为所有人编号
		*(p+i)=i+1;
	i=k=j=0;
	while(j<n-1)
	{
		if(*(p+i)!=0)  
			k=k+1;
		if(k==3)
		{
			*(p+i)=0;  //将取出的人编号变为0
			j=j+1;
			k=0;
		}
		i=i+1;
		if(i==n)   //到最后一号时从头开始
			i=0;
	}
	while(*p==0)
		p=p+1;
	printf("剩余的人是第%d号\n",*p);
}
