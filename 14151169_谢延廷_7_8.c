#include <stdio.h>
#include <string.h>
void add(char a[100]);
int main()
{char a[100];
	printf("输入四个数字");
      gets(a);
add(a);	
      puts(a);


return 0;
}

void add(char a[100])
{
int i;
for (i=strlen(a);i>0;i--)
{   a[2*i]=a[i];
    a[2*i-1]=' ';}

}
