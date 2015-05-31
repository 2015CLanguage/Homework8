#include<stdio.h>

int main()
{
	int i,k,m,n,num[50],*p;
	printf("请输入人数n=");
	scanf("%d",&n);

	p=num;

	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;//从1至n编号
	k=0;//报数计时变量
	m=0;//退出人数

	while(m<n-1)//在组人数大于一时，执行循环
	{
		if(*(p+i)!=0) k++;
		if(k==3)//退出的人，编号设为零
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)i=0;//末尾后，i置为0
	}
	
	
	while(*p==0) p++;
	printf("最后一个是第%d个人\n",*p);
	return 0;



}
