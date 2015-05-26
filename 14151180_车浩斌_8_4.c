#include<stdio.h>
void exchange(int *b, int n, int m){
    int i;
	for(i=0;i<n-m;i++){
	    *(b+n+i)=*(b+i);
	}
}
void main()
{
    int i,n,m,b[100]={0};
	printf("输入n:");
	scanf("%d",&n);
    printf("输入m:");
	scanf("%d",&m);
	for(i=0;i<n;i++){
	    scanf("%d",b+i);
	}
	exchange(b,n,m);
	for(i=n-m;i<2*(n-m)+m;i++){
	    printf("%5d",*(b+i));
	}
	printf("\n");
}
