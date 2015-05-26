#include<stdio.h>
void change(int a[3][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
}
void main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)scanf("%d",&a[i][j]);
	}
	change(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)printf("%-5d",a[i][j]);
		printf("\n");
	}
}
