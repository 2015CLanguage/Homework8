#include<stdio.h>
int main()
{
	char a[9] = {' '};
	void insert(char a[]);
	printf("请输入一个四位数：\n");
	scanf("%s", a);
	insert(a);
	printf("中间插入空格后的显示为：\n%s\n", a);
	return 0;
}
void insert(char a[])
{
	int i;
	for (i = 4; i>0; i--)
	{
		a[2 * i] = a[i];
		a[2 * i - 1] = ' ';
	}
}
