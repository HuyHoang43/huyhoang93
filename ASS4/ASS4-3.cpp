#include <stdio.h>;

int main(){
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		if(n>1 && n<9){
			printf("%d la thu trong tuan:\n",n);
			break;
		}else{
			printf("moi nhap lai");
			break;
		}
	}
}
