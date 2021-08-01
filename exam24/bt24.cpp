#include<stdio.h>

// liet ke cac uoc le cua so n
void lietke( int n) {
		int i = 1 ;

	while(i<= n ) {
		if(n % i == 0 ) {
			if(i % 2 == 1 ) {
				printf(" %d ", i);
			}
		}
		i++;
	};
}
int main() {
	int n ;
	printf("nhap so n : ");
	scanf("%d", &n);
	lietke(n);
	return 0;
}
