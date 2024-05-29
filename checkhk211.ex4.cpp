#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

main(){
	char s[100], g[100];
	printf("nhap chuoi 1: ");
	gets(s);
	printf("nhap chuoi 2: ");
	gets(g);
	while(strlen(s)!=strlen(g)){
		printf("nhap lai chuoi 2: ");
		gets(g);
	}
	printf("chuoi tao thanh la: ");
	for(int i=0;i<strlen(s);i++){
		printf("%c%c",s[i],g[i]);
	}
}
