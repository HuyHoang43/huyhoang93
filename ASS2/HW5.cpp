#include <stdio.h>
int main(){
	int a, b;
	float c, e;
	printf("nhap 2 so a, b:\n");
	scanf("%d%d", &a, &b);
	if (a>=b){
		c = a/b;
		printf("c la :%f", c);
	}else{
		e = a*b;
		printf("e la :%f", e);
	}
}
