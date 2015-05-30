#include<stdio.h>
int main()
{
	int s[3][3],i,j,temp;
	printf("请输入一个3×3的二维数组：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("s[%d][%d]=",i,j);
			scanf("%d",&s[i][j]);
		}
	} 
	printf("原数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",s[i][j]);
		}
		printf("\n");
	}  
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			temp=s[i][j];
			s[i][j]=s[j][i];
			s[j][i]=temp; 
		}
	} 
		printf("新数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",s[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
}
