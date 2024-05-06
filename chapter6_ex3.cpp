#include <stdio.h>
#include <conio.h>
#include <math.h>

//double sqrt(double x);
main(){
	double x;
	printf("nhap 1 so bat ky: "); scanf("%lf",&x);
	if(x>=0){
		printf("%2.5lf",sqrt(x));
	}else{
		printf("so vua nhap be hon 0");
	}
}
