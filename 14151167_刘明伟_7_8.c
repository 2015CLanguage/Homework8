Enter file contents here
# include<stdio.h>
int main()
{
	void lmw(char a[4]);
	char b[4];
	printf("请输入四个数字：\n");
	int i;
	for (i = 0; i < 4; i++)
		scanf_s("%c",&b[i]);
	lmw(b);
	return 0;
}
void lmw(char a[4])
{
	int j;
	for (j = 0; j < 4; j++)
	{
		printf("%2c", a[j]);

	}
}
