#include<stdio.h>
int main()
{
	void move(int [100],int,int);
	int number[100],i,m,n;
	printf("共多少数?");
	scanf("%d",&m);
	printf("输入%d个数:\n",m);
	for(i=0;i<m;i++)
		scanf("%d",&number[i]);
	printf("向后移多少个数?");
	scanf("%d",&n);
	move(number,m,n);
	printf("输出为:\n");
		for(i=0;i<m;i++)
			printf("%2d",number[i]);
		printf("\n");
		return 0;
}
void move(int array[100],int m,int n)
{
	int *p,array_end;
	array_end=*(array+m-1);
	for(p=array+m-1;p>array;p--)
		*p=*(p-1);
	*array=array_end;
	n--;
	if(n>0)
		move(array,m,n);
}
