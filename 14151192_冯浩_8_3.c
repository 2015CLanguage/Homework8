#include<stdio.h>
float a[10],*p;
void shuru();
void chuli();
void shuchu();
int main()
{
	shuru();
	chuli();
	shuchu();
	return 0;
}
void shuru()
{
	printf("请输入10个数字:\n");
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
}
void chuli()
{	
	int i;
	printf("\n原数据为：\n");
	for(i=0;i<10;i++)
		printf("%-8.2f",a[i]);
	float *max,*min,t;
	p=a;
	max=p;
	min=p;
	for(i=1;i<10;i++)
		{if(*max<*(p+i))
			max=p+i;
		 if(*min>*(p+i))
			min=p+i;
		}

	t=*max;
	*max=*(p+9);
	*(p+9)=t;
	t=*min;
	*min=*p;
	*p=t;
}
void shuchu()
{
	int i;
	printf("\n处理后的数据为:\n");
	for(i=0;i<10;i++)
		printf("%-8.2f",a[i]);
	printf("\n");
}
