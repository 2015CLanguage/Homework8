# Homework8
#include <stdio.h>
int main()
{ 
  void input(int *);
  void deal(int *);
  void output(int *);
  int number[10];
  input(number);
  deal(number);
  output(number);
  return 0;
}

void input(int *number)
{
 int i;
 printf("input 10 number:");
 for (i=0;i<10;i++)
	 scanf("%d",number[i]);
}

void deal(int * number)
{
int * max,*min,* p,t;
max=min=number;
for(p=number+1;p<number+10;p++)
if(* p> * max) max=p;
  else if(* p< *min)
      min=p;
  t=number[0];number[0]=* min;;* min=t;
  if(max==number)
      max=min;
  t=number[9];number[9]=* max;* max=t;
}

void output(int *number)
{int *p;
 printf("Now,they are:  ");
 for(p=munber;p<number+10;p++)
	 printf("%d", * p);
 printf("\n");
}
