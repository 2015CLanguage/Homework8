#include<stdio.h>
void shuru();
void jiaohuan(int m[3][3]);
void shuchu(int n[3][3]);
int a[3][3],b[3][3];
int main()
{
	printf("请输入原数组：\n");
	shuru();
	printf("原数组为：\n");
	shuchu(a);
	printf("变化后为：\n");
	jiaohuan(a);
	shuchu(b);
	return 0;
}
void shuru()
{	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
}
void jiaohuan(int m[][3])
{	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			b[j][i]=a[i][j];
}
void shuchu(int n[][3])
{	int i,j;
	for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
			printf("%5d",n[i][j]);
		 printf("\n");
		}
}
