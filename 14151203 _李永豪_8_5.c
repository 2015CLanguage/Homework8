#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,m,n,k,num[100];
    int *p;
    p=num;
    printf("hoy many people are in the game ?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        *(p+i)=i+1;
    i=1;
    k=1;
    m=n;
    while(m>1){
        if(i==3){
            *(p+k-1)=0;
            m--;
            i=0;
        }
        if(*(p+k)!=0)i++;
        k++;
        if(k>n)
            k=0;
        
    }
    printf("the last one is :");
    for(i=0;i<n;i++){
        if(*(p+i)!=0)
            printf("%5d",*(p+i));
    }
    return 0;
}
