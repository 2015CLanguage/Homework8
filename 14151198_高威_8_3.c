#include <stdio.h>

int a[10];
void scan()
{
	for (int i=1; i<=10; i++)
	scanf("%d",&a[i]);
}
void solve()
{
	int i;
	int maxp=1,max=a[1],minp=1,min=a[1];
	for (i=1; i<=10; i++)
	{
		if (max<a[i])
		{
			max=a[i];
			maxp=i;
		}
		if (min>a[i])
		{
			min=a[i];
			minp=i;
		} 
	}
	int t=a[1];a[1]=a[minp];a[minp]=t;
	t=a[10]; a[10]=a[maxp];a[maxp]=t;
}

void print()
{
	int i;
	for (i=1; i<=10; i++)  printf("%d ",a[i]);
	printf("\n");
}
int main()
{

	scan();
	solve();
	print(); 
	return 0;
}
