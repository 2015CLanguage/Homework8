#include <stdio.h>
int main()
{
	void a(int b[ ][3]);
	int b[3][3];
	int i,j;
	printf("输入数组:\n");
	for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	      scanf("%d",&b[i][j]);
	a(b);
	printf("转置后的矩阵为:\n");
	for(i=0;i<3;i++)
	   {
	    for(j=0;j<3;j++)
	    printf("%5d",b[i][j]);
	    printf("\n");
	}
	return 0;}

void a(int b[3][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
	   for(j=i+1;j<3;j++){
	   	t=b[i][j];
	   	b[i][j]=b[j][i];
	   	b[j][i]=t;
	   }
}
