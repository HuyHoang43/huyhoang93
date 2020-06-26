#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("nhap pt thi %d: \n",i);
		scanf("%d",&ary[i]);
	}
	int s = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ary[i] % 2 != 0){
            count++;
            s += ary[i];
		}
	}
	printf("\nTrung binh cong = %0.2f", (float)s/count);
}

