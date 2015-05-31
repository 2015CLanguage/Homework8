#include"stdio.h"
void input(int *);
void output(int *);
void swap(int *);
void main()
{
	int number[10];
	input(number);
	swap(number);
	output(number);


}

void input(int *number)
{
	int i;
	printf("请输入10个整数\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}

}

void swap(int *number)
{
	int *max,*min,*p,temp;
	max=min=number;
	for(p=number+1;p<number+10;p++)
	{
		if(*p>*max) max=p;
		else if(*p<*min) min=p;
		temp=number[0];
		number[0]=*min;
		*min=temp;
		if(max==number) max=min;
        temp=number[9];
		number[9]=*max;
		*max=temp;
	}

}

void output(int *number)
{
	int *p;
	printf("交换之后:\n");
	for(p=number;p<number+10;p++)
		printf("%4d",*p);
	printf("\n");

}

