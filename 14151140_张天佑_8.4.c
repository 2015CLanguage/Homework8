#include "stdio.h"
void move(int *a, int n, int m)
{
	int *i,t;
	t =*( a + n - 1);
	for (i = a + n - 1; i > a; i--)                     //将数组末位插入数组首位
	{
		*i = *(i - 1);
	}
	a[0] = t;
	m--;
	if (m > 0)
		move(a, n, m);                             //循环调用
}
void main()
{
	int n, m, i, a[20];
	printf("请输入总数n和需要移动的个数m:\n");
	scanf("%d %d", &n, &m);
	printf("请输入数组:\n");
	for (i = 0; i < n; i++)
		scanf("%d", a+i);
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
	move(a,n,m);
	printf("移动后为:\n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
