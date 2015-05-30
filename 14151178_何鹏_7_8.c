#include "stdio.h" 
#include "string.h"
void print(char x[100]);
int main()
{
	char a[100];
	gets(a);
	print(a);
	return 0;
}
void print(char x[100])
{
	int i;
	for (i = 0; i < strlen(x); i++)
	{
		printf("%c ", x[i]);
	}
	printf("\n");
}
