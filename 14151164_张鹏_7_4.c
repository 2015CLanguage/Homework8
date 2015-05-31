#include<stdio.h>
int a[3][3];
int main()
{
	void s(int a[3][3]);
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
			printf("\n");
			for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                printf("%6d",a[i][j]);
                printf("\n");
            }
		s(a);
		printf("转置矩阵\n");
		for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
		printf("\n");
		}
		return 0;
}
void s(int a[3][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
	for(j=i+1;j<3;j++)
	{k=a[i][j];
	 a[i][j]=a[j][i];
	 a[j][i]=k;
	}
}

