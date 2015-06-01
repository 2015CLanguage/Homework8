#include<stdio.h>
int a[3][3],b[3][3];
void transform()
{
	int i,j;
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
	}
}
int main()
{
	int i,j,m,n;
	printf("请输入一个3x3的矩阵：\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transform();
	printf("矩阵的转置为：\n");
	for(m=0;m<3;m++) 
	{
		for(n=0;n<3;n++)
		{
			printf("%d ",b[m][n]);
		}
		printf("\n");
	}
	return 0;
}
