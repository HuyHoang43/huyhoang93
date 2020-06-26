#include<stdio.h>
 
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int min=n;
	while (n>0){
		int tmp= n % 10;
		n /=10;
		if(tmp<min){
			min = tmp;	
		}
	}
	printf("chu so nho nhat la :%d",min);
}

 
