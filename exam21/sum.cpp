#include<stdio.h>

void sum1(int n) {
		printf("sum cua cac uoc so la ");
	int i = 1 ;
	int sum =0;
	while(i<= n) {

		if(n% i == 0) {
			sum+=i;

		}
		i+=1 ;
	};

	printf(" %d", sum);
	
}


int main() {
	printf("nhap so nguyen duong n = ") ;
	int n ;
	scanf("%d", &n );
  	sum1(n);
	return 0;
}
