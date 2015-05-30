#include<stdio.h>
int main()
{
int n,a[100],*p,i,m,t,x;
printf("共有几人：");
scanf("%d",&n);
p=a;
for(i=0;i<n;i++)
	*(p+i)=i+1;
x=0;
t=0;
m=0;
while(m<n-1)
{
	if(*(p+x)!=0)
		t++;
	if(t==3)
		{
		*(p+x)=0;
		t=0;
		m++;
		}
	x++;
	if(x==n)
		x=0;
}
while(*p==0)
	p++;
printf("留下的是第%d个人",*p);
return 0;
}
