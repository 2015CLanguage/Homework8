#include <stdio.h>
int a[3][3];
int main() {
    void transfer(int a[3][3]);
    int i,j;
    printf("please input the array !\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the original array is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    transfer(a);
    return 0;
}
void transfer(int a[3][3]){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            k=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=k;
        }
    }
    printf("the transferred array is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    
}
