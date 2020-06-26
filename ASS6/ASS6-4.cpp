#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d: \n",i);
		scanf("%d",&ary[i]);
	}
	int count = 0,xmax = 0;
	int s=0;
	for(int i=0;i<n;i++){
		if(ary[i]>0 && ary[i]>xmax){
			xmax=ary[i];
			count++;
			s+=xmax;
		}
	}
	printf("Tong chuoi so duong lon nhat: %d",s);
}

