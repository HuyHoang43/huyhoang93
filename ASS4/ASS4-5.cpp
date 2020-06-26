#include <stdio.h>

int main(){
	int n,n2,t;
	printf("nhap so tien hien co:\n");
	scanf("%d",&n);
	printf("nhap so nam gui:\n");
	scanf("%d",&t);
	while(n<n2){
			n2 += n*8/100;
			t++;	
	}
	printf("so tien nhan duoc\n",n2);
	return 0;	
}
	
