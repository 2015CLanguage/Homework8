#include<stdio.h>
int main()
{
	int n, num[100], i, k = 0,m=0, *p;
	printf("请输入人数：");
	scanf_s("%d", &n);
	p = num;
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;
	i = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0)
			k++;
		if (k == 3)
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;

	}
	while (*p == 0)
		p++;
	printf("留下的是第%d位。\n", *p);
	return 0;
}
