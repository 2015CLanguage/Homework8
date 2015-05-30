Enter file contents here
# include <stdio.h>
int main()
{
	void lmw(int *x, int n);
	int i;
	int m;
	printf("请输入一个整数：\n");
	scanf_s("%d", &m);
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	if (m > 10)
		printf("错误\n");
	else
	{
		printf("原来的数组为：\n");
		for (i = 0; i < 10; i++)
			printf("%2d", a[i]);
		printf("\n");
		lmw(a, m);
		printf("变换后的数组为：\n");
		for (i = 0; i < 10; i++)
			printf("%2d", a[i]);
	}
	return 0;
}
void lmw(int *x, int n)
{
	int *p, temp, *i, *j;
	i = x; j = x + 9; p = x + n-1;
	for (; i <= p; i++, j--)
	{temp = *i; *i = *j; *j = temp; }
	return;

}
