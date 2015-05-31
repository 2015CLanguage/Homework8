#include <stdio.h>

 int main()
 { 
	 int a[10];
	 void input(int *a);
	 void change(int *a);
	 void print(int *a);
	 input (a);
	 change(a);
	 print(a);
	 return 0;
 }
void input(int *a)
 {
	 int i;
	 printf("请输入十个整数：\n");
	 for (i = 0; i<10; i++)
		 scanf("%d", &a[i]);
 }
 void change(int *a)
 {
	 int i, n;
	 int *p = a;
	 int *q = a;
	 for (i = 1; i < 10; i++)
	 {
		 if (*p < *(a+i))
		 {
			 p = a+i;
		 }
	 }
	 for (i = 1; i < 10; i++)
	 {
		 if(*q > *(a+i))
		 {
			 q = a+i;
		 }
	 }
	 n = a[0];
	 a[0] = *q;
	 *q = n;
	 n = a[9];
	 a[9] = *p;
	 *p = n;
 }
 void print(int *a)
 {
	 int i;
	 printf("变化后的结果是：\n");
	 printf("%d", a[0]);
	 for (i=1; i<10; i++)
		 printf(", %d", a[i]);
	 printf("\n");
 }
