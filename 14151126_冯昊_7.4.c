#include<stdio.h>
#define N 3
int a[N][N];
void hang(int a[][3]);
int main()
{
	void hang(int a[][3]);
	int i,j;
	printf("请输入一个3*3的数组：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("你输入的数组为：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
    hang(a);
    printf("转置后的数组为：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void hang(int a[][3])
{
	int i,j,t;
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
}
