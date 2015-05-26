#include <stdio.h>
void convert(int a[3][3]);
int main()
{
int i,j;
int a[3][3];
printf("输入这个三维数组");
   for (i=0;i<3;i++)
	   for (j=0;j<3;j++)
		   scanf("%d",&a[i][j]);
convert (a);
   for (i=0;i<3;i++)
	   {for (j=0;j<3;j++)
	   printf("%10d",a[i][j]);
   printf("\n");}






}


void convert(int a[3][3])
{int i,j,t;
for (i=0;i<3;i++)
  for (j=i+1;j<3;j++)
  {t=a[i][j];
  a[i][j]=a[j][i];
  a[j][i]=t;}


}
