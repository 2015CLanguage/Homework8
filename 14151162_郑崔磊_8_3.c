Enter file contents here
#include<stdio.h>
int main()
{
     void input(int a[]);
     void output(int a[]);
     void change(int a[]);
     int a[10],*p;
     p=a;
     printf("input 10 numbers:");
     input(p);
     p=a;
     change(p);
     p=a;
     output(p);
     return 0;
}
void input(int *p)
{
    int *k;
    k=p;
    for(;p<k+10;p++)
        scanf("%d",p);
}
void change(int *p)
{
    int *max,*min,*k,a,b;
    min=max=k=p;
    for(p=k+1;p<k+10;p++)
        {if((*p)<(*min))
            min=p;
         if((*p)>(*max))
            max=p;
        }
    a=*min;*min=*k;*k=a;
    b=*max;*max=*(k+9);*(k+9)=b;

}
void output(int *p)
{
    int *k;
    k=p;
    for(;p<k+10;p++)
        printf("%d\n",*p);
}
