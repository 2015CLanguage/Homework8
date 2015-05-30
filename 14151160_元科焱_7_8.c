#include <stdio.h>
void change(char a[])
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
    printf("输入4位数\n");
    gets(a);
    change(a);
    puts(a);
    printf("\n");
}
