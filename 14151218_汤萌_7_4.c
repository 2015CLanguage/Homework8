#include<stdio.h>
int main()
{
	int i, j, a[3][3];
	for (i = 0; i < 3; i++)
	{
		printf("请输入第%d行的数：\n", i+1);
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	void change(int a[][3]);
	change(a);
	printf("转置之后的矩阵为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
void change(int a[][3])
{
	int i, j, n;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i; j++)
		{
			n = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = n;
		}
	}
}
