
#include <stdio.h>

int main()
{
    int i,j;
    float mat[3][3]={{0},{0}};
    void trans(float mat[3][3]);
    printf("输入原始矩阵:\n");
    for (i=0; i<3;i++ )
    {
        for (j=0; j<3; j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }
    trans(mat);
    return 0;
}


void trans(float mat[3][3])
{
    int i,j,t,k,p;
    for (i=0; i<3; i++)
    {
        for (j=i+1; j<3; j++)
        {
            t=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=t;
        }
    }
    for (p=0;p<3; p++)
    {
        for (k=0;k<3;k++)
        {
            printf("%f   ",mat[p][k]);
        }
        printf("\n");
    }
}
