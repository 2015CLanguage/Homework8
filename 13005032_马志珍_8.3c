#include<stdio.h>
void in(int *);
void c(int *);
void out(int *);

int main()
{
	int n[10];
	in(n);//调用输入输出交换函数
	c(n);
	out(n);
	return 0;
}

void in(int *n)//输入函数
{
	int i;
	printf("请输入十个整数:\n");
		for(i=0;i<10;i++)
			scanf("%d",&n[i]);

}

void c(int *n)//交换函数
{
	int *max,*min,*p, t;
	max=min=n;
	for(p=n+1;p<n+10;p++)
		if(*p>*max)
			max=p;
		else if(*p<*min)
			min=p;
	t=n[0];
	n[0]=*min;
	*min=t;

	if(max==n)
		max=min;
	t=n[9];
	n[9]=*max;
	*max=t;



}

void out(int *n)//输出函数
{
	int *p;
	printf("交换后的数列为：\n");
	for(p=n;p<n+10;p++)
		printf("%d ",*p);
	printf("\n");

}
