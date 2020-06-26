#include<stdio.h>
 
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int max =0;
	while (n>0){
		int tmp= n % 10;
		n /=10;
		if(tmp>max){
			max = tmp;	
		}
	}
	printf("chu so lon nhat la :%d",max);
}

 
