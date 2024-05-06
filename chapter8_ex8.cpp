#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	float a;
	printf("nhap 1 so 1 < a < 2: "); scanf("%f",&a);
	int n=0;
	while (a>0){
		n++;
		a-=a-1/n;
	}
	printf("gia tri cua n la: %d",n);
}
