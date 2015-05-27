#include<stdio.h>
void back(int * p,int x,int y)
{
	int * a,i,last;
	last=* (p+x-1);
	for(a=p+x-1;a>p;a--)
	{
		* a= * (a-1);
	}
	* p= last;
	y--;
	if(y>0) back(p, x, y);
}
void main()
{
	int a[20],i,M,N;
	printf("您要输入的数字个数为;");
	scanf("%d",&M);
	//printf("\n");
	printf("请输入数字：");
	for(i=0;i<M;i++)
		scanf("%d",&a[i]);
	printf("往后移动多少个位置：");
	scanf("%d",&N);
	//printf("\n");
	back(a,M,N);
	printf("移动后为:");
	for(i=0;i<M;i++)
		printf("%d ",a[i]);
	printf("\n");
}
