#include<stdio.h>
char str[20];
void string()
{
	int j;
	printf("结果：");
	for(j=0;j<4;j++)
	{
		printf("%c ",str[j]);
	}
}
int main()
{
	int i;
	printf("请输入一个4位数：");
	scanf("%s",str);
	string();
	return 0;
}
