#include<stdio.h>

// nhap n. tinh tong cac uoc < n
int main() {
	printf("nhap n ");
	int n;
	scanf("%d", &n);
	int i=1;
	int sum =0 ;
	while(i< n) {
		if(n % i == 0) {
			sum +=i ;
		}
		i++;
	}
	printf("tong cac uoc la %d", sum);
	return 0 ;

}
