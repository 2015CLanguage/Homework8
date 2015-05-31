#include <stdio.h>
int n;
void print(int x,int k)
{
	if (x==0)  return ;
	print(x/10,k-1);
	if (k==4)  printf("%d\n",x%10);
	  else printf("%d ",x%10);
}
int main()
{

	scanf("%d",&n);
	print(n,4);
	return 0;
}
