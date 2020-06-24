#include <stdio.h>

int main(){
	int n;
		printf("nhap n:\n");
		scanf("%d",&n);
		int S=0;
		printf("danh sach cac uoc cu n la:\n",n);
		for (int i=1;i<n;i++){
			if(n%i==0){	
				S+=i;
				printf("%5d",i);
			}
	}
	printf("\ntong cac uoc : %d",S);
}
	
