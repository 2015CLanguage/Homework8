#include<stdio.h>
int main()
{
	void change(int a[10],int,int);
	int a[10],i,m,n;
	printf("请输入10个数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("后移几个位置？");
	scanf("%d",&n);
	change(a,m,n);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void change(int a[10],int m,int n)
{
	int *p,end;
	end=*a+m-1;
	for(p=a+m-1;p>a;p--)
		*p=*(p-1);
	*a=end;
	m--;
	if(m>0)
		change(a,m,n);
}
