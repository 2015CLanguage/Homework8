#include<stdio.h> 
int change(int a[3][3],int b[3][3])
{
int i,j,n,m,t;
for(i=0,m=0;i<3;i++,m++)
	for(j=0,n=0;j<3;j++,n++)
		b[m][n]=a[j][i];
}

int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3];
change(a,b);
printf("the new array is :\n");
int i,j;
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		printf("%5d",b[i][j]);
		printf("\n");
	}
}
