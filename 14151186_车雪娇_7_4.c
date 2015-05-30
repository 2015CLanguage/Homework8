#include <stdio.h>
#include <stdlib.h>
int i,j;
int main()
{
   int t(int a[3][3]);
   int b[3][3],a[3][3];
   b[3][3]=t(a[3][3]);
   printf("%d",b[3][3]);
   return 0;
}

int t(int a[3][3])
{
int t;
for (i=0;i<3;i++)
    for (j=i+1;j<3;j++)
{
    t=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=t;
}
}

