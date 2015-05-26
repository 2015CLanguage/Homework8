#include<stdio.h>
int main()
{
void input(int * );
void change(int * );
void output(int * );
int number[10];
input(number);
change(number);
output(number);
return 0;
}

void input(int * number)
{
int i;
printf("请输入十个数字:");
for(i=0;i<10;i++)
scanf("%d",&number[i]);
}

void change(int * number)
{
int * max,*min,* p,k;
max=min=number;
for(p=number+1;p<number+10;p++)
if(* p> * max) max=p;
  else if(* p< *min)min=p;
  k=number[0];number[0]=* min;;* min=k;
  if(max==number)max=min;
  k=number[9];number[9]=* max;* max=k;
}

void output(int *number)
{int *p;
 printf("这十个数字顺序变为:  ");
 for(p=number;p<number+10;p++)
	 printf("%d ", * p);
 printf("\n");
}
