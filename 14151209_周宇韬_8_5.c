int main()
{
	void name(int a[],int n);
	void game(int a[],int n);
	int n;
	printf("多少人游戏?");
	scanf("%d",&n);
	int a[n];
	name(a,n);
	game(a,n);
	return 0;
}
#include <stdio.h>
void name(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		a[i]=i+1;
	}
}

void game(int a[],int n)
{
	int *p,i=0,k=0,m=0;
	p=a;
	while(m<(n-1))
	{
		if (*(p+i)!=0) k++;
		if (k==3)
		{
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if (i==n) i=0;
	}
	while (*p==0) p++;
	printf("剩下的人是:%d",*p);
}
