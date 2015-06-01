#include<stdio.h>
void exchange(char str[4]);
char str2[8];
int main()
{
	printf("请输入1个4位数:\n");
	char str1[4];
	scanf("%s",&str1);
	exchange(str1);
	printf("变化后为:\n%s\n",str2);
	return 0;
}
void exchange(char str[])
{
	int i;
	for(i=0;i<4;i++)
	{
		str2[2*i]=str[i];
		str2[2*i+1]=' ';
	}
}
