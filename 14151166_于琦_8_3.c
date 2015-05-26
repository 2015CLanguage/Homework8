#include<stdio.h>
void input(int *a){
    int i;
	for(i=0;i<10;i++){
	    scanf("%d",a+i);
	}
}
void exchange(int *a){
    int *max, *min, *p, q;
	max=a;
	min=a;
	for(p=a+1;p<a+10;p++){
	    if(*p>*max)
			max=p;
	}
	q=*(a+9);
	*(a+9)=*max;
	*max=q;
	for(p=a+1;p<a+10;p++){
        if(*p<*min)
		min=p;
	}
	q=*a;
	*a=*min;
	*min=q;
}
void output(int *a){
    int i;
	for(i=0;i<10;i++){
	    printf("%5d",*(a+i));
	}
	printf("\n");
}
void main()
{
    int a[10];
	input(a);
	exchange(a);
	output(a);
}
