#include<stdio.h>
int p[10];
void input(int *p)
{
	printf("输入十个数: ");
	int i;
	for (i=0;i<10;i++)
	{
		scanf("%d",&p[i]);
	}
}
void exchange(int *p)
{
	int *max, *min, *temp,*sign;
	max=min=p;
	for(sign=p+1;sign<p+10;sign++)
	{
		if(*sign>*max)
			max=sign;
		else if(*sign<*min)
			min=sign;
	}

		temp=p[0];
		p[0]=*min;
		*min=temp;
		if(max==p)
			max=min;
		temp=p[9];
		p[9]=*max;
		*max=temp;
}
void output(int *p)
{
	int *sign;
	printf("\n改换后为：");
	for(sign=p;sign<p+10;sign++)
	{
		printf("%5d",*sign);
	}
	printf("\n");
}
void input(int *p);
void exchange(int *p);
void output(int *p);
int main()
{
	input(p);
	exchange(p);
	output(p);
	return 0;
}

