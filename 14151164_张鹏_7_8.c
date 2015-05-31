#include<stdio.h>
int main()
{
	void a(char[]);
	char str[8];
	scanf("%s",str);
	a(str);
	return 0;
}
void a(char str[])
{
    int i;
    for(i=8;i>0;i--)
    {
        str[2*i]=str[i];
        str[2*i-1]=' ';
    }
    printf("\n%s\n",str);
}
