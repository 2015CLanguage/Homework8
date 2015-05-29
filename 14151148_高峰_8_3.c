#include<stdio.h>
void input(int *numbers);
void change(int *numbers);
void output(int *numbers);
void input(int *numbers)
{
	int i;
	printf("请输入10个整数:");
	for(i=0;i<10;i++)
		scanf("%d",&numbers[i]);
}

void change(int *numbers)
{
	int *min,*max,*p,temp;
	min=max=numbers;
	for(p=numbers;p<numbers+10;p++){
		if(*p>*max)
			max=p;
		else if(*p<*min)
			min=p;
	}
	temp=numbers[0];
	numbers[0]=*min;
	*min=temp;
	temp=numbers[9];
	numbers[9]=*max;
	*max=temp;
}

void output(int *numbers)
{
	int *p;
	printf("调换后的数为:");
	for(p=numbers;p<numbers+10;p++)
		printf("%3d",*p);
	printf("\n");
}
int main()
{
	int numbers[10];
	input(numbers);
	change(numbers);
	output(numbers);
	return 0;
}
