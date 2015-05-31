#include<stdio.h>
int main()
{
    int n,i,a[30],m;
	void move(int[30],int,int);
	printf("请输入整数个数：");
	scanf("%d", &n);
	//录入数据
	printf("请输入数据\n");
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	//转移
	printf("请输入前面要转移整数的个数");
	scanf("%d", &m);
	move(a, n, m);
	//输出
	printf("移动之后");
	for ( i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	return 0;
}
void move(int a[30], int n, int m)
{
	int *p, temp;
	temp = *(a + n - 1);
	for (p = a + n - 1; p > a; p--)
		*p = *(p - 1);
	*a = temp;
	m--;
	if (m > 0)
		move(a, n, m);
}
