#include<stdio.h>
int num[10]={0};
void ru(int *);
void chu(int *);
void main()
{
    
	ru(num);
    int *min,*max,*m,*n,t,h;
	max=min=num;
	for(m=num+1;m<num+10;m++)
	{
		if(*m>*max)
		{
			max=m;
		}
	}
	t=num[9];
	num[9]=*max;
	*max=t;
    for(n=num+1;n<num+10;n++)
	{
		if(*n<*min)
		{
			min=n;
		}
	}
	h=num[0];
	num[0]=*min;
	num[0]=h;
	chu (num);
}
void ru(int *num)
{
	int *s;
	for(s=num;s<num+10;s++)
	{
		scanf("%d,",s);
	}
	printf("\n");
}
void chu(int *num)
{
	int *f;
	for(f=num;f<num+10;f++)
	{
		printf("%d\n",*f);

	}
}
