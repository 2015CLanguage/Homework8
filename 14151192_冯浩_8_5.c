#include<stdio.h>

int main()
{	
	int i,k,m,n,a[50],*p;
	printf("请输入游戏人数n:\n");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;
	k=0;
	m=0;
	while(m<n-1)
	{if(*(p+i)!=0)
		 k++;
	 if(k==3)
	 {*(p+i)=0;
	  k=0;
	  m++;
	 }
	 i++;
	 if(i==n)
		 i=0;
	}
	while(*p==0)
		p++;
	printf("最后胜出的为第%d号!\n",*p);
	return 0;
}
