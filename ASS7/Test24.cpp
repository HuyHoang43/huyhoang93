#include <stdio.h>
#include <iostream>

int main(){
	int x =10;
	int *p;
	printf("gia tri cua x:\n");
	std::cout << x;
	printf("\ndia chi nha cu x:\n");
	std::cout << &x;
	p= &x;
	printf("\n gia tri cua p:\n");
	std::cout <<p;
	printf("\ndia chi nha cu p:\n");
	std::cout << &p;
	x = x-5;
	*(p) = *(p-5);
	printf("\ngia tri cua x:\n");
	std::cout << x;
}

