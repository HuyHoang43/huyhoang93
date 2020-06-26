#include <stdio.h>

int main(){
	int n;
	printf("Insert n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Insert a number %d: \n",i);
		scanf("%d",&ary[i]);
	}
	int x=0;
	for(int i=n-1;i>=0;i--){
		if(ary[i] %2 !=0){
			x = ary[i];
			break;
		}
	}
	if(x%2!=0){
		printf("No Even number in array!");
	}else{
		printf("Last Even number in array: %d",x);
	}
}
