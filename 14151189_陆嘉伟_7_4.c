#include<stdio.h>
int main()
{
void fun(int array[3][3]);
int a[3][3],i,j;
printf("输入数组：\n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
fun(a);
printf("新数组为：\n");
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		printf("%4d",a[i][j]);
return 0;
} 

void fun(int array[3][3])
{
int i,j,t;
for(i=0;i<2;i++)
	for(j=1;j<3;j++)
	{
	t=array[i][j];
	array[i][j]=array[j][i];
	array[j][i]=t;
	}
}
