#include "stdio.h"
void main()
{
	int n, i, a[20], m, flag;
	printf("请输入总人数:\n");
	scanf_s("%d", &n);
	for (i = 0; i<n; i++)
		*(a + i) = i + 1;
	i = 0, m = 0, flag = 0;
	while ( n - m > 1)
	{
		if (*(a + i) != 0)
			flag++;
		if (flag == 3)
		{
			*(a + i) = 0;
			flag = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	for (i = 0; i < n; i++)
	{
		if (*(a + i) != 0)
			printf("最后留下的是第%d位\n", *(a + i));
	}
}
