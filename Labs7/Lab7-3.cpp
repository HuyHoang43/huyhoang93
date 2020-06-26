#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	if(n<2){
		printf("%d khong phai la snt",n);
	}else if(n==2){
		printf("&d la snt");
	}else if(n>2){
		if(n%2 ==0){
			printf("%d khong phai snt",n);
		}else{
			for (int i=2;i<n;i++){
				if(n%i ==0){
					printf("%d khong phai snt",n);
					break;
				}else{
					printf("%d la snt",n);
					break;
				}
			}
		}
		printf("%d la snt",n);
	}
}
	
	
	
