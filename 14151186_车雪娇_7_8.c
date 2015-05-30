#include <stdio.h>
#include <string.h>

int main()
{
   int p(char []);
   char str[10];
   scanf("%s",str);
   p(str);
   return 0;
}
int p(char str[])
{
    int i;
    for (i=strlen(str);i>0;i--)
    {
        str[2*i]=str[i];
        str[2*i-1]=' ';
    }
    printf("output:\n%s\n",str);
}

