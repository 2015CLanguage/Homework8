#include "stdio.h"
void pro(int a[3][3]);
int a[3][3];
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	
	pro(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%-3d",a[i][j]);
			if(j==2) printf("\n");
		}
	}
}
void pro(int a[3][3])
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
			{
				temp=a[j][i];
				a[j][i]=a[i][j];
				a[i][j]=temp;
			}
	} 
}
