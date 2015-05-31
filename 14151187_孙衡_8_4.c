#include<stdio.h>
#define M 6

void main()
{
	int i,a[9+M],*p=a;
	printf("Please input 9 integrals.\n");
	for(i=0;i<9;i++)
	{
		scanf("%d",p++);
	}
	for(i=0;i<M;i++,p++)
		*p=*(p-9);
	p=a+M;
	printf("The numbers in new order are:\n");
	for(i=0;i<9;i++)
		printf("%d ",*p++);
	printf("\n");
}
