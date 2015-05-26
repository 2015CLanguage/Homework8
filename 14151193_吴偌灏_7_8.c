#include <stdio.h>
void f(int a)
{
	int b,c,d,e;
    b=a/1000;
    c=a/100-10*b;
    d=a/10-100*b-10*c;
    e=a%10;
    printf("%d %d %d %d\n",b,c,d,e);
}
void main()
{
	int a;
    scanf("%d",&a);
    f(a);
}
