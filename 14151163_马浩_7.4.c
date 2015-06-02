#include<stdio.h>
void convert(int a[3][3]);
int main()
{
	int a[3][3], i, j;
	printf("Input the matrix ：\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
			scanf_s("%d", &a[i][j]);
	}
	printf("The original matrix is ：\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	convert(a);
	printf("The  transpose of matrix is：\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
void convert(int a[3][3])
{
	int i, j, t;
	for (i = 0; i<3; i++)
		for (j = i + 1; j<3; j++)
		{
		t = a[i][j];
		a[i][j] = a[j][i];
		a[j][i] = t;
		}
}
