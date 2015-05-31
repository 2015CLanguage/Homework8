#include<stdio.h>
#include<string.h>
char a[10]=;
void change(char a[10]);
void main()
{
	gets(a);
	change(a);
}
void change(char a[10])
{
	int k;
	char b[10];
	for(k=0;k<4;k++)
	{
		b[2*k]=a[k];
		b[2*k+1]=' ';
	}
    puts(b);
}
