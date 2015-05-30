#include<stdio.h>
int a[3][3]={0};
void change(int a[3][3]);
void main()
{
	int k,t,m,n;
	for(k=0;k<3;k++)
	{
		for(t=0;t<3;t++)scanf("%d,",&a[k][t]);
	    printf("\n");
	}
	printf("now:\n");
	change(a);
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++) printf("%d,",a[m][n]);
		printf("\n");

	}
}
void change(int a[3][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			t=a[j][i];
			a[j][i]=a[i][j];
			a[i][j]=t;
		}
}
