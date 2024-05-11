#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int n;
	printf("nhap gia tri n: "); scanf("%d",&n);
	while(n<=0){
		printf("vui long nhap lai gia tri n: "); scanf("%d",&n);
		
	}
	int b=n;
	int count =0;
	while(n%2==0){
		count++;
		n=n/2;
	}
	printf("Co %d thua so 2 trong so %d",count,b);
}
