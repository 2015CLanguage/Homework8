#include"stdio.h"
void main()
{
	int n,i,*p,s[50],k,m;
	printf("输入n\n");
	scanf("%d",&n);
	p=s;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{
		if(*(p+i)!=0)
		{k++;}
		if(k==3)
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n) i=0;
	}
	while(*p==0)
	{p++;}
	printf("最后的数为第%d个\n",*p);

	

}
