#include<stdio.h>
void change(int a[100],int x,int y);
void change(int a[100],int x,int y) 
{
	int *p,t;
	t=*(a+x-1);
	for(p=a+x-1;p>a;p--)
	{
	    *p=*(p-1);
	}
	*a=t;
	y=y-1;
	if(y>0)
		change(a,x,y);
}
int main()
{
	int a[100],n,m,i;
	printf("请输入整数总个数:");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {   
	    printf("请输入第%d个整数:",i+1);	
		scanf("%d",&a[i]);   
	}
	printf("这%d个整数为:",n);
	for(i=0;i<n;i++)
    {   
	    printf("%d,",a[i]);	
	}
	printf("\n");
	printf("请输入要移动的距离:");
	scanf("%d",&m);
	change(a,n,m);
	printf("调整后顺序为:");
	for(i=0;i<n;i++)
		printf("%d,",a[i]);
	printf("\n");
	return 0;
}
