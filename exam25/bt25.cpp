#include<stdio.h>

void sum( int n) {
	printf("sum cac uoc chan cua n la ");
	int i =1 ;
	int sum = 0 ;
	while(i <= n) {
		if(n % i == 0 ) {
			if (i % 2 == 0) {
				sum +=i ;
			}
		}
		i++ ;
	}
	printf("%d",sum);
}
int main() {
	printf("nhap so n ");
	int n ;
	scanf("%d", &n);
	sum(n);
	return 0;
}
