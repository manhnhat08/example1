#include<stdio.h>

// giai pt ax+b = 0
void phuongTrinh(int a, int b) {
		int x ;
		if(a == 0) {
		if(b == 0 ) {
			printf("pt co vo so nghiem\n ") ;
		} else
			printf("pt vo nghiem\n ") ;
	} else if(a != 0) {
		x = (-b/a) ;
		printf("pt co nghiem x = %d", x) ;
	}
}
int main() {

	printf(" nhap a va b : ") ;
	int a, b ;
	int x ;
	scanf("%d%d", &a, &b );
	phuongTrinh(a,b);
	return 0 ;
}
