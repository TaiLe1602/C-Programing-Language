#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int n;
	printf("nhap 1 so nguyen duong: "); scanf("%d",&n);
	while(n<=0){
		printf("vui long nhap lai: "); scanf("%d",&n);
	}
	int count =0;
	while (n%2==0){
		count++;
		n/=2;
	}
	printf("Co %d thua so 2 trong so %d",count,n);
	
}
