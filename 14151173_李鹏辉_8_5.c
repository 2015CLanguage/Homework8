#include<stdio.h>
void del(int *p,int n,int x)
{
	int j;
	for(j=x;j<n-1;j++)
		*(p+j)=*(p+j+1);
	*(p+n-1)=0;

}
void main()
{
    int a[100],count=0,flag=1,i,n,*p=a;
	puts("please input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	while(count!=n-1)
	{
		for(i=0;i<(n-count);i++)
			if(flag==3){
				flag=1;
				del(p,n,i);
				count++;
			}
			else
				flag++;
	}
	printf("最后的赢家是:第%d位玩家",*p);
	printf("\n");
}
