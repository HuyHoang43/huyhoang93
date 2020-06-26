#include <stdio.h>

int main(){
	int n;
	printf("Insert n=\n");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++){
		printf("Insert a number %d: \n",i);
		scanf("%d",&s[i]);
	}
	float a;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i]> 0){
            count++;
            a += s[i];
		}
	}
	printf("\nThe average = %0.2f", a/count);
}
