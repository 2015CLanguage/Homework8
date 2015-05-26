#include <stdio.h>
int main()
{
	void tran(int array[][3]);
	int a[3][3],i,j;
	printf("Please enter the array that you want to transfer:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("The original array is:\n");
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");}
	tran(a);
	printf("The converted array is:\n");
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");}
	return 0;
}


void tran(int array[3][3])
{
	int m,n,t;
	for(m=0;m<3;m++)
		for(n=m+1;n<3;n++)
		{
			t=array[m][n];array[m][n]=array[n][m];array[n][m]=t;
		}

}
