#include <stdio.h>
#include <conio.h>
#include <math.h>

double pow(double x, double y);
main(){
	float m,n;
	printf("nhap luy thua m^n muon tinh: ");scanf("%f%f",&m,&n);
	printf("%2.2f^%2.2f = %2.2f",m,n,pow(m,n));
}
