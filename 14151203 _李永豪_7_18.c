#include <stdio.h>

int main(int argc, const char * argv[]) {
    int yearsum(int year);
    int daysum(int month,int day,int t);
    int year,month,day,days,t;
    printf("please input the date in order of year,month,day!\n");
    scanf("%d,%d,%d",&year,&month,&day);
    t=yearsum(year);
    days=daysum(month,day,t);
    printf("the aim date is the %dth day of that year !\n",days);
    return 0;
}
int yearsum(int year){
    int t=0;
    if(year%4==0&&year%100!=0||year%400==0)
        t=29;
    else
        t=28;
    return t;
    
}
int daysum(int month,int day,int t){
    int a[13]={0,31,t,31,30,31,30,31,31,30,31,30,31};
    int days=0,i;
    for(i=0;i<month;i++){
        days=days+a[i];
    }
    days=days+day;
    return days;
}
