Enter file contents here#include <stdio.h>


int a[3][3];

void Change(int a[3][3] )
{
	int i,j;
	for (i=0; i<3; i++)
	 for (j=0; j<i; j++)
	 {
	 	int t=a[i][j];
	 	a[i][j]=a[j][i];
	 	a[j][i]=t;
	 }
}

int main()
{
	int i,j;
	for (i=0; i<3; i++)
	 for (j=0; j<3; j++)
	   scanf("%d",&a[i][j]);
	Change(a);
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		 printf("%d ",a[i][j]);
		 printf("\n");
	}
	return 0;
}
