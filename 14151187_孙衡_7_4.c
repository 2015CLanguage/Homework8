#include<stdio.h>

void reverse(int m[3][3],int i,int j);

void main()
{
	int i,j,m[3][3];
	printf("Please set the martix.\n");
	for(i=0;i<3;i++)
	{
		printf("Now please input the elements in Line %d\n",i+1);
		for(j=0;j<3;j++)
			scanf("%d",&m[i][j]);
	}
	for(i=0;i<2;i++)
		for(j=i+1;j<3;j++)
			reverse(m,i,j);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}
}

void reverse(int m[3][3],int i,int j)
{
	int temp;
	temp=m[i][j];
	m[i][j]=m[j][i];
	m[j][i]=temp;
}
