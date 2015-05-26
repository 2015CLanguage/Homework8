#include<stdio.h>
void main()
{
	void f(int a[], int, int);
	int a[25], i, j, k;
	printf("输入数字个数: ");
	scanf_s("%d", &j);
	printf("输入这些数字:\n");
	for (i = 0; i < j; i++)
		scanf_s("%d", &a[i]);
	printf("输入要移动的位置数: ");
	scanf_s("%d", &k);
	printf("\n输入的数字是:\n");
	for (i = 0; i < j; i++)
		printf("%3d", a[i]);
	f(a, j, k);
	printf("\n转换后的数列为:\n");
	for (i = 0; i < j; i++)
		printf("%3d", a[i]);
	printf("\n");
}
void f(int a[25], int j, int k)
{
	int *p, a_end;
	a_end = *(a + j - 1);//使最后一个数值的指针锁定指向最后一个数的位置
	for (p = a + j - 1; p > a; p--)
	{
		*p = *(p - 1);

	}
	*a = a_end;
	k--;
	if (k > 0)
		f(a, j, k);
}
