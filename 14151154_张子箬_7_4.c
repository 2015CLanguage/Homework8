#include<stdio.h>
int a[3][3];
int main()
{
	void change(int a[][3]);
	int i,j;
	printf("请输入数组：\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	change(a);
	printf("转置：\n");
	for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
			printf("%3d",a[i][j]);
	printf("\n");}
	return 0;
}
void change(int a[][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			k=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=k;
		}
}
