#include"stdio.h"
void swap(int[50],int,int);
void main()
{
	int number[50],n,m,i;
	printf("输入n,m\n");
	scanf("%d",&n);
	scanf("%d",&m);
	printf("输入这%d个数\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	swap(number,n,m);
	printf("调整之后为:\n");
	for(i=0;i<n;i++)
		printf("%5d",number[i]);
	printf("\n");
}

void swap(int array[50],int n,int m)
{
	int *p,t;
	t=*(array+n-1);
    for(p=array+n-1;p>array;p--)
		*p=*(p-1);
	*array=t;
	m--;
	if(m>0) swap(array,n,m);
}
