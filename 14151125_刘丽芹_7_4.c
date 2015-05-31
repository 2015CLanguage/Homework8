#include <stdio.h>

void zhuanzhi(int a[][3])
{
	int i,j,t;
	for (i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			t=a[i][j];
		    a[i][j]=a[j][i];
			a[j][i]=t;
		}
}
int main()
{
    void zhuanzhi(int a[][3]);
	int a[3][3],i,j;
	printf("请输入一个3*3数组:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	printf("您输入的数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	zhuanzhi(a);
	printf("转置后的数组为:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
