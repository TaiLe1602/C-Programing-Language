#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int n;
	double T=0;
	float sum = 0;
	int product =1;
	printf("nhap gia tri n: ");scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i;
		product*=i;
		T+=(sum/product);
	}
	printf("gia tri cua tich la: %.2lf",T);
	
}
