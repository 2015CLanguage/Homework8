#include <stdio.h>

void get(int *);
void solve(int *);
void print(int *);
int main()
{
	int s[10];
	get(s);
	solve(s);
	print(s);
	return 0;
}
void get(int *number)
{
	int i;
	printf("Please enter 10 numbers.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&number[i]);
	}
}
void solve(int *number)
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
	printf("The new:\n");
	for(i=number;i<number+10;i++)
	{
		printf("%5d",*i);
	}
	printf("\n");
}
