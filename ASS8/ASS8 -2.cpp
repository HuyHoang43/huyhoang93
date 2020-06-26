#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int *p;
	p = (int *)malloc(n*sizeof(int));
	for (int i=0;i<n;i++){
		printf("nhap pt thi %d: \n",i);
		scanf("%d",p+i);
	
	// bai nay e khong hieu thuat toan logic de lam, thay cho e goi y voi
