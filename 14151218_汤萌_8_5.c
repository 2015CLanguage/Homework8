#include<stdio.h>
int main()
{
	int p[50] = {0}, n, i;
	printf("进行游戏的人数：");
	scanf_s("%d", &n);
	void elect(int *p, int n);
	elect(p, n);
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == 0)
		{
			printf("最终剩下的是第%d个人。\n", i+1);
		}
	}
	return 0;
}
void elect(int *p, int n)
{
	int b;
	int i = -1;
	int j = 0;
	int m = n;
	while (m > 1)
	{
		j = 0;
		while (j < 3)
		{
			i++;
			if (i == n)
			{
				i = 0;
			}
			if (*(p + i) != 1)
			{
				j++;
			}
		}
		*(p + i) = 1;
		m--;
	}
}
