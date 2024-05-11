#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<string.h>

main(){
	char s[100];
	printf("nhap vao day 1 chuoi: ");
	gets(s);
	puts(s);
	for(int i=0;s[i]!='\0';i++){
		if(s[i]== ' '){
		printf("\n");
		}else{
			printf("%c",s[i]);
		}
	}
}
