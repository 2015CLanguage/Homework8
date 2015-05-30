#include<stdio.h>
int main()
{
	void t(int a[3][3]);
    int i,j;
	int a[3][3];
	printf("a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("a:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
        printf("\n");
	}
    t(a);
	printf("a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	 }
	 return 0;
}

void t(int a[3][3])
{
	int i,j,t;
	for(i=0;i<=2;i++)
	{
		for(j=i;j<=2;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}

}
