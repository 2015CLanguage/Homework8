#include<stdio.h>
void change(int a[3][3])
{
	int i,j,x;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			x=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=x;
		}
}
void main()
{
	int a[3][3],i,j;
	void change(int a[3][3]);
	printf("请输入数组：\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	change(a);
	printf("转置矩阵为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}
