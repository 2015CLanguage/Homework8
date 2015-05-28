#include<stdio.h>
int main()
{
	void change(int *a);
	int a[10],i,*p;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	p=a;
	change(a);
	for(i=0;i<10;i++)
		printf("%d ",*(p+i));
	return 0;
}

void change(int *a)
{
	int a1[3],i,*p1,*p;
	p1=a1;p=a;
	for(i=2;i>=0;i--)
		*(p1+i)=*(p+i+7);
	for(i=6;i>=0;i--)
		*(p+i+3)=*(p+i);
	for(i=0;i<3;i++)
		*(p+i)=*(p1+i);
}
