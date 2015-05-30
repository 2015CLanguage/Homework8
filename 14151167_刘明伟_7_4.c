Enter file contents here
#include <stdio.h>
int main()
{
	void lmw(int b[3][3]);
	int a[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("原始的数阵为：\n");
	for (i = 0; i < 3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", a[i][j]);
			if ((j + 1) % 3 == 0)
				printf("\n");
		}
	}
	lmw(a);
	printf("新的数阵为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", a[i][j]);
			if ((j + 1) % 3 == 0)
				printf("\n");
		}
	}
	return 0;
}
void lmw(int b[3][3])
{
	int i, j, t;
	for (i = 0; i < 3; i++)
	{
		for (j = i+1; j < 3; j++)
		{
			t = b[i][j];
			b[i][j] = b[j][i];
			b[j][i] = t;
		}
		
	}
	
}
