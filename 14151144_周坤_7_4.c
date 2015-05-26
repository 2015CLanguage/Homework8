
#include <stdio.h>
int main()
{
void p(int a);
	int a;
scanf("%d",&a);
p(a);
    return 0;
}

void p(int a)
{
	int b,c,d,e;
   b=a/1000;
   c=a%1000/100;
   d=a%100/10;
   e=a%10;
    printf("%d %d %d %d",b,c,d,e);
}
