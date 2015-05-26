#include<stdio.h>
void exchange(int *a, int n, int m){
    int i;
	for(i=0;i<n-m;i++){
	    *(a+n+i)=*(a+i);
	}
}
void main()
{
    int i,n,m,a[100]={0};
	printf("请输入n:");
	scanf("%d",&n);
    printf("请输入m:");
	scanf("%d",&m);
	for(i=0;i<n;i++){
	    scanf("%d",a+i);
	}
	exchange(a,n,m);
	for(i=n-m;i<2*(n-m)+m;i++){
	    printf("%5d",*(a+i));
	}
	printf("\n");
}
