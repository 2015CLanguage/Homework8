#include<stdio.h>
void insert( char str[]);
int main()
{
   char str[80];
   printf("input your figure:\n");
   scanf("%s",str);
   insert(str);
   return 0;
}
void insert( char str[])
{
   int i;
   for(i=3;i>0;i--)
   {
     str[2*i]=str[i];
     str[2*i-1]=' ';
   }
   printf("output:\n%s\n",str);
}
