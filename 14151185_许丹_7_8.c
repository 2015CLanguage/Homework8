#include <stdio.h>
int main()
{
	void f(char c[]);
	char c[10];
	printf("Please enter four digits:");
	scanf("%s",c);
	f(c);
	return 0;
}

void f(char c[])
{
	int i;
	for(i=6;i>0;i--)
	{
		if(i%2==0)
			c[i]=c[i/2];
		else 
			c[i]=' ';
	}
	for(i=0;i<7;i++)
		printf("%c",c[i]);
	printf("\n");
}
