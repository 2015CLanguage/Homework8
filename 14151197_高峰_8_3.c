#include <stdio.h>
int main(){
	void sc(int a[]);
	void deal(int a[]);
	void pr(int a[]);
	int a[10];
    sc(a);
    deal(a);
    pr(a);
    return 0;
}

void sc(int a[]){
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&(*(a+i)));
	}
}

void deal(int a[]){
	int i,max,min,*p;
	max=*a;
	min=*a;
    for(i=0;i<10;i++){
    	if(*(a+i)>max){
    		max=*(a+i);
		}
	}
	for(i=0;i<10;i++){
    	if(*(a+i)<min){
    		min=*(a+i);
		}
	}
	for(i=0;i<10;i++){
		if(*(a+i)==max)
		break;
	}
	*p=*(a+i);
	*(a+i)=*a;
	*a=*p;
	for(i=0;i<10;i++){
	if(*(a+i)==min)
	break;
	}
	*p=*(a+i);
	*(a+i)=*(a+9);
	*(a+9)=*p;
}


void pr(int a[]){
	int i;
	for(i=0;i<10;i++){
		printf("%d\t",*(a+i));
	}
}
