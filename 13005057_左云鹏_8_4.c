#include<stdio.h>
void move(int[20],int,int);
int main()
{
	int n[20],x,y,i;
	printf("有多少个数字？\n");//接受输入
	scanf("%d",&x);
	printf("请输入%d个整数：\n",x);
	for(i=0;i<x;i++)
		scanf("%d",&n[i]);
	printf("请输入移动的位数：\n");
	scanf("%d",&y);
	move(n,x,y);//调用函数
	printf("移动后的数列为：\n");
	for(i=0;i<x;i++)
		printf("%d ",n[i]);
	printf("\n");
	return 0;
}

void move(int n[20],int x,int y)//定义移位函数
{
	int *p,end;
	
	end=*(n+x-1);
	for(p=n+x-1;p>n;p--)
		*p=*(p-1);
	
	*n=end;
	y--;
	if(y>0)move(n,x,y);

}
