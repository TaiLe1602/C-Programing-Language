#include <stdio.h>
#include <conio.h>
#include <math.h>

int n=0;
void SNT(int n);
void SCP(int n);
void SDX(int n);
int main(){
	printf("nhap 1 so tu 0 den 1000: "); scanf("%d",&n);
	printf("cac so nguyen to tu 0 den %d la: ",n); SNT(n);
	
}

void SNT(int n){
	printf("1 ");
	for (int i=2; i<=n;i++){
	int count =0;
	for(int j =1; j<=i;j++){
		if(i%j==0){count++;
		}
	}
	if(count == 2){
		printf("%d",i);
	}
}
};
