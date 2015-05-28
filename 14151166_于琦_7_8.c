#include <stdio.h>
void exchange(char a[])
{
    int i;
    for(i=3;i>0;i--){
        a[2*i]=a[i];
        a[2*i-1]=' ';
    }
}
void main()
{
    char a[8];
    int i;
    printf("请输入4位数\n");
    gets(a);
    exchange(a);
    puts(a);
    printf("\n");
}
