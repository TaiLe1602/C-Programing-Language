#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){
	char c;
	printf("nhap 1 ky tu: "); scanf("%c",&c);
	if(c>='a'&&c<='z'){
		printf("%c",c);
	}else if(c>='A'&&c<='Z'){
		printf("%c",c+32);
	} else {
		printf("Day la mot ky so!");
	}
	
}
