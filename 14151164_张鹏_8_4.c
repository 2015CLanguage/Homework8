#include <stdio.h>
int main ()
{
	void c(int [50],int,int);
	int a[50],m,n,i;
	printf("总数");
	scanf("%d",&n);
	printf("输入%d个数\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("移动位数：");
	scanf("%d",&m);
	c(a,n,m);
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	return 0;
}

void c(int a[50],int n,int m)
{
	int * s,t;
	t=* (a+n-1);
	for(s=a+n-1;s>a;s--)
		* s=*(s-1);
	* a=t;
	m--;
	if (m>0)
		c(a,n,m);
}
