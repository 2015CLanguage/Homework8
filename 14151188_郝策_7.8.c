#include"stdio.h"
char a[10];
void pro(char a[10]);
int main()
{
	int i;
	printf("please input numer: ");
	for(i=0;i<4;i++)
		scanf("%c",&a[i]);
	pro(a);
	for(i=0;i<12;i++)
		printf("%c",a[i]);
}

void pro(char a[10])
{     
	int i;
	for(i=3;i>0;i--)
	{
		a[3*i]=a[i];
	}
		for(i=1;i<4;i++)
	{
		a[3*i-2]=' ';
		a[3*i-1]=' ';
	}

}
