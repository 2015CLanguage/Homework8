#include<stdio.h>
void input(int *number);
void max_min(int *number);
void output(int *number);
int main()
{
	int number[10];
    input(number);
	max_min(number);
	output(number);
	return 0;
}
void input(int *number)
{
	int i;
	printf("input 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&number[i]);
}
void max_min(int *number)
{
	int *min,*max,t,*p;
	max=min=number;
	for(p=number+1;p<number+10;p++){
		if(*p<*min)
			min=p;
		else if(*p>*max)
			max=p;
	}
	t=number[0];
	number[0]=*min;
	*min=t;
	if(max==number)
		max=min;
	t=number[9];
	number[9]=*max;
	*max=t;
}
void output(int *number)
{
	int *p;
	printf("now,theu are:\n");
	for(p=number;p<number+10;p++)
		printf("%3d",*p);
	printf("\n");

}
