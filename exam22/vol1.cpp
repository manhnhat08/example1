#include<stdio.h>
//tich  cac uoc so cua so nguyen duong n
void vol(int n) {
		printf("volume cua cac uoc so la : ");
	 int i = 1 ;
	 int vol = 1 ;
	 while(i <= n ) {
	 	if(n % i == 0) {
	 		vol *= i ;
		 }
		 i += 1 ;
	 } ;
	 printf(" %d", vol) ;
}
int main() {
	printf("nhap n : ") ;
	int n ;
	scanf("%d", &n);
 	vol(n);
	 return 0 ;
}
