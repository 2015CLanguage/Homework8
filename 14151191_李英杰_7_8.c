#include<stdio.h>
void main()
{
	void output(char *a,int n);
	char num[20];
	printf("please input a four digit: ");
	scanf("%s",num);
    output(num,4);
}
void output(char *a,int n)
{
	int i;
	for(i=n-1;i>0;i--)
	{
		*(a+2*i)=*(a+i);
		*(a+2*i-1)=' ';
	}
	*(a+2*n-1)='\0';
	printf("new string:\n%s\n ",a);
}
