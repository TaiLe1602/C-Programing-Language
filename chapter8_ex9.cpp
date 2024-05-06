#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	double m;
	double p;
	int t;
	printf("nhap so tien gui ban dau: ");scanf("%lf",&m);
	printf("nhap lai suat hang thang (%): ");scanf("%lf",&p);
	printf("nhap thoi gian gui: ");scanf("%d",&t);
	printf("tong so tien theo cach 1 la: %.2lf \n",m+m*p*t/100);
	printf("tong so tien theo cach 2 la: %.2lf", m*pow((1+p/100),t));
}
