#include<stdio.h>
int main()
{
	int i, m, n, a[50];
	void change(int *a, int m, int n);
	printf("请输入你要输入的数列个数：");
	scanf_s("%d", &n);
	printf("\n请输入数列：\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &*(a + i));
	}
	printf("\n请输入你要前后对换的个数：");
	scanf_s("%d", &m);
	change(a, m, n);
	printf("将数列后面%d个数与前面的数对换之后的数列为：\n", m);
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}

void change(int *a, int m, int n)
{
	int i, x;
	for (i = 0; i < m; i++)
	{
		x = *(a + i);
		*(a + i) = *(a + n - m + i);
		*(a + n - m + i) = x;
	}
}
