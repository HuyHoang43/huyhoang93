#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu trong mang:\n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("nhap pt thu %d :\n",i);
		scanf("%d",ary[i]);
	}
	int x;
	printf("nhap x=\n");
	scanf("%d",&x);
	int max = x;
	for(int i=0;i<n;i++){
		if(ary[i]<max){
			max = ary[i];
			break;
		}
	}
	if(max == x){
		printf("khong co sp nao < %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(ary[i]<max && ary[i]<x){
				max = ary[i];
			}
		}
		printf("so tiem can x: %d",max);
	}

}

