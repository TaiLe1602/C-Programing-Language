/*code making by TaiLe*/
// find the SNT SCP SDX from 1 to n (0<n<1000)
#include <stdio.h>
#include <conio.h>
#include <math.h>

int n=0;
int a[100];
int SNT(int n);
int SCP(int n);
int reverse(int n);
int main(){
	printf("nhap 1 so 0<n<100: "); scanf("%d",&n);
	while (n<=0 || n>=100){
		printf("vui long nhap lai so 0<n<100: "); scanf("%d",&n);
	} 
	// nhap mang
	for(int i=0; i<n;i++){
		printf("nhap phan tu thu %d trong mang: ",i); scanf("%d",&a[i]);
	}
	// xuat so nguyen to trong mang                      
	printf("cac so nguyen to trong mang la: "); 
	for(int i =0; i<n;i++){
		if(SNT(a[i])==1){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	printf("cac so chinh phuong trong mang la: "); 
	for(int i=0; i<n;i++){
		if(SCP(a[i])==1){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	printf("cac so doi xung trong mang la: ");
	for(int i=0; i<n;i++){
		if(a[i]<10){
			continue;
		} else if(a[i]=reverse(a[i])){
			printf("%d ",a[i]);
		} 
	} 
	/*printf("cac so doi xung tu 1 den %d cach 2 la: ",n); SDX2(n);*/
	getch();
	
}

int SNT(int n){
	int count =0;
	for(int j =1; j<=n;j++){
		if(n%j==0){count++;
		}
	}
	if(count == 2 || n==1){
		return 1;
	} else {return 0;
	}
}


int SCP(int n){
	for (int i =1; i<=n; i++){
		if( i*i == n || n==1){
			return 1;
		} else {
			return 0;
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
