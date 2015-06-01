#include"stdio.h"
void move(int a[], int m,int n);
int main()
{
	int i,n,m,a[80],*p;
	p=a;
	printf("共有多少数?\n");
	scanf("%d",&n);
	printf("移动位数?\n");
	scanf("%d",&m);
	printf("请输入原数据\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}

	move(a,m,n);

	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
}

void move(int a[],int m,int n)
{
	int i,temp;
	temp=*(a+n-1);
	for(i=n-1;i>0;i--)
	{
		*(a+i)=*(a+i-1);
	}
	*(a)=temp;
	m--;
	if(m!=0)
		move(a,m,n);
}
