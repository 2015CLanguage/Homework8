#include <stdio.h>

int main()
{
    void trans(int num[],int n,int m);
    int i,n,m,j;
    printf("有几个数？");
    scanf("%d",&n);
    printf("输入%d个数:",n);
    int num[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("后移多少位?");
    scanf("%d",&m);
    trans(num,n,m);
    printf("转换后:");
    for (j=0;j<n;j++)
    {
    	printf("%d ",num[j]);
	}
	printf("\n");
    return 0;
}

void trans(int num[],int n,int m)
{
    int *p,numend;
    numend=*(num+n-1);
    for (p=num+n-1; p>num; p--)
    {
        *p=*(p-1);
    }
    *num=numend;
    m--;
    if (m>0)
    {
        trans(num,n,m);
    }
   
}
