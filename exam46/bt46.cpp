#include<stdio.h>

// dem cac chu so le cua n
void count(int n) {
		int count = 0;
	int tmp ;
	tmp = n ;
	if(n == 0) count = 1 ;
	while(tmp != 0) {
		if(tmp % 2 == 1) 	count++ ;
		{
			tmp /= 10 ;
		}
	}
	printf("\ncount cac chu so le cua n la : %d", count);
}
int main() {
	printf("nhap n(n>0) ") ;
	int n ;
	scanf("%d", &n) ;
	count(n);
	return 0 ;
}
