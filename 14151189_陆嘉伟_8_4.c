#include<stdio.h>
int main()
{
void fun(int a[],int n);
int a[100],n,i;
printf("共有多少数？");
scanf("%d",&n); 
printf("输入%d个数:",n);
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
fun(a,n);
for(i=0;i<n;i++)
	printf("%5d",a[i]);
return 0;
}

void fun(int a[],int n)
{
int m,*p,t,i;
printf("调整数的个数：");
scanf("%d",&m);
for(i=0;i<m;i++)
{
t=*(a+n-1);
for(p=a+n-1;p>a;p--)
	*p=*(p-1);
*a=t;
}
}
