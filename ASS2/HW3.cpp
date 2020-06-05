#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, d;
	printf("nhap vao 3 so a, b, c:\n");
	scanf("%f%f%f", &a, &b, &c);
	if (a==0){
		if(b==0){
			if(c==0){
				printf("pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
				
			}
		}else{
			printf("pt co 1 nghiem :%f", -b/c);
		}
	}else{
		if(d>0){
			printf("pt co 2 nghiem :%f,%f", (-b+sqrt(d))/(2*a)), (-b-sqrt(d))/(2*a)); 
		}else{
			if(d==0){
				printf("pt co nghiem kep :%f", -b/(2*a));
			}else{
				printf("pt vo nghiem");
				}
			}
		}
	}		
