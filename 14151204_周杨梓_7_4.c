#include<stdio.h>
void transposition(int array[4][4]);
int main()
{
	int a[4][4],i,j;
	printf("请任意输入一个3*3的二维整型数组:\n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transposition(a);
	printf("该数组的转置数组为:\n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
		    printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void transposition(int array[4][4])
{
	int temp,i,j;
	for(i=1;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
				temp=array[i][j];
				array[i][j]=array[j][i];
				array[j][i]=temp;
		}
	}
} 
