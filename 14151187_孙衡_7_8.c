#include<stdio.h>
#include<math.h>

void main()
{
	int i,a;
	printf("Please input an four-digit integral.\n");
	scanf("%d",&a);
	printf("The formatting output is:\n");
	for(i=4;i>0;i--)
		printf("%d ",a%int(pow(10,i))/int(pow(10,i-1)));
	printf("\n");
}
