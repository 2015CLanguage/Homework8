#include"stdio.h"
void main()
{	
	void change(int a[], int m);
	int a[10],  m, i;
	printf("Input how many place you want to move：\n");
	scanf_s("%d", &m);
	for (i = 0; i<10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	change(a, m);
	for (i = 0; i<10; i++)
	{
		printf("%3d", *(a + i));
	}
	printf("\n");
}

void change(int a[], int m)
{
	int b[10], i;
	for (i = 0; i<10; i++)
	{
		if (i<m)
			*(b + i) = *(a + 10 - m  + i);
		else
			*(b + i) = *(a + i - m);
	}
	for (i = 0; i<10; i++)
	{
		*(a + i) = *(b + i);
	}
}
