#include <stdio.h>

int main() {
    void change(int *ar,int n,int m);
    int ar[50],i,m,n;
    printf("how many numbers would you input ?\n");
    scanf("%d",&n);
    printf("how many digits would you move ?\n");
    scanf("%d",&m);
    printf("please input %d numbers !\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    change(ar,n,m);
    for(i=0;i<n;i++){
        printf("%5d",ar[i]);
    }
    return 0;
}
void change(int *ar,int n,int m){
    int *p;
    int temp;
    while(m>0){
        temp=*(ar+n-1);
        for(p=ar+n-1;p>ar;p--){
            *p=*(p-1);
        }
        *ar=temp;
        m--;
    }
}

