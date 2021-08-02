#include<stdio.h>

//tong cac chu so cua so n
int main() {
	printf("nhap n (n>0) : ");
	int n;
	int tmp , sum = 0 ;
	scanf("%d", &n);
	while(n != 0) {
		tmp = n % 10 ;
		sum += tmp ;
		n /= 10 ;
	}
	printf("\nsum cac chu so cua la : %d", sum);
	return 0 ;
}
