#include<stdio.h>
int main(){
	void input(int *number);  //函数定义区，注意答案中的void input(int *)也是正确的
	void diaohuan(int *number);
	void output(int *number);
	int number[10];
	input(number);
	diaohuan(number);
	output(number);
} 


void input(int *number){
	printf("please input 10 num:\n");
	int *p;
	p=number;
	for(;p<number+10;p++){        //这里采用了和答案完全不同的用法，这里纯粹是用指针进行输入
		scanf("%d",p);
	} 
}

void diaohuan(int *number){
	int *max,*min,*p,temp1,temp2;
	max=min=p=number;
	for(p=number;p<number+10;p++){   //这里采用的也是和答案不同的用法，先寻找最小的数并将其进行位置互换
		if(*p<*min){
			min=p;
		}
	}
	temp1=*number;
	*number=*min;
	*min=temp1;
	for(p=number;p<number+10;p++){  //然后寻找最大的数，并进行位置互换
		if(*p>*max){
			max=p;
		}
	}
	temp2=*(number+9);
	*(number+9)=*max;
	*max=temp2;
}


void output(int *number){
	int *p;
	printf("now they are:\n");
	for(p=number;p<number+10;p++){    //哈哈 我已经完全明白指针的意义和其用法啦
		printf("%d",*p);
	}
}
	
	
