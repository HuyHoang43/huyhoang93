#include <stdio.h>

int main(){
	int n,S=0,count=0;
	while(n<=1000){	
		printf("nhap 1 so > 1000:\n");
		scanf("%d",&n);
		count++;
		S+=n;
	}
	printf("Nguoi dung phai nhap %d lan moi thanh cong\n",count);
	printf("Gia tri trung binh qua nhung lan nhap: %0.2f",(float)S/count);
}

