#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int a[500],n;
	printf("nhap so phan tu trong mang: "); scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu %d",i+1); scanf("%d",&a[i]);
	}
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int swap = a[j];
				a[j]=a[i];
				a[i]=swap;
			}
		}
	}
	printf("Gia tri nho nhat trong mang la: %d\n",a[0]);
	printf("Gia tri lon nhat trong mang la: %d\n",a[n-1]);
	double t=0,dt=0,s=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+(i+1);
		
		dt=pow(-1,i)*pow(a[i],i+1)/sum;
		t+=dt;
	}
	printf("gia tri t la: %.2lf",t);
}
