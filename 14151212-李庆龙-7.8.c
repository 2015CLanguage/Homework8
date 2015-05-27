# include<stdio.h>
# include<string.h>
void read(char *p,int n);
int main()
{
	char list[20];
	char *p = list;
	printf("input any number:\n");
	scanf_s("%s", list, sizeof(list));
	read(p,strlen(list));
	system("pause");
}
void read(char *p,int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%  d", *(p + i) - 48);
}
