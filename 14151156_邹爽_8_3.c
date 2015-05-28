#include<stdio.h>
int main()
{
	void input(int *a);
	void sort(int *a);
	void output(int *a);
	int a[10];
	input(a);
	sort(a);
	output(a);
	return 0;
	
}

void input(int *a)
{
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}

void sort(int *a)
{
	int *max,*min,*p,temp;
	max=min=a;
	for(p=a+1;p<a+10;p++)
		if(*p>*max)
			max=p;
		else if(*p<*min)
			min=p;
	temp=*min;*min=a[0];a[0]=temp;
	if(max==a)
		max=min;          //若第一个数是最大数，则max应与其对应
	temp=*max;*max=a[9];a[9]=temp;
}

void output(int *a)
{
	int *p;
	for(p=a;p<a+10;p++)
		printf("%d ",*p);
}
