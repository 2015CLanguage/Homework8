#include<stdio.h> 
void change(int x[3][3],int y[3][3]); 
void main() 
 { 
 	int a[3][3],b[3][3],i,j; 
	printf("请输入3*3的数组\n"); 
	for(i=0;i<3;i++) 
 		for(j=0;j<3;j++) 
 			scanf("%d",&a[i][j]); 
 	printf("\n这个数组是:\n"); 
	for(i=0;i<3;i++) 
 	{ 
 		for(j=0;j<3;j++) 
 			printf("%3d",a[i][j]); 
 		printf("\n"); 
 	} 
 	change(a,b); 
 	printf("转置之后:\n"); 
 	for(i=0;i<3;i++){ 
 		for(j=0;j<3;j++) 
 			printf("%3d",b[i][j]); 
 		printf("\n"); 
 	} 
 
 } 
 void change(int x[3][3],int y[3][3]) 
{ 
	int i,j; 
for(i=0;i<3;i++) 
 		for(j=0;j<3;j++) 
			y[i][j]=x[j][i]; 
} 
