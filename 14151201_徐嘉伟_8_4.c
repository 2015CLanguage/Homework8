
#include<stdio.h>
void main()
{
	void move(int a[],int n,int m);
	int a[50],n,m,i;
	printf("请输入n,m的值:\n");
	scanf("%d%d",&n,&m);
	printf("请输入数列\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	move(a,n,m);
	printf("变换后数列为\n");
	for(i=0;i<n;i++)
		printf("%3d",*(a+i));
	printf("\n");
}
void move(int a[],int n,int m)
{
        int *p=a,end;
	end=*(p+n-1);
	for(p=a+n-1;p>a;p--){
        *p=*(p-1);
	}
	*a=end;
	m--;
	if(m>0)
		move(a,n,m);
}
