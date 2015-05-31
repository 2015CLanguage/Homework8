#include<stdio.h>
void f(int a[4])
{
int i;
for(i=0;i<4;i++)
	printf("%2d",a[i]);
}

int main()
{
printf("Please enter a number between 1000 and 9999\n");
int i,a[4];
for(i=0;i<4;i++)
	scanf("%d",&a[i]);
f(a);
}
