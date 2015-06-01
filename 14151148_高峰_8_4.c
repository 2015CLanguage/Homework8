#include<stdio.h>
void change(int number[25],int n,int m);
int main()
{
	int m,n,i,number[25];
	printf("请输入数组长度n=");
	scanf("%d",&n);
	printf("\n请输入后移的距离m=");
	scanf("%d",&m);
	printf("\n请输入n个整数:");
	for(i=0;i<10;i++)
		scanf("%d",number[i]);
	change(number,n,m);
	printf("调换之后：");
	for(i=0;i<n;i++)
		printf("%3d",number[i]);
	printf("\n");
	return 0;
}
void change(int number[25],int n,int m)
{
	int *p,q;
	q=*(number+n-1);
	for(p=number+n-1;p>number;p--)
	{
		*p=*(p-1);
		*number=q;
		m--;
		if(m>0)
			change(number,n,m);
	}
}
