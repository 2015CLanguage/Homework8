#include<stdio.h>
int a[10];
int main()
{	void input(int *);
    int max_min_value(int *);
	void output(int *);
    input(a);
	max_min_value(a);
	output(a);
	return 0;
}
void input(int *a)
{
	int i;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
       scanf("%d",&a[i]);
}
int max_min_value(int *a)
{
	int *max,*min,i,t;
	max=min=a;
	for(i=1;i<10;i++)
		if(a[i]>*max)
			max=&a[i];
	t=a[9];a[9]=*max;*max=t;
    for(i=1;i<10;i++)
		if(a[i]<*min)
			min=&a[i];
	t=a[0];a[0]=*min;*min=t;
	return 0;
}
void output(int *a)
{
	int i;
	printf("变换顺序后的10个数是：");
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
}
