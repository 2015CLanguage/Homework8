#include <stdio.h>

void input(int *num);

void trans(int *num);

void output(int *num);



int main()
{

    int num[10];

    input(num);

    trans(num);

    output(num);

    return 0;

}



void input(int *num)

{

    int i;

    printf("请输入10个数:");

    for (i=0; i<10; i++)

    {

        scanf("%d",&num[i]);

    }

}





void trans(int *num)

{

    int t,i,j;

    int *p_min,*p_max,*p;
    
    p_min=p_max=num;

    for (p=num; p<num+10; p++)

    {

        if (*p<*p_min)
            p_min=p;
		else if(*p>*p_max)
			p_max=p;
    }

   t=num[0];
   num[0]=*p_min;
   *p_min=t;
   if (p_max==num)
   		p_max=p_min;
   t=num[9];
   num[9]=*p_max;
   *p_max=t;

}



void output(int *num)

{

    int *p;

    printf("转换后:");

    for (p=num; p<num+10; p++)

    {

        printf("%d ",*p);

    }

    printf("\n");

}

