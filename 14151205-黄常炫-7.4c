# include<stdio.h>
void convert(int a[ ][3]);
# define N 3
int a[N][N];

void convert(int a[ ][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			k=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=k;
			
		}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int i,j;
	printf("请输入一个3*3的数组\n");
		for (i=0;i<3;i++)
			for(j=0;j<3;j++)
			{scanf("%d",&a[i][j]);}
	printf("转置后的数组为：\n");
	convert(a);
	

	return 0;
}
