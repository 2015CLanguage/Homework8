#include<stdio.h>
int main(){
    void change(char ar[]);
    char ar[20];
    printf("please input four digists !\n");
    scanf("%s",ar);
    change(ar);
    return 0;
}
void change(char ar[]){
    int i;
    for(i=3;i>=0;i--){
        ar[2*i+1]=ar[i];
        ar[2*i]=' ';
    }
    printf("result :\n");
    printf("%s",ar);
}
