#include<stdio.h>

void count( int n) {
		printf("count cac uoc so cua n ");
	int i = 1 ;
	int count = 0 ;
	while(i <= n ) {
		if(n % i == 0 ) {
			count ++  ;
		}
		i ++ ;
	} ;
	printf("%d", count) ;
}
int main() {
	printf("nhap so n : ");
	int n ;
	scanf("%d", &n);
    count(n);
	return 0;
}
