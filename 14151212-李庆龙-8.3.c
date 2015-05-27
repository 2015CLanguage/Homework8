# include<stdio.h>
void change(int *p, int x1, int x2);
int main()
{
	int i, m,n;
	int list[10];
	m = n = 0;
	printf("input ten numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &list[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (list[i] < list[m])
		{
			m = i;
		}
		if (list[i]>list[n])
		{
			n = i;
		}
	}
	change(list, m, n);
	for (i = 0; i < 10; i++)
		printf("%-4d", list[i]);
	system("pause");
}
void change(int *p, int x1, int x2)
{
	int t;
	t = *(p +x1);
	*(p+x1) = *p;
	*p = t;
	t = *(p + x2);
	*(p + x2) = *(p + 9);
	*(p + 9) = t;
}
