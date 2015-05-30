#include<stdio.h>
void move(int a[100],int n,int m);
int main()
{	
	printf("请输入要输入数字的个数n(n<100)：\n");
	int i,a[100],n,m;
	scanf("%d",&n);
	printf("请输入%d个数字：\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%-5d",a[i]);
	printf("\n请输入后移位数m：\n");
		scanf("%d",&m);
	move(a,n,m);
	printf("后移%d位为:\n",m);
	for(i=0;i<n;i++)
		printf("%-5d",a[i]);
	printf("\n");
	return 0;
}
void move(int a[100],int n,int m)
{
	int *p,a_end;
	a_end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=a_end;
	m--;
	if(m>0)
		move(a,n,m);
}
