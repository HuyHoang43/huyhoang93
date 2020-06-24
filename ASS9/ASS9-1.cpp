#include <stdio.h>
#include <string.h>
char kiemTra(char s[100], char n){
    int i, count = 0;
    for(i=0;i<strlen(s);i++){
        if(s[i]==n){
        	printf("ky tu *%c* o vi tri: %d\n",s[i],i);
        	count++;
    	    }
    	}
    	if(count==0){
    	printf("Ky tu muon tim khong co trong chuoi!");
    }
}
int main(){
	char s[100], n;
    int count = 0;
    printf("nhap chuoi: ");
    gets(s);
    printf("chuoi vua nhap la : %s", s);
    printf("\nxin moi ban nhap vao ki tu can tim\n");
    scanf("%c", &n);
    if (kiemTra(s, n) == 0)
    {
        printf("\nki tu %c khong co trong chuoi\n", n);
    }
}

