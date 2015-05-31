#include<stdio.h>
//设置玩家个数
#define N 8

void main()
{
	/* ------------变量初始化---------------
	a[i]==0-幸存 
	flag-标志·幸存者是否唯一 
	count-报数计数器
	--------------------------------------*/	
	int *p,a[N]={0},flag=0,count=0,*winner;
	

	//当【幸存者不唯一】时
	while(!flag)
	{
		for(p=a;p<(a+N);p++)
		{
			if(!*p)//发现幸存者
			{
				count+=1;//报数

				//无其它幸存者
				if(winner==p)
				{
					flag=1;
					break;
				}
	
				winner=p;
				if(count==3)//报到3
				{
					*p=1;//Game Over
					count=0;//计数器置零
				}	
			}
		}
	}
	printf("The winner is Player %d.\n",winner-a+1);
}
