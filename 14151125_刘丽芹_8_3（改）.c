#include <stdio.h>
#include <math.h>
void input(int *num)
{
	int i;
	printf("请输入十个整数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&num[i]);
}
void jiaohuan(int *num)
{
	int *max,*min,*pointer,t,y;
	max=num;
	min=num;
	for(pointer=num+1;pointer<num+10;pointer++)
		if(*pointer<*min)
		{
			min=pointer;
		}
	t=num[0];
	num[0]=*min;
	*min=t;
	for(pointer=num+1;pointer<num+10;pointer++)
		if(*pointer>*max)
		{
			max=pointer;
		}
	y=num[9];
	num[9]=*max;
	*max=y;
}
void print(int *num)
{
    int i;
	for(i=0;i<10;i++)
		printf("%5d",num[i]);
}
int main()
{
	int num[10];
	input(num);
	jiaohuan(num);
	print(num);
	printf("\n");
	return 0;
}
