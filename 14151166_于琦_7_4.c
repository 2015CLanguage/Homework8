#include <stdio.h>
void exchange(int a[][3], int b[][3])
{
    int i,j,t;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[j][i]=a[i][j];
            }
    }
}
void main()
{
    int a[3][3], b[3][3], i, j;
    printf("请输入数组a[3][3]\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    exchange(a,b);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
