#include"stdio.h"
#define N 3
void change(int a[][3]);
int a[N][N];
void main()
{
	int i,j;
	printf("请输入一个3*3数组\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("输入的数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
    change(a);
	printf("转置后为\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
}
void change(int a[][3])
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
