#include <stdio.h>
#include <conio.h>
#include <math.h>
void binary(int n);
main (){
	int n;
	printf("nhap 1 so nguyen: "); scanf("%d",&n);
	binary(n);
}

void binary(int n){
	if(n==0){
		return;
	} else{
	
	printf("%d",n%2);
	return binary(n/2);}
	
}
