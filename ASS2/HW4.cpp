#include <stdio.h>
#include <math.h>
int main(){
        float a, b, c, p, s;
        printf("canh so 1: ");
        scanf("%f", &a);
        printf("canh so 2: ");
        scanf("%f", &b);
        printf("canh so 3: ");
        scanf("%f", &c);
        if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
                printf("Day la ba canh cua tam giac");
                p = (a+b+c)/2;
                printf("chu vi cua tam giac la :%f", p);
                s = sqrt(p*(p-a)*(p-b)*(p-c));
                printf("dien tich cua tam giac la :%f", s);
        }else{
                printf("Day khong phai la ba canh cua tam giac");
        }
	}	           
