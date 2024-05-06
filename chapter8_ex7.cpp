#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	int n;
	printf("nhap so n: ");scanf("%d",&n);
	int Ta=0;
	int giaithua =1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
		Ta+=giaithua;
	}
	printf("Ta = %d \n",Ta);
	double Tb=0;
	int sum =0;
	for(int i=1;i<=n;i++){
		sum+=i;
		int giaithuab=1;
		for(int j=1;j<=sum;j++){
			giaithuab*=j;
		}
		Tb+=giaithuab;
	}
	int ngiaithua=1;
	for(int i=2;i<=n;i++){
		ngiaithua*=i;
	}
	printf("Tb = %2.2lf \n",Tb/ngiaithua);
	double Tc=0;
	double dT=1;
	for(int i=1;i<=n;i++){
		dT=dT*exp(1)/i;
		Tc+=dT;
	}
	printf("Tc = %2.2lf",Tc);
	
}
