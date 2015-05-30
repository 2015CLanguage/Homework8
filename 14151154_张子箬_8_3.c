#include<stdio.h>
void input(int *a)
{
	printf("请输入10个数：");
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}
void change(int *a)
{
	int *p1,*p2,p,k,m;
	p1=&a[0];
	for(k=0;k<9;k++)
	{
		if(*p1>a[k+1])
			p1=&a[k+1];          //min=*p1
	}
	p=a[0];                     //与第一个数对换
	a[0]=*p1;
	*p1=p;

	p2=&a[0];
	for(m=0;m<9;m++)
	{
		if(*p2<a[m+1])
			p2=&a[m+1];
	}
	p=a[9];
	a[9]=*p2;
	*p2=p;
}
void output(int *a)
{
	int i;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main()
{
	void output(int *a);
	void input(int *a);
	void change(int *a);
	int a[10];
	input(a);
	change(a);
	output(a);
	return 0;
}
