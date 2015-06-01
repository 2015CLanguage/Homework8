#include <stdio.h>

void input(int *);
void deal(int *);
void print(int *);
int main()
{
	int s[10];
	input(s);
	deal(s);
	print(s);
	return 0;
}
void input(int *number)
{
	int i;
	printf("请输入十个数.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}
}
void deal(int *number)
{
	int *max,*min,i,*p;
	max=min=number;
	for(p=number+1;p<number+10;p++)
	{
		if(*p>*max) max=p;
		else if(*p<*min) min=p;
		i=*min;
		*min=number[0];
		number[0]=i;
		if(max==number){max=min;}
		i=*max;
		*max=number[9];
		number[9]=i;
	}
}
void print(int *number)
{
	int *i;
	printf("处理后变为:\n");
	for(i=number;i<number+10;i++)
	{
		printf("%5d",*i);
	}
	printf("\n");
}
