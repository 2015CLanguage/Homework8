#include <stdio.h>
int main(){
	int i,k=0,m=0,a[50],*p,n;
	printf("你希望几人参与游戏：");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++){
		*(p+i)=i+1;

	}
	i=0;
	while(m<n-1){
		if(*(p+i)!=0)
		k++;
		if(k==3){
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;
		if(i==n){
		i=0;}
	}
	while(*p==0){
	p++;}
	printf("最后剩下来的是%d号",*p);
	return 0;
}
