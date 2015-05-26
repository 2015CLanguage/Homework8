void main()
{
	void trans(int(*i)[3]);
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    scanf("%d",*(a+i)+j);
		}
	}
	printf("the array used to be:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("%-3d",*(*(a+i)+j));
		}
		printf("\n");
	}
	trans(a);
	printf("now the array is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("%-3d",*(*(a+i)+j));
		}
		printf("\n");
	}
}
void trans(int(*p)[3])
{
	int i,j,t,(*a)[3]=p;
	for(i=0;i<3;i++,p++)
	{
		for(j=i;j<3;j++)
		{   
			t=*(*p+j);
		    *(*p+j)=*(*(a+j)+i);
			*(*(a+j)+i)=t;
		}
	}
}
