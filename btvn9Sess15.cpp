#include<stdio.h>
#include <string.h>

int main(){
	char str[]="hello hola ole",text;
	int length=strlen(str),count=0;
	printf("%s",str);
	printf("\nnhap ky tu muon xoa: ");
	scanf("%c",&text);
	
	for(int i=0;i<length;i++){
		if(str[i]==text){
			for(int j=i;j<length;j++){
				str[j+1]=str[j];
			}
		i--;
		count++;
		length--;
		}
	}
	if(count==0){
		printf("%d khong co trong chuoi");
	}
	
	printf("mang sau khi bi xoa la: %s",str);
	
	return 0;
}
