#include<stdio.h>
int main()
{
     int n,i,a[100],*p,m,k;
     p=a;
     printf("input number of person:n=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
         *(p+i)=i+1;
     i=0;
     k=0;
     m=0;
     while(m<(n-1))
     {
         if(*(p+i)!=0)
            {
             k++;
             if((k%3)==0)
                 {
                  *(p+i)=0;
                  m++;
                 }
            }
         i++;
         if(i==n)
             i=0;
     }
     for(i=0;i<n;i++)
        if(*(p+i)!=0)
            printf("%d",*(p+i));
     return 0;
}
