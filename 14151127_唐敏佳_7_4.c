#include "stdio.h"

int t(int s[3][3]);
int main()
{
	int s[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	printf("原数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",s[i][j]);
		}
		printf("\n");
	}
	printf("转置后的数组为：\n");
	t(s);
	return 0;
}
int t(int s[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",s[j][i]);
		}
		printf("\n");
	}
	return 0;
}
