#include<stdio.h>
void move(int a[100],int n,int m);
int main()
{	
	printf("Please input the total number of the numbers n：\n");
	int i,a[100],n,m;
	scanf("%d",&n);
	printf("Please input No.%d number：\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%-5d",a[i]);
	printf("\nPlease input how many position to move back m：\n");
		scanf("%d",&m);
	move(a,n,m);
	printf("move %d steps back :\n",m);
	for(i=0;i<n;i++)
		printf("%-5d",a[i]);
	printf("\n");
	return 0;
}
void move(int a[100],int n,int m)
{
	int *p,a_end;
	a_end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=a_end;
	m--;
	if(m>0)
		move(a,n,m);
}
