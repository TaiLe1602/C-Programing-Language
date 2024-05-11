#include <stdio.h>
#include <conio.h>
#include <math.h>
int fi(int n);
main (){
	int n;
	printf("nhap gia tri n: ");scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d ",fi(i));
	}
}
int fi(int n){
	if(n<=2){
		return 1;
	}else return fi(n-1)+fi(n-2);
}
