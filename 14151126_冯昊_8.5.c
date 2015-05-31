#include <stdio.h>
int main()
{
	int i, k=0, tuichu=0, n=0, a[50], *p;
	printf("\n");
	printf("请输入总人数: ");
	scanf("%d", &n);

	p = a;
	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;
	}
	i=0;
	while (tuichu < n - 1)
	{
		if (*(p + i) != 0)
			k++;
		if (k == 3)
		{
			*(p + i) = 0;
			k = 0;
			tuichu++;
		}
		i++;
		if (i == n)
		{
			i=0;
		}
	}
	while (*p==0)
	{
		p++;
	}
	printf("最后留下的是第%d号\n", *p);
	return 0;
}
