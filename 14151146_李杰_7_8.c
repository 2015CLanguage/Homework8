#include<stdio.h>
void  f(char x[5])
{
	int i;
	char a[10];
	for(i=0;i<4;i++)
	{
		a[2*i]=x[i];
		a[2*i+1]=' ';
	}
	printf("The changed number :");
	for(i=0;i<7;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}
int main()
{
	char num[5];
	printf("Please input four figures: ");
	scanf("%s",num);
	f(num);
}
