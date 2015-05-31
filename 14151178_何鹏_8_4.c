#include <stdio.h>
void change(int *p1,int *p2,int m,int n);
int main()
{
	int a[100],b[100];
	int *p1,*p2;
	p1=a;p2=b;
	int m,n,i;
	printf("请按顺序输入n和m:\n");
	scanf("%d%d",&n,&m);
	printf("请输入%d个数:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	change(p1,p2,m,n);
	for(i=0;i<n;i++)
	{
		printf("%5d",b[i]);
	}
	return 0;
}
void change(int *p1,int *p2,int m,int n)
{
	int i;
	for(i=0;i<n-m;i++)
	    *(p2+i+m)=*(p1+i);
	for(i=0;i<m;i++)
	    *(p2+i)=*(p1+n-m+i);
}
