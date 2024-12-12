#include<stdio.h>
#include <string.h>

int main(){
	char str[]="12307!@#*agdbchd";
	int character=0;
	int num=0;
	int special=0;
	for(int i=0;i<strlen(str);i++){
		if(isalpha(str[i])){
			character++;
		}else if(isdigit(str[i])){
			num++;
		}else{
			special++;
		}
	}
	printf("ky tu la chu cai trong chuoi la %d\nky tu la chu so la %d\nky tu la ky tu dac biet la %d",character,num,special);
	return 0;
}
