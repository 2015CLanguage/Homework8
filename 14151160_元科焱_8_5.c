#include<stdio.h>
void main(){
	int a, b, c, n, number[100], *p;
	printf("输入人数：");
	scanf_s("%d", &n);
	p = number;
	for (a = 0; a < n; a++)
		*(p + a) = a + 1;
	a = 0;
	b = 0;
	c = 0;
	while (c < n - 1){
		if (*(p + a) != 0)
			b++;
		if (b == 3){
			*(p + a) = 0;
			b = 0;
			c++;
		}
		a++;
		if (a == n)
			a = 0;
	}
	while (*p == 0)
		p++;
	printf("最为第%d号", *p);
}
