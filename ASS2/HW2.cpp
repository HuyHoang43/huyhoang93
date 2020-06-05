#include <stdio.h>
int main(){
	int a, b, c;
	printf("nhap 3 so a, b, c:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a<b){
		if (a<c){
			printf("%d la so min", a);
		}else{
			printf("%d la so min", c);
			}
	}else{
		if(b<c){
			printf("%d la so min", b);
		}else{
			printf("%d la so min", c);
		}
	}
}		
