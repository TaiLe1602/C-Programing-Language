//xuat ra cac so doi xung trong mang (moi so xuat 1 lan) tu nho den lonn
#include <stdio.h>
#include <conio.h>
#include <math.h>
int reverse(int x);
main(){
	int a[100];
	int b[100];
	int n;
	printf("vui long nhap so phan tu mang: "); scanf("%d",&n);
// nhap mang	
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);scanf("%d",&a[i]);
	}
	int lengthb =0;
	for(int i =0;i<n;i++){
		if(a[i]==reverse(a[i])){
			b[lengthb]=a[i];
			lengthb++;
		}
	}
	for(int i=0;i<lengthb-1;i++){
		for(int j=i+1;j<lengthb;j++){
			if(b[i]>b[j]){
				int swap;
				swap = b[j];
				b[j]=b[i];
				b[i]=swap;
			}
		}
	}
	for(int i=0; i<lengthb;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	int c[100];
	int lengthc=0;
	for(int i=0; i<lengthb;i++){
		int loopcount=0;
		for(int j=i+1;j<lengthb;j++){
			if(b[i]==b[j]){
				loopcount++;
			}
			
		}
		if(loopcount==0){
				c[lengthc]=b[i];
				lengthc++;
			}
	}
	for(int i=0;i<lengthc;i++){
		printf("%d ",c[i]);
	}
	getch();
}
int reverse(int x){
	int reverseN=0;
	if(x==0){
		return 1;
	}
	while(x!=0){
		reverseN=reverseN*10+x%10;
		x=x/10;
		
	}
	return reverseN;
}
