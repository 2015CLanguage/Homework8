#include<stdio.h>
void f(int a[50], int n, int m)
{
	int *p, a1;
	a1 = *(a + n - 1);
	for (p = a + n - 1; p > a; p--)
		*p = *(p - 1);
	*a = a1;
	m--;
	if (m > 0)
		f(a, n, m);
}
int main()
{
	void f(int[50], int, int);
	int num[20], n, m, i;
	printf("请输入数的总数：");
	scanf("%d", &n);
	printf("请输入这些数：");
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	printf("后移位置为：");
	scanf("%d", &m);
	f(num, n, m);
	for (i = 0; i < n; i++)
		printf("%d,", num[i]);
	printf("\n");
	return 0;
}
