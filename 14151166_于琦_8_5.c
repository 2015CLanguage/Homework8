#include<stdio.h>
void main()
{
    int n,m=0,o=0,a[100],i;
	printf("请输入n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    *(a+i)=i+1;
	}
    for(i=0;;){
		if(*(a+i)!=0)
			o++;
		if(o==3){
		*(a+i)=0;
		o=0;
		m++;
		}
		i++;
		if(i==n)
			i=0;
		if(m==n-1)
			break;
	}
	for(i=0;i<n;i++){
		if(*(a+i)!=0)
			printf("%d\n",i+1);
	}
}
