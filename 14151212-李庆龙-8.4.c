# include<stdio.h>
# include<malloc.h>
int * change(int *p,int *q, int m, int n);
int main()
{
	int m, n, i;
	int *p,*q;
	printf("ÕûÊý¸öÊý£º");
	scanf_s("%d", &n);
	printf("ÒÆÎ»³¤¶È£º");
	scanf_s("%d", &m);
	p = malloc(n);
	q = malloc(n);
	printf("°´ÐòÊäÈë%d¸öÕûÊý£º\n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
	}
	p=change(p,q, m, n);
	for (i = 0; i < n; i++)
	{
		printf("%-5d", *(p + i));
	}
	system("pause");
}
int * change(int *p, int *q,int m, int n)
{
	int i;
	for (i = 0; i < m; i++)
	{
		*(q + i) = *(p +i+ n - m);
	}
	for (i = m; i < n; i++)
	{
		*(q + i) = *(p + i - m);
	}
	return q;
}
