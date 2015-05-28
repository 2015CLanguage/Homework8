#include<stdio.h>
void change(int a[50],int x,int y);
void main()
{
	int a[50],n,m,i;
	printf("请输入数字总个数n\n");
	scanf("%d",&n);
	printf("请输入%d个数字\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("请输入移动距离m\n");
	scanf("%d",&m);
	change(a,n,m);           //函数调用
	printf("转换后为\n");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	printf("\n");
}
void change(int a[50],int x,int y) 
{
	int *p,k;
	k=*(a+x-1);                      //向后移动一位
	for(p=a+x-1;p>a;p--)
		*p=*(p-1);
	*a=k;
	y--;
	if(y>0)
		change(a,x,y);        //函数的递归调用
}
