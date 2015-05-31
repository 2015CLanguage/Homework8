#include<stdio.h>
void remove(int a[40], int n, int m);
int main()
{
    int a[40],n,m,i;
    printf("请输入要输入的数的个数:\n");
    scanf("%d",&n);
    printf("请输入这%d个数:\n",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("请输入想要移动的位数:\n");
	scanf("%d",&m);
	remove(a,n,m);
	printf("移动后的%d个数顺序为:",n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
void remove(int a[40],int n,int m)
{
	int * p,b;
	b=* (a+n-1);
	for(p=a+n-1;p>a;p--)
	{
		* p=* (p-1);
	}
	* a=b;
	m--;
	if(m!=0)
	{
		remove(a,n,m);
	}
}
