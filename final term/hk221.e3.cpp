#include <stdio.h>
#include <conio.h>
#include <math.h>
int n;
int binary(int n);
main(){
	printf("nhap 1 so nguyen duong: "); scanf("%d",&n);
	while (n<0){
		printf("nhap 1 so nguyen duong: "); scanf("%d",&n);
	}
	int count;
	for(int i=1;i<n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d la so nguyen to!",n);
	} else {
		printf("%d khong la so nguyen to!",n);
	}
	binary(n);
}

int binary(int n){
	if(n==0){
		return 0;
	}else{
		printf("%d",n%2);
		return binary(n/2);
	}
}
