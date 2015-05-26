#include<stdio.h>
void move(int a[20],int n,int m);
int main()
{
	int s[20],n,m,i;
	printf("how many numbers?");
	scanf("%d",&n);
	printf("input%dnumbers\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	printf("how many place you want to move?");
	scanf("%d",&m);
	move(s,n,m);
	printf("now they are:\n");
	for(i=0;i<n;i++)
		printf("%3d",s[i]);
	printf("\n");
	return 0;
}
void move(int a[20],int n,int m)
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
