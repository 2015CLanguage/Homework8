#include<stdio.h>
void input(int num[10])
{
	int *p,i;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}
void maxmin(int num[10])
{
	int *p,j,t,*max,*min;
	max=min=num;
	for(p=num+1;p<num+10;p++)
    if(*p>*max)
	   max=p;
	else if(*p<*min)
	{min=p;}
  
		t=num[0];num[0]=*max;*max=t;
		t=num[9];num[9]=*min;*min=t;

}
void output(int num[10])
{
	int *p;
	for(p=num;p<num+10;p++)
		printf("%d\n",*p);
}
 main()
{
	void input(int *);
	void maxmin(int *);
	void output(int *);
	int number[10];
	input(number);
	maxmin(number);
	output(number);
}
