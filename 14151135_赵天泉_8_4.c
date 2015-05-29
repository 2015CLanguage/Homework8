#include<stdio.h>
void move(int *p,int n,int m);
int main()
{
	int a[20],n,m,i;
	printf("请输入整数个数n:");
	scanf("%d",&n);
	printf("请输入%d个数字:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("请输入向后移动的个数m:");
	scanf("%d",&m);
	move(a,n,m);
	printf("移动后的数字为：");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}
void move(int a[20],int n,int m)
{
	int end,*p;
	end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=end;
	m--;
	if (m>0)
		move(a,n,m);
}
