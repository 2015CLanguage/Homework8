#include "stdio.h"
void main()
{
	int i,j;
	int a[3][3],b[3][3];
	printf("please input the a :\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		    scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		    b[i][j]=a[j][i];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%5d",b[i][j]);
		printf("\n");
	}
}
