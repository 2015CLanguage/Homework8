#include<stdio.h>
void main()
{
	int i, j, k, x, a[100], *p;
	printf("输入玩家个数:");
	scanf_s("%d", &j);
	p = a;
	for (i = 0; i < j; i++)
		*(p + i) = i + 1;
	i = 0;
	k = 0;
	x = 0;
	while (x < j - 1)
	{
		if (*(p + i) != 0)
			k=k+1;
		if (k == 3)
		{
			*(p + i) = 0;
			k = 0;
			x = x + 1;
		}
		i++;
		if (i == j)
			i = 0;
	}
	while (*p == 0)//如果排在第一个位置的玩家已退出，则下次循环从下一个人开始算起
		p++;
	printf("剩下的最后一个玩家是第%d号\n", *p);
}
