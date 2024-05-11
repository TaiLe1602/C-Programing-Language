#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int giaithua(int n);
main(){
	int n,k;
	printf("nhap gia tri n ");scanf("%d",&n);
	printf("nhap gia tri k ");scanf("%d",&k);
	double nCk;
	nCk=giaithua(n)/(giaithua(k)*giaithua(n-k));
	printf("to hop %dC%d la: %.2lf",n,k,nCk);	
}
int giaithua(int n){
	if(n==0){
		return 1;
	} else {
		return n*giaithua(n-1);
	}
}
