#include"stdio.h"
int main()
{
	int a[100],i,j,n,m;
	printf("how many people?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=i+1;
	m=0;i=0,j=0;
	while(m<n-1)
	{
		if(a[i]!=0) j++;
		if(j==3)
		{
			a[i]=0;
			j=0;
			m++;
		}
		i++;
		if(i==n) i=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
				printf("the last people is num %d",a[i]);
	}
} 
