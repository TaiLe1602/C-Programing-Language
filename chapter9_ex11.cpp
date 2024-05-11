#include <stdio.h>
#include <conio.h>
#include <math.h>
double luythua(double x,int n);
main(){
	double x;
	int n;
	printf("nhap gia tri x: "); scanf("%lf",&x);
	printf("nhap gia tri n: "); scanf("%d",&n);
	printf("%.2lf^%d =  %.2lf",x,n,luythua(x,n));
}
double luythua(double x,int n){
	if(n==0){
		return 1;
	}else{
		return x*luythua(x,n-1);
	}
}
