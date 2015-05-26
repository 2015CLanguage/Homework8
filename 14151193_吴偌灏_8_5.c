#include<stdio.h>
void main()
{
	int i,k,m,n,a[100];int *p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)*(p+i)=i+1;
	i=k=m=0;
	while(m<n-1)
	{
		if(*p!=0)k++;
		if(k==3){*(p+i)=0;k=0;m++;}
		i++;
		if(i==n)i=0;
	}
    while(*p==0)p++;
	printf("%d\n",*p);
}
