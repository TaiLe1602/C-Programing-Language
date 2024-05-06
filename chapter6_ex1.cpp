#include <stdio.h>
#include <conio.h>
#include <math.h>
double 
main(){
	int m,n;
	printf("nhap chieu dai hcn: "); scanf("%d",&m);
	printf("nhap chieu rong hcn: "); scanf("%d",&n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if((i==1||i==m||j==1)&&j!=n){
				 printf("* ");
				 } else if(j==n){
				printf("*\n");
			}else{printf("  ");
			}
		}
	}
}
