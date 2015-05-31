#include<stdio.h>
int s[3][3];
void c(int s[3][3]);
int main()

{
	int i,j;

	printf("请输入数组：\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&s[i][j]);
	
	printf("原数组为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",s[i][j]);
		printf("\n");
	}

	c(s);//调用函数

	printf("转置的数组为：\n");
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
			printf("%5d",s[i][j]);
		printf("\n");
	}

	return 0;

}

void c(int s[3][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
		{
			t=s[i][j];
			s[i][j]=s[j][i];
			s[j][i]=t;
		}
}
