#include<stdio.h>
void change(char a[10]);
int main()
{
	char a[10];
	printf("请输入一个四位数字:\n");
	scanf("%s",a);
	change(a);
	return 0;
}
void change(char a[10])
{
	int i;
	for(i=0;i<4;i++)
	{
		if(i<3)
		{
			printf("%c ",a[i]);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
} 
