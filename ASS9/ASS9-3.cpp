#include<stdio.h>
#include<string.h>
 
int main() {
   	char s[100],s2[50];
   	int n,tmp,i,j;
   	printf("Chuoi truoc khi sap xep: %s\n",s);
    scanf("%s",s);
	for(i=0;i<strlen(s)-1;i++){
      	for(j=i+1;j<strlen(s);j++){
        	if(s[i]>s[j]) {
            	tmp = s[i];
            	s[i] = s[j];
            	s[j] =tmp;
            }
        }
    }
   	printf("\nChuoi sau khi sap xep %s \n",s);
   	return 0;
   	int c;
   	printf("\nNhap so chuoi bat ky: \n",c);
    scanf("%d",&c);
    
   	for(i=1;i<c;i++){
      	for(j=1;j<c;j++) {
         	if(strcmp(s[j-1],s[j])>0){
            	strcpy(s2,s[j-1]);
            	strcpy(s[j-1],s[j]);
            	strcpy(s[j],t);
         	}
      	}
   	}
 
   	printf("\nSap xep thu tu cua cac chuoi:");
   	for(i=0;i<c;i++){
      	printf("\n%s",s[i]);
   	}
   	return 0;
}
// e bi loi o dong 27, thay xem va sua giup e voi, thanks thay
