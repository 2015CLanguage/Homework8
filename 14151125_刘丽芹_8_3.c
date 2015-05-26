#include <stdio.h>

int main()
{
	int num[20],n,m,i;
	void yidong(int [20],int,int);
    printf("共有多少个数?\n");
	scanf("%d",&n);
	printf("请输入%d个整数\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
    printf("请输入要后移多少位置:\n");
	scanf("%d",&m);
	yidong(num,n,m);
	printf("变化后他们的顺序为:\n");
	for(i=0;i<n;i++)
		printf("%5d",num[i]);
	printf("\n");	
	return 0;
}
void yidong(int num[20],int n,int m)
{
	int *pointer,num_end;
	num_end=num[n-1];
	for(pointer=num+n-1;pointer>num;pointer--)
		*pointer=*(pointer-1);
	*num=num_end;
	m--;
	if(m>0)
		yidong(num,n,m);
}
