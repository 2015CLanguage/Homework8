# include<stdio.h>

void move(int number[30],int n,int m)
{
	int *p,numberend;
	numberend=*(number+n-1); 
	for(p=number+n-1;p>number;p--)
		*p=*(p-1);
	*number=numberend;
	m--;
	if(m>0)
		move(number,n,m);
}


int main(void)

{
	int number[30],n,m,i;
	printf("请输入整数的个数n:\n");
	scanf("%d",&n);
	printf("请输入这%d个整数：\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	printf("请输入移动的位数：\n");
	scanf("%d",&m);
	move(number,n,m);
	printf("处理后的数为：\n");
	for(i=0;i<n;i++)
	printf("%d",number[i]);
	printf("\n");
	return 0;
}
