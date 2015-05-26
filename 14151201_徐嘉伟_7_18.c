#include <stdio.h>
int main()
{
	int leap(int year);
	int ts(int month,int day);
	int year,month,day,a;
	printf("输入日期:");
	scanf("%d,%d,%d",&year,&month,&day);
	a=ts(month,day);
	if(leap(year)&&month>=3)
	    a=a+1;
	printf("这是这一年的第%d天",a);
return 0;}

int leap(int year)
{
	int leap;
	if(year%100!=0){
	    if(year%4==0){
	    	leap=3;
		}
		else
		leap=0;
	}
	else{
		if(year%400==0){
			leap=3;
		}
		else
		leap=0;
	}
	return(leap);
}

int ts(int month,int day)
{
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
	    day=day+b[i];
	    return(day);
}
