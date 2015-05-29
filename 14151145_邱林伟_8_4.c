#include<stdio.h>
void main()
{
	void change(int *n,int a,int b);
	int num[100],n,m,i;
	printf("n的值为:");
	scanf("%d",&n);
	printf("请输入这%d个数:\n",n);
    for(i=0;i<n;i++)
	   scanf("%d",&num[i]);
    printf("m的值为:");
	scanf("%d",&m);
	change(num,n,m);
	printf("结果为:\n");
	for(i=0;i<n;i++)
	   printf("%d",num[i]);
	printf("\n");
}

void change(int *n,int a,int b)
{
	int *p;
	for(p=n+a-1;p>=n;p--)
	    *(p+b)=*p;//先将n个数向后挪m位
	for(p=n;p<n+b;p++)
		*p=*(p+a);//再将前m个数变成后m个数的值
}

