 # include<stdio.h> 
 void input(int *); 
 void f1(int *); 
 void output(int *); 
 
 
 void input(int * number) 
 { 
 	int i; 
 	printf("请输入十个整数：\n"); 
 	for(i=0;i<10;i++) 
 		scanf("%d",&number[i]); 
 } 
 
 
 void output(int * number) 
 { 
 	int *p; 
 	printf("处理后的数组为：\n"); 
	for(p=number;p<number+10;p++) 
 		printf("%3d",*p); 
 	printf("/n"); 
 } 
 
 
 void f1(int * number) 
 { 
 	int *max,*min,*p,temp; 
	max=min=number; 
 	for(p=number+1;p<number+10;p++) 
 		if(*p>*max) 
			max=p; 
		else if(*p<*min) 
 			min=p; 
 		temp=number[9]; 
		number[9]=*max;*max=temp; 
 } 
 
 
 int main(void) 
{ 
 	int number[10]; 
 	input(number); 
 	f1(number); 
 	output(number); 
 	return 0; 
} 
