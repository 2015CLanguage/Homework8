#include<stdio.h>
int main()
{
	void tran(int a[][3]);
	int i=0,j=0,a[3][3];
	printf("输入数组的9个元素：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}		
	}
	printf("\n输入的数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	tran(a);
	return 0;
}

void tran(int a[][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			k=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=k;
		}
	}
	printf("转置结果为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
