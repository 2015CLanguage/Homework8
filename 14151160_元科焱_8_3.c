#include <stdio.h>
int main ()
{
	void input(int *);
	void change(int *);
	void printf(int *);
	int a[10];
	input(a);
	change(a);
	printf(a);
	return 0;
}

void input(int * a)
{
	int i;
	printf("input 10 numbers:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
}

void change(int * a)
{
	int * max, * min, * x,  o;
	max=min=a;
	for(x=a+1;x<a+10;x++)
		if( * x > * max )
			max=x;
		else if( * x < * min )
			min=x;
		o=a[0];
		a[0]= * min;
		* min=o;
		if (max==a)
			max=min;
		o=a[9];
		a[9]= * max;
		* max=o;
}

void printf(int * a)
{
	int * x;
	printf("the answer:\n");
	for(x=a;x<(a+10);x++)
		printf("%d", * x);
}

