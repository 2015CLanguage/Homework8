#include<stdio.h>
void tra(int x[][3])
{
	int i,j,temp,flag[3][3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i!=j)&&(!flag[i][j]))
			{	temp=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=temp;
			}
			flag[i][j]=flag[j][i]=1;//1表示该位置已经发生转置
		}
	}
}
void input(int x[3][3],int n)
{
	int i;
	for(i=0;i<3;i++)
		scanf("%d",&x[n-1][i]);
}
void main()
{
	int a[3][3],i,j;
	printf("请输入3×3数组:\n");
	printf("请输入第一行：\n");
	input(a,1);
	printf("请输入第二行：\n");
	input(a,2);
	printf("请输入第三行：\n");
	input(a,3);
	tra(a);
	printf("转置后为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}
