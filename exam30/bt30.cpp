#include<stdio.h>


//nhap n. check n co phai la so hoan thien ko?
int main() {
	printf("nhap n ");
	int n, x, i;
	scanf("%d", &n);
	i = 1 ;
	x = 0 ;
	while(n > i) {

		if(n % i == 0) {
			x += i ;
		}
		i++ ;
	}
	if (x == n) {
		printf("\n%d la so hoan thien ", n);
	} else {
		printf("\n%d ko phai la so hoan thien ", n);
	}
	return 0 ;

}
