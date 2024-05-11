#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>

main(){
	char s[100];
	printf("nhap 1 chuoi: ");
	gets(s);
	printf("chuoi da nhap la: ");
	puts(s);
	for(int i = strlen(s)-1;i>=0;i--){
		printf("%c",s[i]);
	}
}
