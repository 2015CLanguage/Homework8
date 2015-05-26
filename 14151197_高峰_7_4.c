#include <stdio.h>
int main(){
	void t(int a[][3]);
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&a[i][j]);
		}
	}
t(a);
    return 0;
}

void t(int a[][3]){
	int i,j,b[3][3];
		for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
		b[i][j]=a[j][i];
		}
	}
			for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
		a[i][j]=b[i][j];
		}
	}
		for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	printf("%d\t",a[i][j]);
		}printf("\n");
    }
}
