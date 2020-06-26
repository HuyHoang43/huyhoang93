#include <stdio.h>

int main(){
	int n;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    int ary[n];
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &ary[i]);
    }
    int s = 0;
    int count = 0;
    for(int i = 1; i < n; i+=2){
        if(ary[i] % 2 == 1){
            count++;
            s += ary[i];
        }
    }
    printf("\nTrung binh cong = %0.2f", (float)s/count);
    
}


