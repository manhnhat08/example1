#include<stdio.h>

// dem so luong chu so cua n
void count(long n) {
	int count = 0 ;
	long tmp ;
	tmp = n ;
	if(n == 0) count = 1 ;
	while(tmp != 0) {
		count++ ;
		tmp /= 10 ;
	}
	printf("\nso luong cua chu so n la %d", count);
}
int main() {
	printf("nhap n(n>0) : ");
	long n ;
	scanf("%d", &n);
	count(n);
	return 0;
}
