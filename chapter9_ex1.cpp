#include <stdio.h>
#include <conio.h>
#include <math.h>
void ptb1(double b, double c);
void ptb2(double a, double b, double c);
main (){
	double a,b,c;
	printf("nhap cac tham so cua phuong trinh ax^2+bx+c=0\n");
	printf("nhap tham so a: ");scanf("%lf",&a);
	printf("nhap tham so b: ");scanf("%lf",&b);
	printf("nhap tham so c: ");scanf("%lf",&c);
	if(a==0){
		ptb1(b,c);
	}else {
	ptb2(a,b,c);}
}
void ptb1(double b, double c){
	if(b==0&&c!=0){
		printf("phuong trinh vo nghiem !");
	} else if(b==0 && c==0){
		printf("phuong trinh vo so nghiem !");
	} else { printf("phuong trinh co 1 nghiem la %lf", -c/b);
	}
}
void ptb2(double a, double b, double c){
	double delta = b*b-4*a*c;
	if(delta<0){
		printf("phuong trinh khong co nghiem thuc !");
	} else if (delta ==0){
		printf("phuong trinh co nghiem kep %.2lf",(-b+sqrt(delta))/4/a);
	} else {
		printf("phuong trinh co hai nghiem x1 = %.2lf và x2 = %.2lf",(-b+sqrt(delta))/4/a,(-b-sqrt(delta))/4/a);
	}
	
}
