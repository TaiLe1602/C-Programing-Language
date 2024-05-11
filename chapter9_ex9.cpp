#include <stdio.h>
#include <conio.h>
#include <math.h>

main (){
	int n,m;
	printf("nhap 1 so nguyen: "); scanf("%d",&n);
	printf("nhap thu tu phan tu muon lay: ");scanf("%d",&m);
	printf("ky tu thu %d cua %d la: %d",m,n,int(n/(pow(10,m-1)))%10);
}
