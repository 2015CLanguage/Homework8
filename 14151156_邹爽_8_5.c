#include<stdio.h>
int main()
{
	int x,y,z,n,a[100],*p;
	scanf("%d",&n);
	p=a;
	for(x=0;x<n;x++)
	   *(p+x)=x+1;
	x=0;      //x为每次循环的计数变量
	y=0;      //k为按1,2,3报数时的计数变量
	z=0;      //m为退出人数
	while(z<n-1)
	{
		if(*(p+x)!=0)
		y++;
		if(y==3)
		{
			*(p+x)=0;
			y=0;
			z++;
		}
    x++;
	if(x==n)
    x=0;
	} 
	while(*p==0)
	p++;
	printf("The residue is %d",*p);
	return 0;
} 
