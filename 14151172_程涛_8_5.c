#include<stdio.h>
void move(int *p,int n,int x)
{
	int j;
	for(j=x;j<n-1;j++)
		*(p+j)=*(p+j+1);
	*(p+n-1)=0;
}
void main()
{
    int a[100],t=0,mod=1,i,n,*p=a;
	puts("please input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		*(p+i)=i+1;
	while(t!=n-1)
	{
		for(i=0;i<(n-count);i++)
			if(mod==3){
				flag=1;
				move(p,n,i);
				t++;
			}
			else
				mod++;
	}
	printf("剩下第%d位玩家",*p);
	printf("\n");
}
