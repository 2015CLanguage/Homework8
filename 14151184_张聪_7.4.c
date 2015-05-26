#include<stdio.h>
#define N 3
int array[N][N];
void convert(int array[N][N]);
int main()
{
	int i,j;
	printf("input the array");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			scanf("%d",&array[i][j]);
		printf("\n");
	}
	printf("\noriginal array is:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%5d",array[i][j]);
		printf("\n");
	}
	convert(array);
	printf("\nconvert array:\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%5d",array[i][j]);
		printf("\n");
	}
	return 0;
}
void convert(int array[N][N])
{
	int i,j,t;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			t=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=t;

		}
			
	}
}
