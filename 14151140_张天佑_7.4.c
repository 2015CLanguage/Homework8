#include "stdio.h"
int a[3][3];
void t(int a[][3])
{
	int i, j, temp;
	for (i = 0; i < 3; i++)
	{
		for (j = i+1; j < 3; j++)
		{
			temp = a[j][i];
			a[j][i] = a[i][j];
			a[i][j] = temp;
		}
	}
}
void main()
{
	int  i, j;
	printf("输入矩阵:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	printf("该矩阵为:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	t(a);
	printf("转置后为:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
