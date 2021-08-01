#include<stdio.h>

// tich cac uoc chan cua n
int main() {
	printf("nhap n ");
	int n ;
	scanf("%d", &n);
	int i = 1;
	int vol = 1 ;
	while( i<= n ) {
		if(n % i == 0) {
			if(i % 2 == 0) {
				vol *=i ;
			}
		}
		i++ ;
	}
	printf("vol cua n la %d", vol);
	return 0;
	
}
