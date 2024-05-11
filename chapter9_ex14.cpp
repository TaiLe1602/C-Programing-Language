#include <stdio.h>
#include <conio.h>
#include <math.h>
int giaithua(int n);
main(){
	int n;
	double x;
	printf("nhap gia tri n: ");scanf("%d",&n);
	printf("nhap gia tri x: ");scanf("%lf",&x);
	double s=1;
	if(n%2 ==0){
		for(int i=2;i<=n;i=i+2){
			s=s+pow(-1,i/2)*pow(x,i)/giaithua(i);
		}
	} else {
		for(int i=3;i<=n;i=i+2){
			s=s+pow(-1,i/2)*pow(x,i)/giaithua(i);
	}
}
	printf("gia tri cua s la: %.2lf",s);
	
}
int giaithua(int n){
	int product=1;
	for(int i=1;i<=n;i++){
	product*=i;
	}
	return product;
}
