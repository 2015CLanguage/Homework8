#include<stdio.h>
#include<string.h>
int main()
{
	void insert(char[]);
	char str[80];
	printf("请输入数字：");
	scanf("%s",str);
	insert(str);
	return 0;
}
void insert(char str[])
{
	int i;
	for(i=strlen(str);i>0;i--)
	{str[2*i]=str[i];
	 str[2*i-1]=' ';}
	printf("%s\n",str);
}
