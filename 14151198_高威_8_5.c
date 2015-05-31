#include <stdio.h>

int n;
int main()
{
	scanf("%d",&n);
	int N=3*n;
	while (N>n)
	{
		N=(N-n-1)/2 + N -n; 
	}
	printf("%d\n",N);
	return 0;
}
