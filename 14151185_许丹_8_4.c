#include <stdio.h>
#include <stdlib.h>

int main()
{
    void move(int[20],int,int);
    int number[20],n,m,i;
    printf("how many numbers?");
    scanf("%d",&n);
    printf("input %d numbers:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&m);
    move(number,n,m);
    printf("Now,they are:\n");
    for(i=0;i<n;i++)
        printf("%d",number[i]);
    printf("\n");
    return 0;
}
    void move(int a[20],int n,int m)
    {
        int *p,a_end;
        a_end=*(a+n-1);
        for(p=a+n-1;p>a;p--)
            *p=*(p-1);
        *a=a_end;
        m--;
        if(m>0)move(a,n,m);
    }
