#include <stdio.h>

int main(){
	int n,n2;
	printf("nhap so tien hien co:\n");
	scanf("%d",&n);
	printf("nhap so tien muon co:\n");
	scanf("%d",&n2);
	int i=1;
	while(n<n2){
		n+= n*8/100;
		i++;
	}
	printf("se can gui trong %d nam\n",i);
}
