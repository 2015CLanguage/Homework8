#include "stdio.h"
void input(int *num)                 //输入函数
{
	int *i;
	printf("输入十个整数:\n");
	for (i = num; i<num + 10; i++)
	{
		scanf_s("%d", i);
	}
}
void solution(int *num)                         //处理函数
{
	int *max, *min, t;
	min = num;
	for (int *i = num + 1; i<num + 10; i++)
	{
		if (*i<*min)
		{
			t = *min;
			*min = *i;
			*i = t;
		}
	}
	max = num + 9;
	for (int *j = num; j<num + 9; j++)
	{
		if (*j>*max)
		{
			t = *max;
			*max = *j;
			*j = t;
		}
	}
}
void output(int *num)                                  //输出函数
{
	int *i;
	printf("变换后为:\n");
	for (i = num; i<num + 10; i++)
	{
		printf("%d\t", *i);
	}
}
void main()
{
	int num[10];
	input(num);                                          //调用函数
	solution(num);
	output(num);
}
