#include<stdio.h>
void t(int s[][3]);
void main()
{
	int a[3][3];
	int i,j;
	printf("请输入一个3x3的二维整型数组:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);}//输入二维数组
    t(a);                        //用数组名作为参数
	printf("转置之后为:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);//输出二维数组
		printf("\n");
	}
}

void t(int s[][3])
{
	int b[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{b[j][i]=s[i][j];}  //行列互换
	}
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		s[i][j]=b[i][j];
	}
}
