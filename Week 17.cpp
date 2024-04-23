/*code making by TaiLe*/
// find the SNT SCP SDX from 1 to n (0<n<1000)
#include <stdio.h>
#include <conio.h>
#include <math.h>

int n=0;
void SNT(int n);
void SCP(int n);
void SDX(int n);
void SDX2(int n);
int reverse(int n);
void SDX2CS(int n);
int main(){
	printf("nhap 1 so 0<n<999: "); scanf("%d",&n);
	while (n<=0 || n>=1000){
		printf("vui long nhap lai so 0<n<1000: "); scanf("%d",&n);
	}
	printf("cac so nguyen to tu 1 den %d la: ",n); SNT(n);
	printf("\ncac so chinh phuong tu 1 den %d la: ",n); SCP(n); printf("\n");
	printf("cac so doi xung tu 1 den %d la: ",n); SDX(n); printf("\n");
	printf("cac so doi xung tu 1 den %d cach 2 la: ",n); SDX2(n);
	getch();
	
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
		printf("%d ",i);
	}
}
};

void SCP(int n){
	for (int i =1; i<=n; i++){
		if( i*i <=n){
			printf("%d ",i*i);
		} else {
			break;
		}
	}
}
void SDX2CS(int n){
	for(int i=10; i<=n;i++){
		if(i==((i%10)*10+i/10)){
			printf("%d ",i);
		}
	}
}
void SDX(int n){
	if(n<100){
		SDX2CS(n);
	}
	else {
		SDX2CS(100);
		for(int i =100; i<=n;i++){
			if(i==((i%10)*100+((i/10)%10)*10+i/100)){
				printf("%d ",i);
			}
		}
	}
}
void SDX2(int n){
	for(int i=10; i<=n;i++){
		if(i==reverse(i)){
			printf("%d ",i);
		}
	}
}
int reverse(int n){
	int reversenum=0;
	while(n>0){
		reversenum = reversenum*10+n%10;
		n=n/10;
	}
	return reversenum;
}
