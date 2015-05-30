#include“tdio.h”
int out(int a[20],int);
int a[20];
int main()
{
	int i,n,p;
	printf("n is");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
		a[i]=i;
	p=out(a,n);
	printf("he is %d",p);
	return 0;
}
int out(int a[20],int n)
{
	int k=0,s,*p=a,j=0,t=0;
	while(t<n-1)
	{
		if(*(p+j)!=0)k++;
		if(k==3)
		{
			k=0;t++;*(p+j)=0;
		}
		j++;
		if(j==n)j==0;
	}
	while(*p==0)p++;
	s=*p;
	return s;
}
