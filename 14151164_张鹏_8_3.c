#include<stdio.h>
int a[10];
int main()
{	void input(int *);
    int max_min_v(int *);
	void output(int *);
    input(a);
	max_min_v(a);
	output(a);
	return 0;
}
void input(int *a)
{
	int i;
	for(i=0;i<10;i++)
       scanf("%d",&a[i]);
}
int max_min_v(int *a)
{
	int *max,*min,i,s;
	max=min=a;
	for(i=1;i<10;i++)
		if(a[i]>*max)
			max=&a[i];
	s=a[9];a[9]=*max;*max=s;
    for(i=1;i<10;i++)
		if(a[i]<*min)
			min=&a[i];
	s=a[0];a[0]=*min;*min=s;
	return 0;
}
void output(int *a)
{
	int i;
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
	printf("\n");
}
