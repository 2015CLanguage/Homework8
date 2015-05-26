#include<stdio.h>
void input(int *a,int n);
void deal(int *a,int n);
void output(int *a,int n);
void main()
{
	int a[10];
	input(a,10);
	deal(a,10);
	output(a,10);
}
void input(int *a,int n)
{
    int *p=a,i;
	for(i=0;i<n;i++,p++)
		scanf("%d",p);
	printf("换序前序列为：\n");
	for(i=0;i<n;i++,p++)
		printf("%3d",*p);
	printf("\n");
}
void deal(int *a,int n)
{
	int min=*a,max=*a,lmin=0,lmax=0,i,*p=a,t;
    for(i=0;i<n;i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
			lmax=i;
		}
		else if(*(p+i)<min)
		{
			min=*(p+i);
			lmin=i;
		}
	}
    t=*(p+lmin);
	*(p+lmin)=*p;
	*p=t;
	t=*(p+lmax);
	*(p+lmax)=*(p+n-1);
	*(p+n-1)=t;
}
void output(int *a,int n)
{
	int *p=a,i;
	printf("换序后整数序列为\n",*p);
	for(i=0;i<n;i++,p++)
		printf("%3d",*p);
	printf("\n");
}
