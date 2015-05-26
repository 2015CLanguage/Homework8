#include "stdio.h"
#include "string.h"
void insert(char a[])
{
	int i;
	for (i = strlen(a); i > 0; i--)
	{
		a[2 * i] = a[i];
		a[2 * i - 1] = ' ';
	}
	printf("加空格后:\n");
	printf("%s\n", a);
}
void main()
{
	char a[30];
	printf("请输入:\n");
	gets(a);
	insert(a);
}
