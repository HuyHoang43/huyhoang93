#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int *p;
	for (int i=0;i<n;i++){
		printf("nhap pt thi %d: \n",i);
		scanf("%d",p+i);
	}int count = 0; x = 0;
	for(int i=0;i<n;i++){
		if(*p>0){
			count++;
			if(count>x){
				x = count;
			}
		}else{
			count = 0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat: %d",x);

