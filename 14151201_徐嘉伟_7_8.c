#include <stdio.h>
#include <string.h>
int main()
{
	void a(char[]);
	char str[10];
	scanf("%s",&str);
	a(str);
return 0;}

void a(char str[])
{
	int i;
	for(i=strlen(str);i>0;i--){
		str[2*i]=str[i];
		str[2*i-1]=' ';
	}
	printf("%s",str);
}
