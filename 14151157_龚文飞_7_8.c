#include"stdio.h"
#include"string.h"
void insert(char[]);
void main()
{
	char str[100];
	printf("Input four numbers.");
	scanf_s("%s", str);
	insert(str);
	
}
void insert(char str[])
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		str[2*i] = str[i];
		str[2 * i + 1] = ' ';
	}
	printf("The string is %s\n", str);
}
