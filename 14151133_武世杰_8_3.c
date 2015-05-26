#include<stdio.h>
void input(int *number)                       //输入十个数的函数
{
	int i;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
		scanf("%d",&number[i]);
}
void change(int *number)                      //处理函数
{
	int *max,*min,*p,a;
	max=number;
	min=number;
	for(p=number+1;p<number+10;p++)
		if(*p>*max)max=p;
		else if(*p<*min)min=p;
		a=number[0];
		number[0]=*min;
		*min=a;
	if(max==number)max=min;
	a=number[9];
	number[9]=*max;
	*max=a;
}
void output(int *number)                  //输出十个数的函数
{
	int *p;
	printf("转换后为：");
	for(p=number;p<number+10;p++)
		printf("%d,",*p);
	printf("\n");
}
int main()
{
	void input(int *);
	void change(int *);
	void output(int *);
	int number[10];
	input(number);
	change(number);
	output(number);
	return 0;
}
