#include <stdio.h>
#include <conio.h>
#include <math.h>
int n, a[100];
void sort(void);
main(){
	printf("nhap 1 so n lon hon 10: "); scanf("%d",&n);
	while(n<=10){
		printf("nhap 1 so n lon hon 10: "); scanf("%d",&n);
	}
	for(int i=0;i<n;i++){
		printf("moi nhap so thu %d: ",i+1);scanf("%d",&a[i]);
	}
	sort();
	printf("so lon nhat la: %d\n",a[n-1]);
	printf("so nho nhat la: %d\n",a[0]);
	
}

void sort(void){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int swap = a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
}

