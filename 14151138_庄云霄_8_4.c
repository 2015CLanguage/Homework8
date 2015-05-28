//整体设计思路：定义一个数组list1，接收终端输入想要输入的数字个数，然后通过另外一个数组list2将list1里面的数字
//复制两次，接受终端想要转移几位数字，如输入list1:1,2,3,4,5,6,7,8；在list2中即产生1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8
//然后从想要转换的数开始进行遍历，将list1转化成想要实现的那个列表

#include<stdio.h>
int main(){
	
	void input(int *list1,int n);	
	void move(int *list1,int m,int n);  //定义三个函数，分别实现输入、转化和输出
	void output(int *list1,int n);  //定义几个指针类型的函数
	int n,m,list1[10];
	printf("please input how many number will you input(<11):\n");   //首先输入想要输入的数字n
	scanf("%d",&n);
	printf("please input %d numbers:\n",n);               //开始进行输入数字
	input(list1,n);
	printf("how many places do you want to move?\n");   //然后输入想要移动的数字数
	scanf("%d",&m);
	move(list1,m,n);
	output(list1,n);



}
void output(int *list1,int n){
	printf("now they are:\n");
	int *p;
	for(p=list1;p<list1+n;p++){
		printf("%d",*p);
	}
} 
void move(int *list1,int m,int n){
	int list2[20]={0},*p,*q;
	q=list2;
	for(p=list1;p<list1+n;p++,q++){                        //将list1前n个数强行赋给list2的前n个数
		*q=*p;
	}
	for(p=list1,q=list2+n;p<list1+n;p++,q++){                //将list1前n个数强行赋给list2的第n+1到第2n个数
		*q=*p;
	}
	
	for(q=list2+n-m,p=list1;q<list2+n+n-m;q++,p++){
		//printf("%d",*q);                                   //将list2中的从n-m个数到2n-m个数强行赋给list1，大功告成
		*p=*q;
	}
	
	
	
	
	
}



void input (int *list1,int n){
	int *p;
	for(p=list1;p<list1+n;p++){
		scanf("%d",p);
	}

}
