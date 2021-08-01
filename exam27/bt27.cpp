#include<stdio.h>

// dem cac uoc chan cua n
int main() {
	printf("nhap n ");
	int n ;
	scanf("%d", &n);
	int i = 1 ;
	int count =0 ;
	while(i<=n){
		if(n % i == 0){
			if(i % 2 ==0){
				count++ ;
			}
		}
		i++ ;
	}
	printf("count cac uoc chan cua n la %d ", count);
	return 0 ;
}
