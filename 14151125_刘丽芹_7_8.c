#include <stdio.h>
#include <string.h>
void zifu(char a[])
{
	int i;
	for(i=strlen(a);i>0;i--)
	{
		a[2*i]=a[i];
		a[2*i-1]=' ';
	}
}
int main()
{
	void zifu(char a[]);
	char a[100];
	printf("请输入一个四位数字:\n");
	scanf("%s",a);
	zifu(a);
	printf("转换后为:\n");
	printf("%s\n",a);
}
