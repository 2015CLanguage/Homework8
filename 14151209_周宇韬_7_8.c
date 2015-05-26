# include <stdio.h>
#include <math.h>
void split(int x);


int main()
{
    int x;
    printf("请输入四位整数:");
    scanf("%d",&x);
    split(x);
    return 0;
}


void split(int x)
{
    int m,n,p;
    m=x%1000;
    n=m%100;
    p=n%10;
    printf("%d %d %d %d",(x-m)/1000,(m-n)/100,(n-p)/10,p);
}
