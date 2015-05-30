#include<stdio.h>
int main()
{
	int i, a, b, c, d, n, people[2000], *p;
	printf("请输入人数：");
	scanf_s("%d", &n);
	p = people;
	for (i = 0; i < n; i++)
		*(p+i) = i + 1;
	i = 0;
	a = 0;
	b = 0;
	d = n - 1;
	while (b<d)
	{
		if (*(p + i) != 0)
			a++;
		if (a == 3)
		{
			*(p+i) = 0;
			a = 0;
			b++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	for (p = people; p < (people + n);p++)
	{
		if (*p != 0)
			c = *p;
	}
	printf("没有出局的是%d号\n", c);
	return 0;
}

