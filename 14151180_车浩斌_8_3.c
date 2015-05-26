#include<stdio.h>
void input(int *b){
    int i;
	for(i=0;i<10;i++){
	    scanf("%d",b+i);
	}
}
void exchange(int *b){
    int *max, *min, *p, q;
	max=b;
	min=b;
	for(p=b+1;p<b+10;p++){
	    if(*p>*max)
			max=p;
	}
	q=*(b+9);
	*(b+9)=*max;
	*max=q;
	for(p=b+1;p<b+10;p++){
        if(*p<*min)
		min=p;
	}
	q=*b;
	*b=*min;
	*min=q;
}
void output(int *b){
    int i;
	for(i=0;i<10;i++){
	    printf("%5d",*(b+i));
	}
	printf("\n");
}
void main()
{
    int b[10];
	input(b);
	exchange(b);
	output(b);
}
