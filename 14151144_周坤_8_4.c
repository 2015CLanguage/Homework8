# Homework8
#include <stdio.h>
int main()
{
	void haha(int a[],int m);
	int a[10],b,m,i;
	printf("请输入m值：");
	scanf("%d",&m);
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	tiao(a,m);
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(a+i));
	}
	return 0;
}

void haha(int a[],int m)
{
	int b[10],i;
	for(i=0;i<10;i++)
	{
		if(i<m)
		{
		*(b+i)=*(a+9-m+1+i);
	}
	else
	{
		*(b+i)=*(a+i-m);
	}
	}
	for(i=0;i<10;i++)
	{
		*(a+i)=*(b+i);
	}

}
