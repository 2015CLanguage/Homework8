#include <stdio.h>
int main ()
{
	void move(int [100],int,int);
	int a[100],m,n,i;
	printf("多少个数");
	scanf("%d",&n);
	printf("输入%d个数\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("移动多少位：");
	scanf("%d",&m);
	move(a,n,m);
	printf("结果为\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	return 0;
}

void move(int a[100],int n,int m)
{
	int * x,y;
	y=* (a+n-1);
	for(x=a+n-1;x>a;x--)
		* x=*(x-1);
	* a=y;
	m--;
	if (m>0) 
		move(a,n,m);
}
