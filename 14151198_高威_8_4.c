#include <stdio.h>

int a[100],b[100];
int n,m;

void Solve(int a[])
{
	int i;
	for (i=1; i<=m; i++)
	b[i]=a[n-m+i];
	for (i=m+1; i<=n; i++)
	b[i]=a[i-m];
	for (i=1; i<=n; i++) a[i]=b[i];	
} 

int main()
{
	scanf("%d%d",&n,&m);
	for (int i=1; i<=n; i++)  scanf("%d",&a[i]);
	Solve(a);
	for (int i=1; i<=n; i++)  printf("%d ",a[i]);printf("\n");
	return 0;
}
