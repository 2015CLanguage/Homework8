#include<stdio.h>
void solve(int *s,int n,int m );
int main()
{
	int n ,m,i,*p;
	printf("有多少个整数：");
	scanf("%d",&n);
	printf("要移动几个位置：");
	scanf("%d",&m);
	printf("请输入%d个整数：\n",n);
	int s[n];
	for(i=0;i<n;i++)
	{
		printf("s[%d]=",i);
		scanf("%d",&s[i]);
	}
	solve(s,n,m);
	printf("现在它们的顺序是：");
	for(p=s;p<s+n;p++)
		printf("%d",*p);
	printf("\n");
	return 0;
}

void solve(int *s,int n,int m)
{
	int temp,*p;
	temp=*(s+n-1);
	for(p=(s+n-1);p>s;p--){
	*p=*(p-1);}
	*s=temp;
	m--;
	if(m>0)
	solve(s,n,m);
}
