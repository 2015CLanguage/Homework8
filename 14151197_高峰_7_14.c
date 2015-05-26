#include <stdio.h>
int main(){
	void ava1(int a[][5]);
	void ava2(int a[][5]);
	void ma(int a[][5]);
	void fangcha(int a[][5],int n);
	int a[10][5],n,i,j;
	for(i=0;i<10;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("你想知道第几位学生的方差："); 
	scanf("%d",&n);
	ava1(a);
	ava2(a);
	ma(a);
	fangcha(a,n);
	return 0;
}

void ava1(int a[][5]){
	double b;
	int i;
	printf("每人平均数分别是：");
	for(i=0;i<10;i++){
		b=(a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5.0;
		printf("%lf ",b);	
	}
}

void ava2(int a[][5]){
	double b;
	int i,j;
	printf("每科目平均数分别是：");
	for(i=0;i<5;i++){
		b=(a[0][j]+a[1][j]+a[2][j]+a[3][j]+a[4][j]+a[5][j]+a[6][j]+a[7][j]+a[8][j]+a[9][j])/10.0;
		printf("%lf ",b);	
	}
}

void ma(int a[][5]){
	int max;
	int i,j,c,d;
	max=a[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<5
		;j++){
			if(a[i][j]>max){
				max=a[i][j];
				c=i;
				d=j;
			}
		}
	}
	printf("最高分对应第%d个学生，第%d个科目",c+1,d+1);
}

void fangcha(int a[][5],int n){
	double b=0,c=0,d;
	int i;
	for(i=0;i<5;i++){
		b=b+a[n][i];
	}
	b=b/5.0;
	b=b*b;
		for(i=0;i<5;i++){
		c=c+a[n][i]*a[n][i];
	}
	c=c/5.0;
	d=c-b;
	printf("第%d个学生的成绩方差为%lf",n,d);
}
