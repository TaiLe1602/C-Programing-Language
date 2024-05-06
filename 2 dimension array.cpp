#include <stdio.h>
#include <conio.h>
#include <math.h>

// mang 2 chieu

main(){
	int ave;
	int a[100][100];
	int m,n;
	printf("nhap so hang cua ma tran: "); scanf("%d",&m);
	printf("nhap so cot cua ma tran: "); scanf("%d",&n);
	for(int i = 0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("nhap phan tu a%d%d: ",i+1,j+1);scanf("%d",&a[i][j]);
		}
	}
	printf("ma tran a_%dx%d nhu sau: \n",m,n);
	for(int i = 0; i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
			if(j==n-1){
				printf("\n");
			}
		}
	}
}


