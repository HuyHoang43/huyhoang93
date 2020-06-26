#include <stdio.h>
#include <string.h>

int main(){
  	char s[100];
	printf("nhap chuoi:");
	scanf("%s",s);
    int nguyenam=0;
    int kytukhac=0;
    for(int i=0;i<strlen(s); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            nguyenam++;
    	}else{
    		kytukhac++;
		}
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d ky tu khac", s,nguyenam, kytukhac);
	return 0;  
}

