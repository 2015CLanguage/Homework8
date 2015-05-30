#include<stdio.h>
void input(int * );
void solve(int * );
void output(int *);
int main()
{
	int s[10];
	input(s);
	solve(s);
	output(s);
	return 0;
}
void input(int * s)
{
	int i;
	printf("请输入10个整数：\n");
	for(i=0;i<10;i++)
	{
		printf("s[%d]=",i);
		scanf("%d",&s[i]);
	}
}

void solve(int * s)
{
	int * max,* min,* p,temp;
	max=min=s;
	for(p=s+1;p<s+10;p++)
	if(* p> * max)
	max=p;
	else if(* p< * min)
		min=p;
	temp=s[0];
	s[0]=* min;
	* min=temp;
	temp=s[9];s[9]=* max;* max=temp;
}
void output(int * s)
{
	int * p;
	printf("现在它们的顺序是：");
	for(p=s;p<s+10;p++)
		printf("%d",*p);
	printf("\n");
}
