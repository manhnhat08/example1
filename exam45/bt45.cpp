#include<stdio.h>

// tich cac chu so cua n
void tich(long n) {
	long tmp, vol = 1 ;
	while(n > 0) {
		tmp = n % 10 ;
		vol *= tmp ;
		n /= 10 ;
	}
	printf("\ntich cac chu so cua n la : %ld", vol);
}
int main() {
	printf("nhap n(n>0) ") ;
	long n ;
	scanf("%ld", &n) ;
	tich(n);
	
	return 0 ;
}
