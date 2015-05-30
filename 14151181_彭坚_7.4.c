#include<stdio.h>
int main()
{
	void input(int a[][3]);
	void change(int a[][3]);
	void output(int a[][3]);
	int a[3][3];	
	input(a);
	change(a);
	output(a);
	return 0;
}

void input(int x[3][3])
{
	int i, j;
	printf("请输入一个3×3的二维数组：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf_s("%d", &x[i][j]);
	}
	printf("输入的二维数组为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", x[i][j]);
		printf("\n");
	}
}

void change(int x[][3])
{
	int i, j, temp; 
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			temp = x[i][j];
			x[i][j] = x[j][i];
			x[j][i] = temp;	
		}
	}
}

	
void output(int x[][3])
{
	int i, j;
	printf("二维数组的转置数组为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5d", x[i][j]);
		printf("\n");
	}
}
