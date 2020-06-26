#include <stdio.h>
int main(){
	int a, b;
	float c, e;
	printf("nhap a:\n");
	scanf("%d", &a);
	printf("nhap b:\n");
	scanf("%d",&b);
	if (a>=b){
		c = a/b;
		printf("c la :%0.2f", c);
	}else{
		e = a*b;
		printf("e la :%0.2f", e);
	}
}
