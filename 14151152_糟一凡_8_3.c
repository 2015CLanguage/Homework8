#include<stdio.h>
#define N 10 
void input(int *r)
{
	int i;
	printf("请输入10个整数：");
	for(i=0;i<N;i++)
	{
		scanf("%d",r+i);
	}
	printf("\n");
}
void transform(int *p)
{
	int *x;
	x=p;
	int max=*x, min=*x, j, *flag1, *flag2, temp1,temp2;
	flag2=x;
	flag1=x+N-1;
	for(j=1;j<N;j++)
	{
		if(*(x+j)>max)
		{
			max=*(x+j);
			flag1=x+j;
		}
		if(*(x+j)<min)
		{
			min=*(x+j);
			flag2=x+j;
		}
	}
	temp1=*p;
	*p=*flag2;
	*flag2=temp1;
	temp2=*(p+N-1);
	*(p+N-1)=*flag1;
	*flag1=temp2;
}
void output(int *q)
{
	int k;
	printf("排列后的10个数为：");
	for(k=0;k<N;k++)
	{
		printf("%d ",*(q+k));
	}
}
int main()
{
	int a[N];
	input(a);
	transform(a);
	output(a);
	return 0;
}
