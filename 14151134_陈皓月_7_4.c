#include<stdio.h>
int change(int a[3][3]);
void main()
{
	int a[3][3],i,j;
	printf("请输入9个数字\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("现有矩阵是\n");     //输出现有矩阵
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	change(a);
	printf("其转置矩阵是\n");   //输出其转置矩阵
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
int change(int a[3][3])   //定义函数，进行转置
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
			{
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
	}
	return 0;
}
