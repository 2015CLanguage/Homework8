#include <stdio.h>

int main() {
    void scan(int *num);
    void change(int *num);
    void print(int *num);
    int num[10];
    scan(num);
    change(num);
    print(num);
    return 0;
}
void scan(int *num){
    int p;
    printf("please input 10 numbers !\n");
    for(p=0;p<10;p++){
        scanf("%d",p+num);
    }
}
void change(int *num){
    int *max,*min,*p,t;
    max=min=num;
    for(p=num;p<num+10;p++){
        if(*p>*max)
            max=p;
        if(*p<*min)
            min=p;
    }
    t=num[0];num[0]=*min;*min=t;
    if(max==num)max=min;
    t=num[9];num[9]=*max;*max=t;
    
}
void print(int *num){
    int *p;
    for(p=num;p<num+10;p++){
        printf("%5d",*p);
    }
}
