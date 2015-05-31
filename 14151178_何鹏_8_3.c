#include <stdio.h>
void scan(int *p);
void change(int *p);
void print(int *p);
int main()
 {
 	int a[10];
 	int *p; 
 	p=a;
 	printf("请输入10个数\n");
 	scan(p);
 	change(p);
 	print(p);
 	return 0;
 }
void scan(int *p)
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",p+i); 
	}
 }
void change(int *p)
 {
 	int i,temp,*p2;
 	
 	p2=p;
 	for(i=0;i<10;i++)
 	{
	    if(*(p+i)<*p2)
	    p2=p+i;
	}
	temp=*p;
	*p=*p2;
	*p2=temp;
	
	p2=p;
 	for(i=0;i<10;i++)
 	{
	    if(*(p+i)>*p2)
	    p2=p+i;
	}
	temp=*(p+9);
	*(p+9)=*p2;
	*p2=temp;
 }
void print(int *p)
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		printf("%5d",*(p+i));
	}
 }
