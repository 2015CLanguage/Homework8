#include<stdio.h>
void main()
{
	void input(int *);
	void change(int *);
	void output(int *);
	int a[10];
	input(a);
	change(a);
	output(a);
}
void input(int *p)
{
	int i;
	printf("输入十个数字:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",p++);
	}
}
void change(int *p)
{
	int *max, *min, *p0, t;
	max = min = p;
	for (p0 = p + 1; p0 <= p + 9; p0++)
	{
		if (*p0>*max)
			max = p0;
		else if (*p0< *min)
			min = p0;
	}
	t = *p; *p = *min; *min = t;
	if (max == p)
	{
		max = min;
	}
	t = *(p + 9); *(p + 9) = *max; *max = t;
}
void output(int *p)
{
	int *p0;
	printf("经过转化的数组是:\n")
	for (p0 = p; p0 <= p + 9; p0++)
		printf("%3d", *p0);
	printf("\n");
}
