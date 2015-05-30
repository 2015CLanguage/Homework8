#include<stdio.h>
void change(int a[20],int,int);
int a[20];
void main()
{
	int i,j,n,m;
	printf("n is");
	scanf("%d",&n);
	printf("\n");
	printf("m is");
	scanf("%d",&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	change(a,n,m);
	printf("now:");
    for(j=0;j<n;j++)
		printf("%d",a[j]);
}
void change(int a[20],int n,int m)
{
	int b[20],k,s,t;
	for(k=0;k<n-m;k++)b[k]=a[n-m+k];
	for(s=0;s<n-m;s++)b[n-m+s]=a[s];
    for(t=0;t<n;t++)a[t]=b[t];
}
