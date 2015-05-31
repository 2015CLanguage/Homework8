#include "stdio.h"

void change(int [20],int n ,int m);

int main()
{
	int n,m,s[20],temp=0,i;
	while(temp==0)
	{
		printf("Please input 'n','m'.(n<=20,m<=n)\n");
		scanf("%d,%d",&n,&m);
		if(n<=20 && m<=n) temp=1;
	}
	printf("Please input %d numbers.\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	change(s,n,m);
	for(i=0;i<n;i++)
	{
		printf("%5d",s[i]);
	}
	printf("\n");
	return 0;
}
void change(int s[20],int n ,int m)
{
	int *p,e;
	e=*(s+n-1);
	for(p=s+n-1;p>s;p--)
	{
		*p=*(p-1);
	}
	*s=e;
	m--;
	if(m>0) change(s,n,m);
}
