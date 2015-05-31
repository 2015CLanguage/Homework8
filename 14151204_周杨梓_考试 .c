#include<stdio.h>
void inversion(char a[80],char b[80],int n);
int main()
{
	char a[80],b[80];
	int i,n;
    printf("请输入字符串:\n");
    gets(a);
	for(i=0;;i++)
	{
		if(a[i]=='\0')
		{
			n=i;
		    break;
		}
	}
    inversion(a,b,n);
	printf("反转后的字符串为:%s\n",b);
    return 0;
}
void inversion(char a[80],char b[80],int n)
{
	int i,j,k,l,m;
	k=-1;
	j=n;
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			l=i-k-1;
			k=i;
			m=j-l-1;
			j=j-1-l;
			b[j]=' ';
			for(;l>0;l--)
            {
				j++;
				b[j]=a[i-l];
			}
			j=m;
		}
	}
	for(i=k+1,j=0;a[i]!='\0';i++)
	{
		b[j]=a[i];
		j++;
	}
	b[n]='\0';
}
