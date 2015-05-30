#include<stdio.h>
void move(int[20],int ,int);
int main ()
{
    int a[20],m,n,i;
    printf("一共有多少数字？");
    scanf("%d",&n);
    printf("输入%d数字：\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("你想移动几位数字？");
    scanf("%d",&m);
    move(a,n,m);
    printf("现在的数字是：\n");
    for(i=0;i<n;i++)
     printf("%-3d",a[i]);
     printf("\n");
     return 0;

}
void move(int a[],int n,int m)
{
	int *p,ad;
	ad=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
             *a=ad;
	m--;
	if(m>0)
		move(a,n,m);
}
