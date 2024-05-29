#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int SNT(int n);
int binary(int n);
main(){
	char s[100],n;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		for(int j=0;j<strlen(s);j++){
			if(s[i]>s[j]){
				int swap=s[j];
				s[j]=s[i];
				s[i]=swap;
			}
		}
	}
	for(int i=0;i<strlen(s);i++){
		printf("%s",s);
	}
	puts(s);
}
