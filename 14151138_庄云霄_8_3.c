#include<stdio.h>
int main()
{
	void input(int *x);      //函数参数是指针类型 
	void hexin(int *x);      
	void output(int *x);
	int x[10];
	input(x);
	hexin(x);
	output(x);
	return 0;
}

void input(int *x){
	printf("输入10个数");
	int i;
	for(i=0;i<10;i++){
		scanf("%d",x[i]);
	}
}

void hexin(int *x){
	int *max,*min,*p,temp;      //用到temp这个中间的临时变量 
	max=min=x;
	for(p=x+1;p<x+10;p++){
		if(*p>*max)  max=p;
	}             //找出最大的数和最小的数所在的地址
	temp=x[9];x[9]=*max;*max=temp;
	//并进行将最大数与最后一个数互换和将最小数和第一个数互换的操作
	for(p=x+1;p<x+10;p++){
	if(*p<*min) min=p;
	}
	temp=x[0];x[0]=*min;*min=temp;
}

void output(int *x){
	int *p;
	for(p=x;p<x+10;p++){
		printf("转化过后的数字为：%d",*p);
	}
	
	printf("\n");
	
	
}

