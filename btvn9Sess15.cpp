#include<stdio.h>
#include <string.h>

int main(){
	char str[]="hello hola ole",text;
	printf("%s",str);
	printf("\nnhap ky tu muon xoa: ");
	scanf("%c",&text);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==text){
			str[i]=' ';
		}
	}
	printf("mang sau khi bi xoa la: %s",str);
	
	return 0;
}
