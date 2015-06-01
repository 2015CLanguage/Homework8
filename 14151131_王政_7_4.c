#include<stdio.h>
void transform(int a[][3]);
void transform(int a[][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
}
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("请依次输入第%d行第%d列的整数:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("该二维整型数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	transform(a);
	printf("转置后二维整型数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
