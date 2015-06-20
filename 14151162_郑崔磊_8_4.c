Enter file contents here
#include<stdio.h>
void change(int a[],int n,int m);
void change(int a[],int n,int m)
{
    int i,b,*q;
    for(i=1;i<=m;i++)
    {
        b=*(a+n-1);
        q=a+n-1;
        for(;q>a;q--)
            {*q=*(q-1);}
        *a=b;
    }
}
int main()
{
    int m,n,a[100],*p;
    p=a;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    printf("input numbers:");
    for(;p<a+n;p++)
        scanf("%d",*p);
    change(a,n,m);
    p=a;
    printf("The new numbers are:");
    for(;p<a+n;p++)
        printf("%d\n",*p);
    return 0;
}
